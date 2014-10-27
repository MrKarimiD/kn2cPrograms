#include "tactictest2.h"

TacticTest2::TacticTest2(WorldModel *worldmodel, QObject *parent) :
    Tactic("TacticTest2", worldmodel, parent)
{
    numberOfInvalidRanges=0;
    numberOfValidRanges=0;
    canKick=false;
    go = false;
    state = 0;
}

RobotCommand TacticTest2::getCommand()
{
    RobotCommand rc;
    if(!wm->ourRobot[id].isValid) return rc;

    canKick=false;
    rc.maxSpeed = 2;

//    rc=goBehindBall();

//    if(canKick /*&& wm->cmgs.canKickBall()*/)
//    {
//        rc.kickspeedx=5;
//    }

    if(go)
    {
        if(state == 0)
        {
            Vector2D v;
            v = wm->kn->PredictDestination(wm->ourRobot[this->id].pos.loc,
                    wm->ball.pos.loc,rc.maxSpeed,wm->ball.vel.loc);
            Position p = wm->kn->AdjustKickPoint(v, Field::oppGoalCenter);

            rc.fin_pos = p;
//            float deg=atan((-rc.fin_pos.loc.y+wm->ball.pos.loc.y)/(-rc.fin_pos.loc.x+wm->ball.pos.loc.x));

//            if(rc.fin_pos.loc.x > wm->ball.pos.loc.x)
//            {
//                if(rc.fin_pos.loc.y > wm->ball.pos.loc.y)
//                    deg = M_PI + deg;
//                else
//                {
//                    deg = -M_PI + deg;
//                }
//            }

            if(wm->kn->IsReadyForKick(wm->ourRobot[id].pos, p, wm->ball.pos.loc))
            {
                rc.kickspeedx = 5;//150;
                //qDebug()<<"Kick It";
            }

//            rc.fin_pos.dir = deg;
//            float dist = sqrt(pow(wm->ourRobot[id].pos.loc.x-wm->ball.pos.loc.x,2) + pow(wm->ourRobot[id].pos.loc.y-wm->ball.pos.loc.y,2));
//            qDebug()<<"dist:"<<dist;
//            if(fabs(dist) <= (ROBOT_RADIUS/2)+ROBOT_RADIUS)
//            {
//                state = 1;
//                if(wm->kn->CanKick(wm->ourRobot[id].pos,wm->ball.pos.loc))
//                {
//                    rc.kickspeedx = 5;
//                    qDebug()<<"Kick It";
//                }
//            }
        }
        else if(state == 1)
        {
            rc = goBehindBall();
            if(canKick)
            {
                rc.kickspeedx = 5;
                qDebug()<<"Kick It";
            }
        }

        //qDebug()<<"state:"<<state;
    }
    else
    {
            rc.fin_pos = wm->ourRobot[id].pos;
    }
//    else
//    {
//        if(fabs(wm->ball.vel.loc.length()) > 0.25 )
//        {

//            qDebug()<<"IF----------2";
//        }
//        else
//        {
//                rc.fin_pos = wm->ourRobot[id].pos;
//                qDebug()<<"IF----------3";
//        }
//    }
    //qDebug()<<"speed:"<<wm->ball.vel.loc.length();

    rc.useNav = true;
    rc.isBallObs = false;
    rc.isKickObs = true;
    return rc;
}

void TacticTest2::findCriticalPlayer()
{
    QList<int> our_agents = wm->kn->ActiveAgents();
    important_opp_agents.clear();
    important_our_agents.clear();

    //---------ActiveOppAgents
    QList<int> opp_agents;
    for(int i=0; i< PLAYERS_MAX_NUM; i++)
        if(wm->oppRobot[i].isValid)
            opp_agents.append(i);
    //---------------------

    QList<int> active_our_agents;
    QList<int> active_opp_agents;

    foreach(int i,our_agents)
    {
        if(wm->ourRobot[i].pos.loc.x>wm->ourRobot[id].pos.loc.x)
        {
            active_our_agents.append(i);
        }
    }

    foreach(int i,opp_agents)
    {
        if(wm->oppRobot[i].pos.loc.x>wm->ourRobot[id].pos.loc.x)
        {
            active_opp_agents.append(i);
        }
    }

    Line2D down(Field::oppGoalPost_R,wm->ball.pos.loc);
    Line2D up(Field::oppGoalPost_L,wm->ball.pos.loc);

    foreach (int i, active_opp_agents)
    {
        double Ymin=wm->ball.pos.loc.y+(-down.a()/down.b())*(wm->oppRobot[i].pos.loc.x-wm->ball.pos.loc.x);
        double Ymax=wm->ball.pos.loc.y+tan(-up.a()/up.b())*(wm->oppRobot[i].pos.loc.x-wm->ball.pos.loc.x);

        if(wm->oppRobot[i].pos.loc.y>Ymin && wm->oppRobot[i].pos.loc.y<Ymax)
        {
            important_opp_agents.append(i);
        }
    }

    foreach (int i, active_our_agents)
    {
        double Ymin=wm->ball.pos.loc.y+(-down.a()/down.b())*(wm->ourRobot[i].pos.loc.x-wm->ball.pos.loc.x);
        double Ymax=wm->ball.pos.loc.y+tan(-up.a()/up.b())*(wm->ourRobot[i].pos.loc.x-wm->ball.pos.loc.x);

        if(wm->ourRobot[i].pos.loc.y>Ymin && wm->ourRobot[i].pos.loc.y<Ymax)
        {
            important_our_agents.append(i);
        }
    }
}

void TacticTest2::findInvalidRanges()
{
    numberOfInvalidRanges=0;
    uGoal=(atan( (Field::oppGoalPost_L.y-wm->ball.pos.loc.y)/(Field::oppGoalPost_L.x-wm->ball.pos.loc.x)));
    dGoal=(atan( (Field::oppGoalPost_R.y-wm->ball.pos.loc.y)/(Field::oppGoalPost_R.x-wm->ball.pos.loc.x)));
    foreach (int i, important_opp_agents)
    {
        double alpha=asin(ROBOT_RADIUS/wm->ball.pos.loc.dist(wm->oppRobot[i].pos.loc));
        double beta=atan((wm->oppRobot[i].pos.loc.y-wm->ball.pos.loc.y)/(wm->oppRobot[i].pos.loc.x-wm->ball.pos.loc.x));
        angle[numberOfInvalidRanges][1]=beta+alpha;
        angle[numberOfInvalidRanges][0]=beta-alpha;
        numberOfInvalidRanges++;
    }
    foreach (int i, important_our_agents)
    {
        double alpha=asin(ROBOT_RADIUS/wm->ball.pos.loc.dist(wm->ourRobot[i].pos.loc));
        double beta=atan((wm->ourRobot[i].pos.loc.y-wm->ball.pos.loc.y)/(wm->ourRobot[i].pos.loc.x-wm->ball.pos.loc.x));
        angle[numberOfInvalidRanges][1]=beta+alpha;
        angle[numberOfInvalidRanges][0]=beta-alpha;
        numberOfInvalidRanges++;
    }
}

void TacticTest2::sortInvalidRanges()
{
    for(int i=0;i<numberOfInvalidRanges;i++)
    {
        for(int j=i+1;j<numberOfInvalidRanges;j++)
        {
            if(angle[i][0]>angle[j][0])
            {
                double temp=angle[i][0];
                angle[i][0]=angle[j][0];
                angle[j][0]=temp;
                temp=angle[i][1];
                angle[i][1]=angle[j][1];
                angle[j][1]=temp;
            }
        }
    }
}

void TacticTest2::findValidRanges()
{
    numberOfValidRanges=0;
    valid_angle[numberOfValidRanges][0]=dGoal;

    for(int i=0;i<numberOfInvalidRanges+1;i++)
    {
        valid_angle[numberOfValidRanges][1]=angle[i][0];
        valid_angle[numberOfValidRanges+1][0]=angle[i][1];
        numberOfValidRanges++;
    }

    valid_angle[numberOfValidRanges-1][1]=uGoal;
}

RobotCommand TacticTest2::goBehindBall()
{
    RobotCommand rc;
    canKick=false;

    rc.maxSpeed = 2;

    float deg=atan((0-wm->ball.pos.loc.y)/(3025-wm->ball.pos.loc.x));

    if(!wm->kn->ReachedToPos(wm->ourRobot[id].pos, rc.fin_pos, 30, 180))
    {
        rc.fin_pos.loc= {wm->ball.pos.loc.x-110*cos(deg),wm->ball.pos.loc.y-110*sin(deg)};
        rc.fin_pos.dir=atan((0-wm->ball.pos.loc.y)/(3025-wm->ball.pos.loc.x));
    }


   if(!wm->kn->ReachedToPos(wm->ourRobot[id].pos, rc.fin_pos, 20, 2))
   {
       double test=findBestPoint();
       rc.fin_pos.dir=test;
   }
    rc.fin_pos.loc= {wm->ball.pos.loc.x-100*cos(deg),wm->ball.pos.loc.y-100*sin(deg)};

    if(wm->kn->ReachedToPos(wm->ourRobot[id].pos, rc.fin_pos, 10, 4))
    {
        canKick=true;
    }

    return rc;
}

double TacticTest2::findBestPoint()
{
    findCriticalPlayer();
    findInvalidRanges();
    sortInvalidRanges();
    findValidRanges();
    double maxLength=0;
    int index=-1;
    for(int i=0;i<numberOfValidRanges;i++)
    {
        if(maxLength<valid_angle[i][1]-valid_angle[i][0])
        {
            index=i;
            maxLength=valid_angle[i][1]-valid_angle[i][0];
        }
    }

    return (valid_angle[index][0]+valid_angle[index][1])/2;
}

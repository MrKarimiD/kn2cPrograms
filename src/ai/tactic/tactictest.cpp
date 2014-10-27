#include "tactictest.h"


TacticTest::TacticTest(WorldModel *worldmodel, QObject *parent) :
    Tactic("TacticTest", worldmodel, parent)
{
    canKick = false;
    firstKick = false;
    kicked = false;
    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(timerEvent()));
}

RobotCommand TacticTest::getCommand()
{
    RobotCommand rc;
    if(!wm->ourRobot[id].isValid) return rc;

    rc.maxSpeed = 2;

//    if(!firstKick)
//    {
//        rc = goBehindBall();

//        //if(canKick)
//        qDebug()<<"Distance:"<<(wm->ourRobot[id].pos.loc-wm->ball.pos.loc).length();
//        if(wm->kn->CanKick(wm->ourRobot[id].pos,wm->ball.pos.loc))
//        {
//            qDebug()<<"Kicked";
//            rc.kickspeedx = 1;
//            firstKick = true;
//           // kicked = true;
//        }
//    }
//    else
//    {
//        rc.fin_pos = wm->ourRobot[id].pos;
//        if( (wm->ball.pos.loc-wm->ourRobot[id].pos.loc).length() > 120)
//        {
//            firstKick = true;
//            kicked = true;
//        }
//    }
    qDebug()<<"kicked:"<<kicked;
    qDebug()<<"speed:"<<wm->ball.vel.loc.length();
    if(!kicked)
    {
        if(!firstKick)
        {
            rc = goBehindBall();

            //if(canKick)
            qDebug()<<"CanKick:"<<wm->kn->CanKick(wm->ourRobot[id].pos,wm->ball.pos.loc);
            if(wm->kn->CanKick(wm->ourRobot[id].pos,wm->ball.pos.loc))
            {
                qDebug()<<"KickedKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK";
                timer->start(300);
                rc.kickspeedx = 2.5;//50;
                firstKick = true;
                // kicked = true;
            }
        }
        else
        {
            rc.fin_pos = wm->ourRobot[id].pos;
//            if(wm->ball.vel.loc.length() > 0.09)
//            {
//                qDebug()<<"INIF";
//                kicked = true;
//            }
//            else
//            {
//                firstKick = false;
//            }
        }
    }
    else
    {
        rc.fin_pos = wm->ourRobot[id].pos;
//        if(wm->ball.pos.loc.x>1800)
//        {
//            kicked = false;
//        }
    }


    rc.useNav = true;
    rc.isBallObs = false;
    rc.isKickObs = true;
    return rc;
}

RobotCommand TacticTest::goBehindBall()
{
    RobotCommand rc;
    canKick=false;

    rc.maxSpeed = 1;

    int index = findBestPlayerForPass();

    Vector2D target(wm->ourRobot[index].pos.loc.x,wm->ourRobot[index].pos.loc.y);
    Vector2D goal(target.x+500*cos(target.dir().DEG2RAD),target.y+500*sin(target.dir().DEG2RAD));

//    float deg=atan((goal.y-wm->ball.pos.loc.y)/(goal.x-wm->ball.pos.loc.x));

//    Vector2D vec(wm->ourRobot[index].pos.loc.x+500-wm->ball.pos.loc.y,wm->ourRobot[index].pos.loc.y-wm->ball.pos.loc.x);


//    if(goal.x < wm->ball.pos.loc.x)
//    {
//        if(goal.y > wm->ball.pos.loc.y)
//            deg = M_PI + deg;
//        else
//        {
//            deg = -M_PI + deg;
//        }
//    }
    //vec.setLength(100);
    rc.fin_pos = wm->kn->AdjustKickPoint(wm->ball.pos.loc,goal);
    //rc.fin_pos.dir = vec.dir().DEG2RAD;

//    if(!wm->kn->ReachedToPos(wm->ourRobot[id].pos, rc.fin_pos, 30, 180))
//    {
//        rc.fin_pos.loc= {wm->ball.pos.loc.x-110*cos(deg),wm->ball.pos.loc.y-110*sin(deg)};
//        //rc.fin_pos.dir=atan((wm->ourRobot[index].pos.loc.y-wm->ball.pos.loc.y)/(wm->ourRobot[index].pos.loc.x-wm->ball.pos.loc.x));
//        rc.fin_pos.dir=deg;
//    }


//   if(!wm->kn->ReachedToPos(wm->ourRobot[id].pos, rc.fin_pos, 20, 2))
//   {
//       //rc.fin_pos.dir = M_PI/2;
//   }
//    rc.fin_pos.loc= {wm->ball.pos.loc.x-100*cos(deg),wm->ball.pos.loc.y-100*sin(deg)};

//    if(wm->kn->ReachedToPos(wm->ourRobot[id].pos, rc.fin_pos, 10, 4))
//    {
//        canKick=true;
//    }

    return rc;
}

int TacticTest::findBestPlayerForPass()
{
    int index = -1;
    double min = 10000;

    for(int i=0;i<PLAYERS_MAX_NUM;i++)
    {
        if(wm->ourRobot[i].isValid && this->id != i)
        {
            if(wm->ball.pos.loc.dist(wm->ourRobot[i].pos.loc) < min)
            {
                min = wm->ourRobot[id].pos.loc.dist(wm->ourRobot[i].pos.loc);
                index = i;
            }
        }
    }
    return index;
}

void TacticTest::setKickerID(int index)
{
    this->id = index;
}

void TacticTest::timerEvent()
{
    timer->stop();
    if(firstKick)
    {
        if( (wm->ball.pos.loc-wm->ourRobot[id].pos.loc).length() > 200 )
        {
            kicked = true;
        }
        else
        {
            firstKick = false;
        }
    }
}

#include "playfreekickour.h"

PlayFreeKickOur::PlayFreeKickOur(WorldModel *worldmodel, QObject *parent) :
    Play("PlayFreeKickOur", worldmodel, parent)
{
    tGolie = new TacticGoalie(wm);

    numberOfDef = NUMOFDEFENDERS;

    tDefenderLeft = new TacticDefender(wm);
    tDefenderRight = new TacticDefender(wm);
    tDefenderMid = new TacticDefender(wm);

    tDefenderLeft->setDefenderPos(LEFT);
    tDefenderMid->setDefenderPos(CENTER);
    tDefenderRight->setDefenderPos(RIGHT);

    tPasser = new TacticKicker(wm);

    tAttacker1 = new TacticAttacker(wm);
    tAttacker2 = new TacticAttacker(wm);
}

int PlayFreeKickOur::enterCondition()
{
    if(wm->cmgs.ourFreeKick() || wm->cmgs.ourIndirectKick())
        return 100;
    else
        return 0;

    return 0;
}

void PlayFreeKickOur::execute()
{
    QList<int> activeAgents=wm->kn->ActiveAgents();
    activeAgents.removeOne(wm->ref_goalie_our);
    tactics[wm->ref_goalie_our]=tGolie;

    int kickerID = -1,receiverID = -1,anotherAttackerID = -1;
    switch (activeAgents.length()) {

    case 1:
        tactics[activeAgents.takeFirst()]=tDefenderMid;
        break;
    case 2:
        kickerID = activeAgents.takeFirst();
        tPasser->setKickerID(kickerID);
        tactics[kickerID]=tPasser;

        receiverID = activeAgents.takeFirst();
        this->wm->ourRobot[receiverID].Role = AgentRole::Receiver;
        tactics[receiverID]=tAttacker1;
        break;
    case 3:
        kickerID = activeAgents.takeFirst();
        tPasser->setKickerID(kickerID);
        tactics[kickerID]=tPasser;

        receiverID = tPasser->findBestPlayerForPass();
        activeAgents.removeOne(receiverID);
        this->wm->ourRobot[receiverID].Role = AgentRole::Receiver;
        tactics[receiverID]=tAttacker1;

        tactics[activeAgents.takeFirst()]=tDefenderMid;
        break;
    case 4:
        kickerID = activeAgents.takeFirst();
        tPasser->setKickerID(kickerID);
        tactics[kickerID]=tPasser;

        receiverID = tPasser->findBestPlayerForPass();
        activeAgents.removeOne(receiverID);
        this->wm->ourRobot[receiverID].Role = AgentRole::Receiver;
        tactics[receiverID]=tAttacker1;

        tactics[activeAgents.takeFirst()]=tDefenderRight;
        tactics[activeAgents.takeFirst()]=tDefenderLeft;
        break;
    case 5:
        switch (numberOfDef) {
        case 2:
            kickerID = activeAgents.takeFirst();
            tPasser->setKickerID(kickerID);
            tactics[kickerID]=tPasser;

            receiverID = tPasser->findBestPlayerForPass();
            activeAgents.removeOne(receiverID);
            this->wm->ourRobot[receiverID].Role = AgentRole::Receiver;
            tactics[receiverID]=tAttacker1;

            anotherAttackerID = activeAgents.takeFirst();
            activeAgents.removeOne(anotherAttackerID);
            this->wm->ourRobot[anotherAttackerID].Role = AgentRole::NoRole;
            tactics[anotherAttackerID]=tAttacker2;

            tactics[activeAgents.takeFirst()]=tDefenderRight;
            tactics[activeAgents.takeFirst()]=tDefenderLeft;
            break;
        case 3:
            kickerID = activeAgents.takeFirst();
            tPasser->setKickerID(kickerID);
            tactics[kickerID]=tPasser;

            receiverID = tPasser->findBestPlayerForPass();
            activeAgents.removeOne(receiverID);
            this->wm->ourRobot[receiverID].Role = AgentRole::Receiver;
            tactics[receiverID]=tAttacker1;

            tactics[activeAgents.takeFirst()]=tDefenderRight;
            tactics[activeAgents.takeFirst()]=tDefenderLeft;
            tactics[activeAgents.takeFirst()]=tDefenderMid;
            break;
        }
        break;
    }
}

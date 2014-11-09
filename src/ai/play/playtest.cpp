#include "playtest.h"

PlayTest::PlayTest(WorldModel *worldmodel, QObject *parent) :
    Play("PlayTest", worldmodel, parent)
{
    tAttacker = new TacticTest2(wm);
//    tDefenderMid=new TacticDefender(wm);
//    tDefenderLeft=new TacticDefender(wm);
//    tDefenderRight=new TacticDefender(wm);
//    tHalt=new TacticHalt(wm);
    tPasser = new TacticTest(wm);
    tTT = new TacticAttacker(wm);
}

int PlayTest::enterCondition()
{
    return /*2000*/0;
}

void PlayTest::execute()
{
    tPasser->setKickerID(1);
    tactics[1] = tPasser;
    int recieverID = tPasser->findBestPlayerForPass();
    if(tPasser->kicked)
        tAttacker->go = true;
    tactics[recieverID] = tAttacker;
//    tactics[0] = tTT;

    return ;

}


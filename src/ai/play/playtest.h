#ifndef PLAYTEST_H
#define PLAYTEST_H

#include "play.h"

class PlayTest : public Play
{
    Q_OBJECT
public:
    explicit PlayTest(WorldModel *worldmodel, QObject *parent = 0);
    virtual void execute();
    //virtual Tactic* getTactic(int id);
    virtual int enterCondition();

private:
    TacticTest* tPasser;
    TacticTest2* tAttacker;
    TacticAttacker* tTT;
    TacticDefender* tDefenderLeft;
    TacticDefender* tDefenderRight;
    TacticHalt* tHalt;
    TacticGoalie* tGoalie;

};

#endif // PLAYTEST_H

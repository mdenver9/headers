#pragma once

#include "../Mob"


class ChargeAttackGoal : Goal {

public:
    virtual ChargeAttackGoal::~ChargeAttackGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    ChargeAttackGoal(Mob &);
};

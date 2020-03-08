#pragma once

#include "../Mob"


class SwoopAttackGoal : Goal {

public:
    virtual SwoopAttackGoal::~SwoopAttackGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    SwoopAttackGoal(Mob &, float, FloatRange);
};

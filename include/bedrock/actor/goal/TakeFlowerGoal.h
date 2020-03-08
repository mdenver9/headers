#pragma once

#include "../Mob"


class TakeFlowerGoal : Goal {

public:
    virtual TakeFlowerGoal::~TakeFlowerGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    TakeFlowerGoal(Mob &);
};

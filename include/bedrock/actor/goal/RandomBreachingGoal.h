#pragma once

#include "../Mob"


class RandomBreachingGoal : RandomStrollGoal {

public:
    virtual RandomBreachingGoal::~RandomBreachingGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual bool canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual void _setWantedPosition(void);

    RandomBreachingGoal(Mob &, float, int, int, int, float);
};

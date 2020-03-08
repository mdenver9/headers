#pragma once

#include "../Squid"


class SquidOutOfWaterGoal : Goal {

public:
    virtual SquidOutOfWaterGoal::~SquidOutOfWaterGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    SquidOutOfWaterGoal(Squid &);
};

#pragma once

class AvoidMobGoal : Goal {

public:
    virtual AvoidMobGoal::~AvoidMobGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual void findNearestEntityToAvoid(float);

    AvoidMobGoal(Mob &, float, float, float, float, float, bool);
};
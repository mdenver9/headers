#pragma once

class RiverFollowingGoal : Goal {

public:
    virtual ~RiverFollowingGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void RiverFollowingGoal(Mob &, float, float);
    void determineSteerDirection(void);
};

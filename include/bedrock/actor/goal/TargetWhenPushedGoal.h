#pragma once

class TargetWhenPushedGoal : Goal {

public:
    virtual TargetWhenPushedGoal::~TargetWhenPushedGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual bool canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    TargetWhenPushedGoal(Mob &, std::vector<MobDescriptor, std::allocator<MobDescriptor>>, float);
    void _isValidTarget(Actor &);
};
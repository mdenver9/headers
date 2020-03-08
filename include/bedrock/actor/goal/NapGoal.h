#pragma once

#include "../Mob"
#include "../../../unmapped/Tick"


class NapGoal : Goal {

public:
    static long MOB_DETECT_TIME;

    virtual NapGoal::~NapGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    NapGoal(Mob &, float, float, float, float, ActorFilterGroup const&, ActorFilterGroup const&);
    void _invalidCooldown(void);
    void _setCooldown(void);
    void _canSleep(Tick const&)const;
    void _detectsMobs(void)const;
};

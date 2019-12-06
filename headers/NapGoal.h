#pragma once

class NapGoal : Goal {

public:
    static long NapGoal::MOB_DETECT_TIME;

    virtual ~NapGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void NapGoal(Mob &, float, float, float, float, ActorFilterGroup const&, ActorFilterGroup const&);
    void _invalidCooldown(void);
    void _setCooldown(void);
    void _canSleep(Tick const&)const;
    void _detectsMobs(void)const;
};

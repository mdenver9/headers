#pragma once

class SquidIdleGoal : Goal {

    virtual void SquidIdleGoal::~SquidIdleGoal();
    virtual void SquidIdleGoal::~SquidIdleGoal();
    virtual void canUse(void);
    virtual void canContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
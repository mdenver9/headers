#pragma once

class FindUnderwaterTreasureGoal : Goal {

public:
    virtual ~FindUnderwaterTreasureGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual bool canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void FindUnderwaterTreasureGoal(Mob &, float, int, int);
};

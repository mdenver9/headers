#pragma once

class CircleAroundAnchorGoal : Goal {

public:
    virtual ~CircleAroundAnchorGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void CircleAroundAnchorGoal(Mob &, float, FloatRange, int, FloatRange, FloatRange, int, float);
    void _calculateHeightOffset(void)const;
    void _setAnchorAboveTarget(void);
    void _setAnchorAboveGround(void);
    void _selectNext(void);
    void _touchingTarget(void)const;
};

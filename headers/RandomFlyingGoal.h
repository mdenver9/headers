#pragma once

class RandomFlyingGoal : RandomStrollGoal {

public:
    virtual ~RandomFlyingGoal();
    virtual bool canUse(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual void _setWantedPosition(void);

    void RandomFlyingGoal(Mob &, float, int, int, bool);
    void _getTreePos(Vec3 &)const;
};

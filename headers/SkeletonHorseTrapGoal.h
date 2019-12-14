#pragma once

class SkeletonHorseTrapGoal : Goal {

public:
    virtual ~SkeletonHorseTrapGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void SkeletonHorseTrapGoal(Horse &, int, float);
    void _getClosestPlayer(void)const;
    void _createHorse(Difficulty const&);
    void _createSkeleton(Difficulty const&, Horse const&);
};

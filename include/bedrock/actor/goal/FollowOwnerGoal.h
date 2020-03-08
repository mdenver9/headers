#pragma once

#include "../Mob"
#include "../Player"


class FollowOwnerGoal : Goal {

public:
    virtual FollowOwnerGoal::~FollowOwnerGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);

    FollowOwnerGoal(Mob &, float, float, float);
};

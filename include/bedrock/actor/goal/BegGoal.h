#pragma once

#include "../Mob"
#include "../Player"


class BegGoal : Goal {

public:
    virtual BegGoal::~BegGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    BegGoal(Mob &, std::vector<ItemDescriptor, std::allocator<ItemDescriptor>> const&, float, int, int);
    void _playerHoldingInteresting(Player *);
};

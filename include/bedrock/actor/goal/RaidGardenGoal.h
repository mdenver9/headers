#pragma once

#include "../Mob"
#include "../../../unmapped/BlockSource"


class RaidGardenGoal : BaseMoveToBlockGoal {

public:
    virtual RaidGardenGoal::~RaidGardenGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);

    RaidGardenGoal(Mob &, float, int, int, int, float, int, int, int, int, std::set<Block const*, std::less<Block const*>, std::allocator<Block const*>> const&);
};

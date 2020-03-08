#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Player"
#include "../../unmapped/Random"


class BlastFurnaceBlock : FurnaceBlock {

public:
    virtual BlastFurnaceBlock::~BlastFurnaceBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    BlastFurnaceBlock(std::string const&, int, bool);
};

#pragma once

#include "../../unmapped/BlockSource"
#include "../../unmapped/Block"


class WaterlilyBlock : BushBlock {

public:
    virtual WaterlilyBlock::~WaterlilyBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canContainLiquid(void)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getColor(Block const&)const;
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const;

    WaterlilyBlock(std::string const&, int);
};

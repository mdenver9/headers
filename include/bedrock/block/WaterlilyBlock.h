#pragma once

#include <string>
#include "BushBlock.h"


class WaterlilyBlock : BushBlock {

public:
    ~WaterlilyBlock();
    virtual void getColor(Block const&)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool canContainLiquid()const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    WaterlilyBlock(std::string const&, int);
};

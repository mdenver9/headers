#pragma once

#include <string>
#include "BlockLegacy.h"


class CocoaBlock : BlockLegacy {

public:
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool canBeSilkTouched()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    ~CocoaBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    CocoaBlock(std::string const&, int);
};

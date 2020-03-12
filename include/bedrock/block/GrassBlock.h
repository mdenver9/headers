#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class GrassBlock : BlockLegacy {

public:
    static long MIN_BRIGHTNESS;

    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual bool canBeOriginalSurface()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~GrassBlock();
    virtual void calcVariant(BlockSource &, BlockPos const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getColor(Block const&)const;
    virtual void waterSpreadCausesSpawn()const;
    void _getGrassSide(int)const;
    void _isGrowthBlockingHalfSlabBlock(Block const&)const;
    void _randomWalk(BlockSource &, BlockPos &, int)const;
    void _isGrowthBlockingSolidBlock(Block const&, Material const&)const;
    GrassBlock(std::string const&, int);
    void _canBeGrass(BlockSource const&, BlockPos const&)const;
    void _isGrowthBlockingStairBlock(Block const&)const;
    void _translucencyAllowsGrass(Material const&)const;
};

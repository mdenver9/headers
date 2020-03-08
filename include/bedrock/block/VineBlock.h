#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Player"
#include "../actor/Actor"
#include "../../unmapped/Random"


class VineBlock : BlockLegacy {

public:
    static long VINE_SOUTH;
    static long VINE_NORTH;
    static long VINE_EAST;
    static long VINE_WEST;
    static long VINE_ALL;

    virtual VineBlock::~VineBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getColor(Block const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;

    void _getFacingData(int);
    VineBlock(std::string const&, int);
    void _isAcceptableNeighbor(Block const&)const;
    void updateSurvival(BlockSource &, BlockPos const&)const;
};

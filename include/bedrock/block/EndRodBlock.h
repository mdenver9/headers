#pragma once

#include <string>
#include "BlockLegacy.h"
#include <vector>


class EndRodBlock : BlockLegacy {

public:
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    ~EndRodBlock();
    virtual bool breaksFallingBlocks(Block const&)const;
    void _shapeFromDirection(Vec3 &, Vec3 &, int)const;
    EndRodBlock(std::string const&, int);
    void _mirror(unsigned char)const;
    void _shouldMirror(unsigned char, unsigned char)const;
    bool canStandOn(BlockSource &, BlockPos const&)const;
};

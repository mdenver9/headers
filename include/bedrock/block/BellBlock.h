#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "ActorBlock.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../util/Random.h"


class BellBlock : ActorBlock {

public:
    virtual void use(Player &, BlockPos const&)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    ~BellBlock();
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onProjectileHit(BlockSource &, BlockPos const&, Actor const&)const;
    virtual bool canContainLiquid()const;
    virtual void movedByPiston(BlockSource &, BlockPos const&)const;
    void _sendBellUsedEventToClient(BlockSource const&, Actor const&)const;
    BellBlock(std::string const&, int);
    void _getShape(Block const&, AABB &)const;
    bool hasValidAttachment(Block const&, BlockSource &, BlockPos const&)const;
    void _determineAttachment(Actor &, BlockSource &, BlockPos const&, unsigned char)const;
    void _checkAlive(BlockSource &, BlockPos const&)const;
};

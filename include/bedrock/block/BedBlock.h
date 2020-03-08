#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Player"
#include "../actor/Actor"


class BedBlock : BlockLegacy {

public:
    static long HEAD_DIRECTION_OFFSETS;
    static long HEAD_PIECE_DATA;
    static long OCCUPIED_DATA;

    virtual BedBlock::~BedBlock();
    virtual void getNextBlockPermutation(Block const&)const;
    virtual bool isInteractiveBlock(void)const;
    virtual bool canFillAtPos(BlockSource &, BlockPos const&, Block const&)const;
    virtual void sanitizeFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void updateEntityAfterFallOn(Actor &)const;
    virtual bool isBounceBlock(void)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void telemetryVariant(BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual bool canBeSilkTouched(void)const;

    BedBlock(std::string const&, int);
    void setOccupied(BlockSource &, BlockPos const&, bool);
    void findStandUpPosition(BlockSource &, BlockPos const&, int, BlockPos&);
};

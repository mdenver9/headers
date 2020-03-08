#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Player"
#include "../../unmapped/Random"


class FlowerPotBlock : ActorBlock {

public:
    virtual FlowerPotBlock::~FlowerPotBlock();
    virtual bool isInteractiveBlock(void)const;
    virtual bool isValidAuxValue(int)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;

    FlowerPotBlock(std::string const&, int);
    bool isCubeShaped(void);
    bool isSolidRender(void)const;
    void getFlowerPotEntity(BlockSource &, BlockPos const&)const;
    bool isSupportedBlock(Block const&)const;
};

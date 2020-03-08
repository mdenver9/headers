#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Actor"
#include "../../unmapped/Random"
#include "../../unmapped/BaseGameVersion"


class ColoredTorchBlock : TorchBlock {

public:
    virtual ColoredTorchBlock::~ColoredTorchBlock();
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getVariant(Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    ColoredTorchBlock(std::string const&, int, ColoredTorchColor);
    void _getColor(Block const&)const;
    void getItemForColor(ColoredTorchColor);
};

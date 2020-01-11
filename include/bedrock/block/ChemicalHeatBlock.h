#pragma once

class ChemicalHeatBlock : BlockLegacy {

public:
    virtual ChemicalHeatBlock::~ChemicalHeatBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getExtraRenderLayers(void)const;

    ChemicalHeatBlock(std::string const&, int);
    void _getRelativeOffsets(void);
    void _melt(BlockSource &, BlockPos const&, Random &)const;
    void _queueTick(BlockSource &, BlockPos const&, Random &)const;
};
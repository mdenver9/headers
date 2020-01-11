#pragma once

class DiodeBlock : BlockLegacy {

public:
    virtual DiodeBlock::~DiodeBlock();
    virtual bool isSignalSource(void)const;
    virtual void getDirectSignal(BlockSource &, BlockPos const&, int)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual bool canSpawnOn(void)const;
    virtual void getSignal(BlockSource &, BlockPos const&, int)const;
    virtual bool isLocked(BlockSource &, BlockPos const&)const;
    virtual bool isSameDiode(Block const&)const;
    virtual void shouldPrioritize(BlockSource &, BlockPos const&)const;
    virtual bool isOn(void)const;
    virtual void shouldTurnOn(BlockSource &, BlockPos const&)const;
    virtual void getInputSignal(BlockSource &, BlockPos const&)const;
    virtual bool isAlternateInput(Block const&)const;
    virtual void getAlternateSignal(BlockSource &, BlockPos const&)const;
    virtual void getOutputSignal(Block const&)const;
    virtual void getTurnOffDelay(Block const&)const;

    bool isDiode(Block const&);
    DiodeBlock(std::string const&, int, bool);
    void checkTickOnNeighbor(BlockSource &, BlockPos const&, Block const&)const;
    void getAlternateSignalAt(BlockSource &, BlockPos const&, int)const;
};
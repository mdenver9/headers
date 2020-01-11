#pragma once

class PoweredRailBlock : BaseRailBlock {

public:
    virtual PoweredRailBlock::~PoweredRailBlock();
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getVariant(Block const&)const;

    PoweredRailBlock(std::string const&, int);
};
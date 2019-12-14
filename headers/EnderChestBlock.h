#pragma once

class EnderChestBlock : ChestBlock {

public:
    virtual ~EnderChestBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeSilkTouched(void)const;

    void EnderChestBlock(std::string const&, int);
};

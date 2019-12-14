#pragma once

class StrippedLogBlock : RotatedPillarBlock {

public:
    virtual ~StrippedLogBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void StrippedLogBlock(std::string const&, int);
};

#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../../unmapped/Random"


class NewLogBlock : LogBlock {

public:
    virtual NewLogBlock::~NewLogBlock();
    virtual bool isStrippable(Block const&)const;
    virtual void getStrippedBlock(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    NewLogBlock(std::string const&, int);
};

#pragma once

#include "../../unmapped/Random"
#include "../../unmapped/Block"


class StoneBrickBlock : BlockLegacy {

public:
    virtual StoneBrickBlock::~StoneBrickBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    StoneBrickBlock(std::string const&, int, Material const&);
};

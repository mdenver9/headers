#pragma once

class ClothBlock : BlockLegacy {

public:
    virtual ~ClothBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void ClothBlock(std::string const&, int);
};

#pragma once

class ClayBlock : BlockLegacy {

public:
    virtual ~ClayBlock();
    virtual bool canBeOriginalSurface(void)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;

    void ClayBlock(std::string const&, int);
};

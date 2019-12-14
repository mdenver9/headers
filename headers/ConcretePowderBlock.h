#pragma once

class ConcretePowderBlock : HeavyBlock {

public:
    virtual ~ConcretePowderBlock();
    virtual bool isValidAuxValue(int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void shouldStopFalling(Actor &)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getDustColor(Block const&)const;

    void ConcretePowderBlock(std::string const&, int);
    void _tryTouchWater(BlockSource &, BlockPos const&, std::optional<BlockColor>)const;
};

#pragma once

class HugeMushroomBlock : BlockLegacy {

public:
    virtual ~HugeMushroomBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void HugeMushroomBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Material const&, HugeMushroomBlock::Type);
};

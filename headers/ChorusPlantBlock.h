#pragma once

class ChorusPlantBlock : BlockLegacy {

public:
    static long ChorusPlantBlock::PLANT_WIDTH;
    static long ChorusPlantBlock::PLANT_HEIGHT;
    static long ChorusPlantBlock::PLANT_ITEM_DIMENSION;

    virtual ~ChorusPlantBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual bool isWaterBlocking(void)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual bool canBeSilkTouched(void)const;

    void ChorusPlantBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    bool canGrowChorus(Block const&);
    void connectsTo(BlockSource &, BlockPos const&, BlockPos const&)const;
};

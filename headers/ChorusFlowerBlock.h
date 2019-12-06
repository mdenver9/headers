#pragma once

class ChorusFlowerBlock : BlockLegacy {

public:
    static long ChorusFlowerBlock::DEAD_AGE;
    static long ChorusFlowerBlock::GROW_RATE;
    static long ChorusFlowerBlock::BRANCH_DIRECTIONS;

    virtual ~ChorusFlowerBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual bool isWaterBlocking(void)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;

    void ChorusFlowerBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void _allNeighborsEmpty(BlockSource &, BlockPos const&, unsigned char);
    void _placeGrownFlower(BlockSource &, BlockPos const&, int)const;
    void _placeDeadFlower(BlockSource &, BlockPos const&)const;
    void generatePlant(BlockSource &, BlockPos const&, Random &, int);
    void _growTreeRecursive(BlockSource &, BlockPos const&, BlockPos const&, Random &, int, int);
};

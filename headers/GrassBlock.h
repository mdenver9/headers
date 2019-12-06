#pragma once

class GrassBlock : BlockLegacy {

public:
    static long GrassBlock::MIN_BRIGHTNESS;

    virtual ~GrassBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeOriginalSurface(void)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void calcVariant(BlockSource &, BlockPos const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getColor(Block const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;

    void GrassBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void _getGrassSide(int)const;
    void _canBeGrass(BlockSource const&, BlockPos const&)const;
    void _randomWalk(BlockSource &, BlockPos &, int)const;
    void _translucencyAllowsGrass(Material const&)const;
    void _isGrowthBlockingSolidBlock(Block const&, Material const&)const;
    void _isGrowthBlockingStairBlock(Block const&)const;
    void _isGrowthBlockingHalfSlabBlock(Block const&)const;
};

#pragma once

class BannerBlock : ActorBlock {

public:
    static long BannerBlock::STANDING_AABB;
    static long BannerBlock::NORTH_AABB;
    static long BannerBlock::SOUTH_AABB;
    static long BannerBlock::EAST_AABB;
    static long BannerBlock::WEST_AABB;

    virtual ~BannerBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getVariant(Block const&)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;

    void BannerBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, bool);
    void getShape(int, AABB &)const;
    void _itemInstanceFromBlockEntity(BannerBlockActor const*)const;
};

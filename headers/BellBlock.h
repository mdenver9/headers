#pragma once

class BellBlock : ActorBlock {

public:
    virtual ~BellBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void onProjectileHit(BlockSource &, BlockPos const&, Actor const&)const;
    virtual bool canContainLiquid(void)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void movedByPiston(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void BellBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void _getShape(Block const&, AABB &)const;
    void _determineAttachment(Actor &, BlockSource &, BlockPos const&, unsigned char)const;
    void _checkAlive(BlockSource &, BlockPos const&)const;
    void _sendBellUsedEventToClient(BlockSource const&, Actor const&)const;
    bool hasValidAttachment(Block const&, BlockSource &, BlockPos const&)const;
};

#pragma once

class FurnaceBlock : ActorBlock {

public:
    virtual ~FurnaceBlock();
    virtual bool isContainerBlock(void)const;
    virtual bool isCraftingBlock(void)const;
    virtual bool isInteractiveBlock(void)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool hasComparatorSignal(void)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void FurnaceBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, bool);
    void setLit(bool, BlockSource &, BlockPos const&, BlockActorType, Block const&, Block const&);
};

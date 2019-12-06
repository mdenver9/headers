#pragma once

class DispenserBlock : ActorBlock {

public:
    virtual ~DispenserBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isContainerBlock(void)const;
    virtual bool isInteractiveBlock(void)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool hasComparatorSignal(void)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getTickDelay(void)const;
    virtual void dispenseFrom(BlockSource &, BlockPos const&)const;

    void DispenserBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void getDispensePosition(BlockSource &, Vec3 const&)const;
    void getFacing(Block const&)const;
    void ejectItem(BlockSource &, Vec3 const&, unsigned char, ItemStack const&, Container &, int)const;
    void ejectItem(BlockSource &, Vec3 const&, unsigned char, ItemStack const&);
    void recalcLockDir(BlockSource &, BlockPos const&);
};

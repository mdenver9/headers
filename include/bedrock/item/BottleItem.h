#pragma once

class BottleItem : Item {

public:
    virtual BottleItem::~BottleItem();
    virtual bool isLiquidClipItem(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    BottleItem(std::string const&, int);
    void _createBottledItem(Actor &, ItemStack &, Item const&)const;
    void _fillBottleViaDispenser(BlockSource &, Item const&, Container &, int, Vec3 const&, unsigned char)const;
};
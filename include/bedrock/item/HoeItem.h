#pragma once

class HoeItem : Item {

public:
    virtual HoeItem::~HoeItem();
    virtual bool isHandEquipped(void)const;
    virtual void getEnchantSlot(void)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    HoeItem(std::string const&, int, Item::Tier);
};
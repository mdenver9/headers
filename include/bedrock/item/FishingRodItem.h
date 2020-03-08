#pragma once

#include "../actor/Mob"
#include "../actor/Player"


class FishingRodItem : Item {

public:
    virtual FishingRodItem::~FishingRodItem();
    virtual bool isHandEquipped(void)const;
    virtual bool requiresInteract(void)const;
    virtual void getEnchantSlot(void)const;
    virtual void getEnchantValue(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void getInteractText[abi:cxx11](Player const&)const;
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);

    FishingRodItem(std::string const&, int);
};

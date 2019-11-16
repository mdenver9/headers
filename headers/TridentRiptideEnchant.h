#pragma once

class TridentRiptideEnchant : Enchant {

    virtual void TridentRiptideEnchant::~TridentRiptideEnchant();
    virtual void TridentRiptideEnchant::~TridentRiptideEnchant();
    virtual void isCompatibleWith(Enchant::Type)const;
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMinLevel(void)const;
    virtual void getMaxLevel(void)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual void isMeleeDamageEnchant(void)const;
    virtual void isProtectionEnchant(void)const;
    virtual void isTreasureOnly(void)const;
}

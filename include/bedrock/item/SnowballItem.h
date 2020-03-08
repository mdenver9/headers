#pragma once

#include "../../unmapped/BlockSource"


class SnowballItem : Item {

public:
    virtual SnowballItem::~SnowballItem();
    virtual bool isThrowable(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;

    SnowballItem(std::string const&, int);
};

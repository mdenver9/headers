#pragma once

class DyePowderItem : FertilizerItem {

public:
    static long DyePowderItem::mColorMap;

    virtual ~DyePowderItem();
    virtual bool isDye(void)const;
    virtual bool isFertilizer(int)const;
    virtual bool isValidAuxValue(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void DyePowderItem(std::string const&, int);
};

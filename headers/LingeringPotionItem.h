#pragma once

class LingeringPotionItem : PotionItem {

public:
    virtual ~LingeringPotionItem();
    virtual bool isThrowable(void)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual void getPotionType(void)const;

    void LingeringPotionItem(std::string const&, int);
};

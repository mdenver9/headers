#pragma once

class Inventory : FillingContainer {

public:
    virtual ~Inventory();
    virtual void init(void);
    virtual void add(ItemStack &);
    virtual bool canAdd(ItemStack const&)const;
    virtual void dropAll(bool);
    virtual void getEmptySlotsCount(void)const;
    virtual void getFirstEmptySlot(void)const;
    virtual void setContainerSize(int);

    void Inventory(Player *);
    void setupDefault(void);
    void _getDefaultStartingMapScale(void)const;
    void clearInventoryWithDefault(bool);
    void tick(int);
    void getComplexItems(void);
};

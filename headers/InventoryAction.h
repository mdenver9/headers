#pragma once

class InventoryAction {

public:

    void InventoryAction(InventorySource, unsigned int, ItemStack const&, ItemStack const&);
    void getSource(void)const;
    void getSlot(void)const;
    void getFromItem(void)const;
    void getToItem(void)const;
    void InventoryAction(InventoryAction const&);
    void reverse(void)const;
};

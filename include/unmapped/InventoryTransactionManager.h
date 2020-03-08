#pragma once

#include "../bedrock/item/ItemStack"
#include "../bedrock/actor/Player"


class InventoryTransactionManager {

public:

    void _createServerSideAction(ItemStack const&, ItemStack const&);
    InventoryTransactionManager(Player &);
    void getCurrentTransaction(void)const;
    void reset(void);
    void resetExpectedActions(void);
    void addExpectedAction(InventoryAction const&);
    void addAction(InventoryAction const&);
    void checkActionExpected(InventoryAction const&);
    void getSourceCount(void)const;
    void forceBalanceTransaction(void);
    void _logExpectedActions(void)const;
};

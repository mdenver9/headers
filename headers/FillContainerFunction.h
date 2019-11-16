#pragma once

class FillContainerFunction : LootItemFunction {

    virtual void FillContainerFunction::~FillContainerFunction();
    virtual void FillContainerFunction::~FillContainerFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
}

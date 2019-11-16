#pragma once

class RandomBlockStateFunction : LootItemFunction {

    virtual void RandomBlockStateFunction::~RandomBlockStateFunction();
    virtual void RandomBlockStateFunction::~RandomBlockStateFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
}
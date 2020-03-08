#pragma once

#include "../bedrock/item/ItemStack"
#include "../json/Value"


class LootTableEntry : LootPoolEntry {

public:
    virtual void _createItem(std::vector<ItemStack, std::allocator<ItemStack>> &, Random &, LootTableContext &);
    virtual void _isExperimental(void)const;
    virtual LootTableEntry::~LootTableEntry();

    void deserialize(Json::Value);
    LootTableEntry(std::unique_ptr<LootTable, std::default_delete<LootTable>>);
};

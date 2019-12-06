#pragma once

class SetItemLoreFunction : LootItemFunction {

public:
    virtual ~SetItemLoreFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);

    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    void SetItemLoreFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, std::vector const&<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::char_traits<char>>>);
};

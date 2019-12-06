#pragma once

class MapUpgradingRecipe : MultiRecipe {

public:
    static long MapUpgradingRecipe::CraftingTableID;
    static long MapUpgradingRecipe::CartographyTableID;

    virtual ~MapUpgradingRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize(void)const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem(void)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size(void)const;
    virtual bool isExperimental(void)const;

    void MapUpgradingRecipe(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, mce::UUID const&);
    void _getTagForUUID(mce::UUID const&);
};

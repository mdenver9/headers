#pragma once

class ShapedRecipe : Recipe {

public:
    virtual ~ShapedRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize(void)const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem(void)const;
    virtual bool isShapeless(void)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size(void)const;
    virtual bool isExperimental(void)const;

    void ShapedRecipe(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, int, std::vector<RecipeIngredient, std::allocator<RecipeIngredient>> const&, std::vector const&<ItemInstance, std::allocator<std::vector const>>, Util::HashString, int, mce::UUID const*);
    void generateUUID(void);
    void setId(mce::UUID const&);
    void ShapedRecipe(ShapedRecipe&&);
    void matches(CraftingContainer &, int, int, bool)const;
    void getIngredients(void)const;
};

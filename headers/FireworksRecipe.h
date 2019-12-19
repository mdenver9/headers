#pragma once

class FireworksRecipe : MultiRecipe {

public:
    static long ID;

    virtual ~FireworksRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize(void)const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem(void)const;
    virtual bool isShapeless(void)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size(void)const;
    virtual bool isExperimental(void)const;

    void FireworksRecipe(std::string, mce::UUID const*);
};

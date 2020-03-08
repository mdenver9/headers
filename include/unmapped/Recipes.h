#pragma once

#include "../bedrock/crafting/recipe/ShapedRecipe"
#include "../bedrock/crafting/recipe/MultiRecipe"
#include "../bedrock/crafting/recipe/RepairItemRecipe"
#include "../bedrock/item/ItemInstance"
#include "../bedrock/crafting/recipe/ShapelessRecipe"
#include "../json/Value"
#include "../bedrock/pack/ResourcePackManager"
#include "../bedrock/crafting/recipe/Recipe"


class Recipes {

public:

    void getFurnaceRecipes(void)const;
    void clearRecipes(void);
    void init(ResourcePackManager &);
    void loadRecipes(ResourcePackManager &);
    void _addMapRecipes(void);
    void addShapelessRecipe(std::string, ItemInstance const&, std::vector<Recipes::Type, std::allocator<Recipes::Type>> const&, std::vector const&<Util::HashString, std::allocator<std::vector const&>>, int, std::function<std::unique_ptr<ShapelessRecipe, std::default_delete<ShapelessRecipe>> ()(std::string, std::vector const&<RecipeIngredient, std::allocator<std::vector const>>, std::vector const&<ItemInstance, std::allocator<ItemInstance>>, std::vector const&)>);
    void addShulkerBoxRecipe(std::string &, ItemInstance const&, std::vector<Recipes::Type, std::allocator<Recipes::Type>> const&, std::vector const&<Util::HashString, std::allocator<std::vector const&>>);
    void addShapedRecipe(std::string, ItemInstance const&, std::string const&, std::string const&, std::vector<Recipes::Type, std::allocator<Recipes::Type>> const&, std::vector const&<Util::HashString, std::allocator<std::vector const&>>, int, std::function<std::unique_ptr<ShapedRecipe, std::default_delete<ShapedRecipe>> ()(std::string, int, int, std::vector const&<RecipeIngredient, std::allocator<std::vector const>>, std::vector const&<ItemInstance, std::allocator<ItemInstance>>, std::vector const&)>);
    void addShapedRecipe(std::string, ItemInstance const&, std::string const&, std::string const&, std::string const&, std::vector<Recipes::Type, std::allocator<Recipes::Type>> const&, std::vector const&<Util::HashString, std::allocator<std::vector const&>>, int, std::function<std::unique_ptr<ShapedRecipe, std::default_delete<ShapedRecipe>> ()(std::string, int, int, std::vector const&<RecipeIngredient, std::allocator<std::vector const>>, std::vector const&<ItemInstance, std::allocator<ItemInstance>>, std::vector const&)>);
    void addShapedRecipe(std::string, ItemInstance const&, std::string const&, std::vector<Recipes::Type, std::allocator<Recipes::Type>> const&, std::vector const&<Util::HashString, std::allocator<std::vector const&>>, int, std::function<std::unique_ptr<ShapedRecipe, std::default_delete<ShapedRecipe>> ()(std::string, int, int, std::vector const&<RecipeIngredient, std::allocator<std::vector const>>, std::vector const&<ItemInstance, std::allocator<ItemInstance>>, std::vector const&)>);
    void _loadIngredientFromJson(Json::Value const&)const;
    void _itemInstanceFromIngredient(RecipeIngredient const&)const;
    void loadRecipe(Json::Value const&);
    void addFurnaceRecipeAuxData(ItemInstance const&, ItemInstance const&, std::vector<Util::HashString, std::allocator<Util::HashString>> const&);
    void addShapedRecipe(std::string, std::vector<ItemInstance, std::allocator<ItemInstance>> const&, std::vector const&<std::string, std::allocator<std::string>>, std::vector const&<Recipes::Type, std::allocator<std::vector const>>, std::vector const&<Util::HashString, std::allocator<std::vector const&>>, int, std::function<std::unique_ptr<ShapedRecipe, std::default_delete<ShapedRecipe>> ()(std::string, int, int, std::vector const&<RecipeIngredient, std::allocator<std::vector const>>, std::vector<ItemInstance, std::allocator<ItemInstance>> const&, std::vector const&)>);
    void getFurnaceRecipeResult(ItemInstance const&, Util::HashString const&)const;
    void addShapedRecipe(std::string, ItemInstance const&, std::vector<std::string, std::allocator<std::string>> const&, std::vector const&<Recipes::Type, std::allocator<std::vector const>>, std::vector const&<Util::HashString, std::allocator<std::vector const&>>, int, std::function<std::unique_ptr<ShapedRecipe, std::default_delete<ShapedRecipe>> ()(std::string, int, int, std::vector const&<RecipeIngredient, std::allocator<std::vector const>>, std::vector const&<ItemInstance, std::allocator<ItemInstance>>, std::vector const&)>);
    void Shape(std::string const&);
    void Shape(std::string const&, std::string const&);
    void Shape(std::string const&, std::string const&, std::string const&);
    void addSingleIngredientRecipeItem(std::string, ItemInstance const&, RecipeIngredient const&, std::vector<Util::HashString, std::allocator<Util::HashString>> const&);
    void addDirectShapedRecipe(std::unique_ptr<ShapedRecipe, std::default_delete<ShapedRecipe>>);
    void _addItemRecipe(std::unique_ptr<Recipe, std::default_delete<Recipe>>);
    void addMultiRecipe(std::unique_ptr<MultiRecipe, std::default_delete<MultiRecipe>>);
    void addDirectShapelessRecipe(std::unique_ptr<ShapelessRecipe, std::default_delete<ShapelessRecipe>>);
    void getRecipeFor(ItemInstance const&, Util::HashString const&)const;
    void getAllRecipesFor(ItemInstance const&, Util::HashString const&)const;
    void addRepairItemRecipe(std::unique_ptr<RepairItemRecipe, std::default_delete<RepairItemRecipe>>);
    void addRecipeListener(std::weak_ptr<bool>, std::function<void ()(void)>);
    void removeRecipeListener(std::weak_ptr<bool>);
    void notifyRecipeListeners(void);
    Recipes(void);
};

#pragma once

#include "../../unmapped/AtlasItemManager"
#include "../actor/Actor"
#include "../../unmapped/ActorInfoRegistry"
#include "../../unmapped/BaseGameVersion"
#include "../../unmapped/BlockSource"
#include "../actor/Player"
#include "../nbt/CompoundTag"
#include "../../unmapped/ItemDescriptor"
#include "../actor/Mob"
#include "../../unmapped/TextureAtlasItem"
#include "../../unmapped/Block"
#include "../../unmapped/TextureUVCoordinateSet"
#include "../../json/Value"


class Item {

public:
    static long mGenerateDenyParticleEffect;
    static long TAG_DAMAGE[abi:cxx11];
    static long ICON_DESCRIPTION_PREFIX[abi:cxx11];
    static long mItemTextureItems;
    static long mCreativeListMutex;
    static long mCreativeList;
    static long mCreativeListStack;
    static long mInCreativeGroup;
    static long mCreativeGroups;
    static long mCreativeGroupInfo;
    static long mInvalidTextureUVCoordinateSet;
    static long mAllowExperimental;
    static long mWorldBaseGameVersion;

    virtual Item::~Item();
    virtual void tearDown(void);
    virtual void getMaxUseDuration(ItemInstance const*)const;
    virtual void getMaxUseDuration(ItemStack const*)const;
    virtual bool isExperimental(ItemDescriptor const*)const;
    virtual void setMaxStackSize(unsigned char);
    virtual void setCategory(CreativeItemCategory);
    virtual void setStackedByData(bool);
    virtual void setMaxDamage(int);
    virtual void setHandEquipped(void);
    virtual void setUseAnimation(UseAnimation);
    virtual void setMaxUseDuration(int);
    virtual void setRequiresWorldBuilder(bool);
    virtual void setExplodable(bool);
    virtual void setIsGlint(bool);
    virtual void setShouldDespawn(bool);
    virtual void getBlockShape(void)const;
    virtual bool canBeDepleted(void)const;
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getLevelDataForAuxValue(int)const;
    virtual bool isStackedByData(void)const;
    virtual void getMaxDamage(void)const;
    virtual void getAttackDamage(void)const;
    virtual bool isHandEquipped(void)const;
    virtual bool isArmor(void)const;
    virtual bool isDye(void)const;
    virtual bool isFertilizer(int)const;
    virtual bool isGlint(ItemStackBase const&)const;
    virtual bool isThrowable(void)const;
    virtual bool isPattern(void)const;
    virtual bool showsDurabilityInCreative(void)const;
    virtual bool isWearableThroughLootTable(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual bool canDestroyInCreative(void)const;
    virtual bool isDestructive(int)const;
    virtual bool isLiquidClipItem(int)const;
    virtual bool requiresInteract(void)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void getEnchantSlot(void)const;
    virtual void getEnchantValue(void)const;
    virtual void getArmorValue(void)const;
    virtual bool isComplex(void)const;
    virtual bool isValidAuxValue(int)const;
    virtual void getDamageChance(int)const;
    virtual void uniqueAuxValues(void)const;
    virtual bool isMultiColorTinted(ItemStack const&)const;
    virtual void getColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&, ItemDescriptor const&)const;
    virtual void getBaseColor(ItemStack const&)const;
    virtual void getSecondaryColor(ItemStack const&)const;
    virtual void saveAdditionalData(ItemStackBase const&, CompoundTag &)const;
    virtual void readAdditionalData(ItemStackBase &, CompoundTag const&)const;
    virtual bool isTintable(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void useTimeDepleted(ItemInstance &, Level *, Player *)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void releaseUsing(ItemInstance &, Player *, int)const;
    virtual void releaseUsing(ItemStack &, Player *, int)const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void hurtEnemy(ItemInstance &, Mob *, Mob *)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void mineBlock(ItemInstance &, Block const&, int, int, int, Actor *)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void buildEffectDescriptionName[abi:cxx11](ItemStackBase const&)const;
    virtual void buildCategoryDescriptionName[abi:cxx11](void)const;
    virtual void readUserData(ItemStackBase &, IDataInput &, ReadOnlyBinaryStream &)const;
    virtual void writeUserData(ItemStackBase const&, IDataOutput &)const;
    virtual void getMaxStackSize(ItemDescriptor const&)const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual void refreshedInContainer(ItemStackBase &, Level &)const;
    virtual void getCooldownType(void)const;
    virtual void getCooldownTime(void)const;
    virtual void fixupOnLoad(ItemStackBase &)const;
    virtual void fixupOnLoad(ItemStackBase &, Level &)const;
    virtual void getDamageValue(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void setDamageValue(ItemStackBase &, short)const;
    virtual void getInHandUpdateType(Player const&, ItemInstance const&, ItemInstance const&, bool, bool)const;
    virtual void getInHandUpdateType(Player const&, ItemStack const&, ItemStack const&, bool, bool)const;
    virtual bool isSameItem(ItemStackBase const&, ItemStackBase const&)const;
    virtual void getInteractText[abi:cxx11](Player const&)const;
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual bool isEmissive(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getIconYOffset(void)const;
    virtual void setIcon(std::string const&, int);
    virtual void setIcon(TextureUVCoordinateSet const&);
    virtual void setIconAtlas(std::string const&, int);
    virtual bool canBeCharged(void)const;
    virtual void playSoundIncrementally(ItemInstance const&, Mob &)const;
    virtual void playSoundIncrementally(ItemStack const&, Mob &)const;
    virtual void getAuxValuesDescription[abi:cxx11](void)const;
    virtual void _checkUseOnPermissions(Actor &, ItemInstance &, unsigned char const&, BlockPos const&)const;
    virtual void _checkUseOnPermissions(Actor &, ItemStack &, unsigned char const&, BlockPos const&)const;
    virtual void _calculatePlacePos(ItemInstance &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemInstance &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void getId(void)const;
    void getLegacyBlock(void)const;
    void getCreativeCategory(void)const;
    void shouldDespawn(void)const;
    void toBlockId(short);
    void resetId(short);
    void setAtlasItemManager(std::shared_ptr<AtlasItemManager>);
    void initServer(Json::Value &);
    void initClient(Json::Value &, Json::Value &);
    void alterAvailableCreativeItems(ActorInfoRegistry *, LevelData &);
    void beginCreativeGroup(std::string const&, ItemInstance const&);
    void beginCreativeGroup(std::string const&, short, short, CompoundTag const*);
    void beginCreativeGroup(std::string const&, Block const*, CompoundTag const*);
    void beginCreativeGroup(std::string const&, Item*, short, CompoundTag const*);
    void endCreativeGroup(void);
    void addCreativeItem(short, short);
    void addCreativeItem(ItemInstance const&);
    void addCreativeItem(Block const&);
    void addCreativeItem(Item*, short);
    void addCreativeItem(ItemStack const&);
    void findCreativeItem(ItemInstance const&);
    void initCreativeItems(bool, ActorInfoRegistry *, BlockDefinitionGroup *, bool, BaseGameVersion const&, std::function<void ()(ActorInfoRegistry *, BlockDefinitionGroup *, bool)>);
    void destroySpeedBonus(ItemInstance const&)const;
    void _helpChangeInventoryItemInPlace(Actor &, ItemStack &, ItemStack &, ItemAcquisitionMethod)const;
    Item(std::string const&, short);
    void getFood(void)const;
    void getSeed(void)const;
    void getCamera(void)const;
    void setMinRequiredBaseGameVersion(BaseGameVersion const&);
    bool isMirroredArt(void)const;
    void setIsMirroredArt(bool);
    void updateCustomBlockEntityTag(BlockSource &, ItemStack &, BlockPos &)const;
    void useOn(ItemStack &, Actor &, int, int, int, unsigned char, float, float, float)const;
    bool canUseSeed(Actor &, BlockPos, unsigned char)const;
    void allowOffhand(void)const;
    void setAllowOffhand(bool);
    void getTextureUVCoordinateSet(std::string const&, int);
    void getIconTextureUVSet(TextureAtlasItem const&, int, int);
    void getTextureItem(std::string const&);
    void _textMatch(std::string const&, std::string const&, bool);
    void getRendererId(void)const;
    void getRequiredBaseGameVersion(void)const;
    void executeOnResetBAIcallbacks(void)const;
    void addOnResetBAIcallback(std::function<void ()(void)> const&);
    void setExperimental(void);
    bool isExplodable(void)const;
    void getUseAnimation(void)const;
    bool isFood(void)const;
    void getFrameCount(void)const;
};

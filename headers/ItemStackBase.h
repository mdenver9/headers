#pragma once

class ItemStackBase {

public:
    static long ItemStackBase::MAX_STACK_SIZE;
    static long ItemStackBase::sPickupPopDuration;

    virtual ~ItemStackBase();

    bool isValid(void)const;
    bool isItem(void)const;
    bool isEmptyStack(void)const;
    void getStackSize(void)const;
    void getItem(void)const;
    void setStackSize(unsigned char);
    void _write(BinaryStream &)const;
    void _read(ReadOnlyBinaryStream &);
    bool isInstance(Item const&)const;
    void sameItem(int, int)const;
    bool hasFeedingAnimation(void)const;
    void forceSetCount(unsigned char);
    void ItemStackBase(void);
    void init(int, int, int);
    void ItemStackBase(BlockLegacy const&, int);
    void init(BlockLegacy const&, int);
    void ItemStackBase(Block const&, int, CompoundTag const*);
    void ItemStackBase(BlockLegacy const&, int, short);
    void ItemStackBase(Item const&);
    void init(Item const&, int, int, CompoundTag const*);
    void ItemStackBase(Item const&, int);
    void ItemStackBase(Item const&, int, int);
    void ItemStackBase(Item const&, int, int, CompoundTag const*);
    void ItemStackBase(ItemStackBase const&);
    void getId(void)const;
    void _makeChargedItemFromUserData(void);
    void _cloneComponents(ItemStackBase const&);
    void ItemStackBase(RecipeIngredient const&);
    void getDescriptor(void)const;
    void getDamageValue(void)const;
    void _setItem(int);
    void setAuxValue(short);
    void setNull(void);
    bool isNull(void)const;
    void _hasComponents(void)const;
    void clearChargedItem(void);
    void _initComponents(void);
    void add(int);
    void set(int);
    void remove(int);
    void getMaxStackSize(void)const;
    bool hasUserData(void)const;
    bool hasCompoundTextUserData(void)const;
    void getUserData(void)const;
    bool hasSameUserData(ItemStackBase const&)const;
    bool hasSameUserData(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    bool hasSameAuxValue(ItemStackBase const&)const;
    void getLegacyBlock(void)const;
    void getAuxValue(void)const;
    bool isDamageableItem(void)const;
    void setUserData(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>);
    void getNetworkUserData(void)const;
    void addCustomUserData(BlockActor &, BlockSource &);
    bool isGlint(void)const;
    void showsDurabilityInCreative(void)const;
    void setJustBrewed(bool);
    void wasJustBrewed(void)const;
    void startCoolDown(Player *)const;
    bool isEquivalentArmor(ItemStackBase const&)const;
    void retrieveIDFromIDAux(int);
    void retrieveEnchantFromIDAux(int);
    void retrieveAuxValFromIDAux(int);
    bool isValidAuxValue(int)const;
    bool isBlock(void)const;
    bool isThrowable(void)const;
    bool isExplodable(void)const;
    bool isPattern(void)const;
    void refreshedInContainer(Level &);
    bool isEnchanted(void)const;
    void getEnchantsFromUserData(void)const;
    void getEnchantSlot(void)const;
    void saveEnchantsToUserData(ItemEnchants const&);
    void getEnchantValue(void)const;
    bool isEnchantingBook(void)const;
    bool isFullStack(void)const;
    bool isStackable(void)const;
    bool isDamaged(void)const;
    bool isStackable(ItemStackBase const&)const;
    bool isStackedByData(void)const;
    void componentsMatch(ItemStackBase const&)const;
    void setDamageValue(short);
    void getMaxDamage(void)const;
    void hurtAndBreak(int, Actor *);
    void getAttackDamage(void)const;
    bool canDestroySpecial(Block const&)const;
    void snap(Player *);
    void sameItem(ItemStackBase const&)const;
    void sameItemAndAux(ItemStackBase const&)const;
    bool hasCustomHoverName(void)const;
    void getRendererId(void)const;
    bool hasComponent(std::string const&)const;
    void getBlock(void)const;
    void setBlock(Block const*);
    void getIdAux(void)const;
    void getIdAuxEnchanted(void)const;
    bool isInstance(BlockLegacy const&)const;
    void matches(ItemStackBase const&)const;
    void matchesItem(ItemStackBase const&)const;
    void matchesChargedItem(ItemStackBase const&)const;
    bool hasChargedItem(void)const;
    void getChargedItem(void)const;
    void getColor(void)const;
    void save(void)const;
    void _saveComponents(CompoundTag &)const;
    void load(CompoundTag const&);
    void _loadItem(CompoundTag const&);
    void load(CompoundTag const&, Level &);
    void getIcon(int, bool)const;
    void getUseAnimation(void)const;
    bool isArmorItem(void)const;
    bool isHorseArmorItem(void)const;
    bool isWearableItem(void)const;
    bool isOffhandItem(void)const;
    bool isMusicDiscItem(void)const;
    bool isPotionItem(void)const;
    bool isLiquidClipItem(void)const;
    void setCustomName(std::string const&);
    void setCustomLore(std::vector<std::string, std::allocator<std::string>> const&);
    void resetHoverName(void);
    void getBaseRepairCost(void)const;
    void setRepairCost(int);
    bool canPlaceOn(Block const*)const;
    bool canDestroy(Block const*)const;
    void getBlockingTick(void)const;
    void setBlockingTick(Tick);
    void getPickupPopPercentage(void)const;
    void getIsValidPickupTime(void)const;
    void getPickupTime(void)const;
    void setPickupTime(void);
    void setPickupTime(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>);
    void setShowPickUp(bool);
    void setChargedItem(ItemInstance const&, bool);
    void _setChargedItem(ItemInstance const&);
    bool canBeCharged(void)const;
    void _loadComponents(CompoundTag const&);
    void addComponents(Json::Value const&, std::string &);
    bool isValidComponent(std::string const&);
    void updateComponent(std::string const&, Json::Value const&);
    void _updateCompareHashes(void);
    void serializeComponents(IDataOutput &)const;
    void deserializeComponents(IDataInput &);
    bool isExperimental(void)const;
    void getRequiredBaseGameVersion(void)const;
};

#pragma once

class EggItem : Item {

    virtual ~EggItem();
    virtual ~EggItem();
    virtual void tearDown(void);
    virtual void getMaxUseDuration(ItemInstance const*)const;
    virtual void getMaxUseDuration(ItemStack const*)const;
    virtual void isExperimental(ItemDescriptor const*)const;
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
    virtual void canBeDepleted(void)const;
    virtual void canDestroySpecial(Block const&)const;
    virtual void getLevelDataForAuxValue(int)const;
    virtual void isStackedByData(void)const;
    virtual void getMaxDamage(void)const;
    virtual void getAttackDamage(void)const;
    virtual void isHandEquipped(void)const;
    virtual void isArmor(void)const;
    virtual void isDye(void)const;
    virtual void isFertilizer(int)const;
    virtual void isGlint(ItemStackBase const&)const;
    virtual void isThrowable(void)const;
    virtual void isPattern(void)const;
    virtual void showsDurabilityInCreative(void)const;
    virtual void isWearableThroughLootTable(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void canDestroyInCreative(void)const;
    virtual void isDestructive(int)const;
    virtual void isLiquidClipItem(int)const;
    virtual void requiresInteract(void)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;
    virtual void isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void getEnchantSlot(void)const;
    virtual void getEnchantValue(void)const;
    virtual void getArmorValue(void)const;
    virtual void isComplex(void)const;
    virtual void isValidAuxValue(int)const;
    virtual void getDamageChance(int)const;
    virtual void uniqueAuxValues(void)const;
    virtual void isMultiColorTinted(ItemStack const&)const;
    virtual void getColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&, ItemDescriptor const&)const;
    virtual void getBaseColor(ItemStack const&)const;
    virtual void getSecondaryColor(ItemStack const&)const;
    virtual void saveAdditionalData(ItemStackBase const&, CompoundTag &)const;
    virtual void readAdditionalData(ItemStackBase &, CompoundTag const&)const;
    virtual void isTintable(void)const;
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
    virtual void _ZNK4Item18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE;
    virtual void _ZNK4Item26buildEffectDescriptionNameB5cxx11ERK13ItemStackBase;
    virtual void _ZNK4Item28buildCategoryDescriptionNameB5cxx11Ev;
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
    virtual void isSameItem(ItemStackBase const&, ItemStackBase const&)const;
    virtual void _ZNK4Item15getInteractTextB5cxx11ERK6Player;
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void isEmissive(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getIconYOffset(void)const;
    virtual void setIcon(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    virtual void setIcon(TextureUVCoordinateSet const&);
    virtual void setIconAtlas(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    virtual void canBeCharged(void)const;
    virtual void playSoundIncrementally(ItemInstance const&, Mob &)const;
    virtual void playSoundIncrementally(ItemStack const&, Mob &)const;
    virtual void _ZNK4Item23getAuxValuesDescriptionB5cxx11Ev;
    virtual void _checkUseOnPermissions(Actor &, ItemInstance &, unsigned char const&, BlockPos const&)const;
    virtual void _checkUseOnPermissions(Actor &, ItemStack &, unsigned char const&, BlockPos const&)const;
    virtual void _calculatePlacePos(ItemInstance &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemInstance &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
}

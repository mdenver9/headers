#pragma once

class Player : Mob {

public:
    static long Player::DEFAULT_PLAYER_HEIGHT_OFFSET;
    static long Player::PLAYER_GLIDING_CAMERA_OFFSET;
    static long Player::PLAYER_SWIMMING_CAMERA_OFFSET;
    static long Player::PLAYER_SLEEPING_CAMERA_OFFSET;
    static long Player::PLAYER_SNEAK_OFFSET;
    static long Player::PLAYER_UP_SWIM_SPEED;
    static long Player::PLAYER_DOWN_SWIM_SPEED;
    static long Player::PLAYER_SWIM_FLY_MULTI;
    static long Player::PLAYER_SWIM_BREACH_ANGLE;
    static long Player::PLAYER_SWIM_ENTER_THRESHOLD;
    static long Player::DEFAULT_WALK_SPEED;
    static long Player::DEFAULT_FLY_SPEED;
    static long Player::DEFAULT_BB_WIDTH;
    static long Player::DEFAULT_BB_HEIGHT;
    static long Player::GLIDE_STOP_DELAY;
    static long Player::UNTRACKED_INTERACTION_SLOT_COUNT;
    static long Player::INVALID_SPAWN_POS;
    static long Player::SPAWN_CHUNK_RADIUS;
    static long Player::SPAWN_CHUNK_LARGE_JUMP;
    static long Player::PLAYER_ALIVE_HEIGHT;
    static long Player::PLAYER_ALIVE_WIDTH;
    static long Player::PLAYER_DEAD_HEIGHT;
    static long Player::PLAYER_DEAD_WIDTH;
    static long Player::PLAYER_SLEEPING_HEIGHT;
    static long Player::PLAYER_SLEEPING_WIDTH;
    static long Player::DISTANCE_TO_TRAVELLED_EVENT;
    static long Player::DISTANCE_TO_TRANSFORM_EVENT;
    static long Player::HUNGER;
    static long Player::SATURATION;
    static long Player::EXHAUSTION;
    static long Player::LEVEL;
    static long Player::EXPERIENCE;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~Player();
    virtual void remove(void);
    virtual void getAttachPos(ActorLocation, float)const;
    virtual void move(Vec3 const&);
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void getAddPacket(void);
    virtual void normalTick(void);
    virtual void rideTick(void);
    virtual void getRidingHeight(void);
    virtual void getAlwaysShowNameTag(void)const;
    virtual void getCameraOffset(void)const;
    virtual bool isImmobile(void)const;
    virtual bool isSleeping(void)const;
    virtual bool isShootable(void);
    virtual bool isBlocking(void)const;
    virtual bool isDamageBlocked(ActorDamageSource const&)const;
    virtual bool isCreativeModeAllowed(void);
    virtual void attack(Actor &);
    virtual void adjustDamageAmount(int &)const;
    virtual bool isJumping(void)const;
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void actuallyHurt(int, ActorDamageSource const*, bool);
    virtual void onBounceStarted(BlockPos const&, Block const&);
    virtual void feed(int);
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void awardKillScore(Actor &, int);
    virtual void setArmor(ArmorSlot, ItemStack const&);
    virtual void getCarriedItem(void)const;
    virtual void setCarriedItem(ItemStack const&);
    virtual void setOffhandSlot(ItemStack const&);
    virtual void getEquippedTotem(void)const;
    virtual void consumeTotem(void);
    virtual void getEntityTypeId(void)const;
    virtual void getPortalCooldown(void)const;
    virtual void getPortalWaitTime(void)const;
    virtual void onSynchedDataUpdate(int);
    virtual bool canAddRider(Actor &)const;
    virtual bool canBePulledIntoVehicle(void)const;
    virtual void sendMotionPacketIfNeeded(void);
    virtual void startSwimming(void);
    virtual void stopSwimming(void);
    virtual void getCommandPermissionLevel(void)const;
    virtual void getAnimationComponent(void);
    virtual void useItem(ItemStack &, ItemUseMethod, bool);
    virtual void getMapDecorationRotation(void)const;
    virtual bool isWorldBuilder(void);
    virtual bool isCreative(void)const;
    virtual bool isAdventure(void)const;
    virtual void add(ItemStack &);
    virtual void drop(ItemStack const&, bool);
    virtual void startSpinAttack(void);
    virtual void stopSpinAttack(void);
    virtual void die(ActorDamageSource const&);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _onSizeUpdated(void);
    virtual void setSleeping(bool);
    virtual void getSpeed(void)const;
    virtual void setSpeed(float);
    virtual void travel(float, float, float);
    virtual void aiStep(void);
    virtual void getItemUseDuration(void);
    virtual void getItemUseStartupProgress(void);
    virtual void getItemUseIntervalProgress(void);
    virtual void getAllHand(void)const;
    virtual void getAllEquipment(void)const;
    virtual void sendInventory(bool);
    virtual bool canExistWhenDisallowMob(void)const;
    virtual void useNewAi(void)const;
    virtual void initBodyControl(void);
    virtual void jumpFromGround(void);
    virtual void updateAi(void);
    virtual void dropEquipment(ActorDamageSource const&, int);
    virtual void dropEquipment(void);
    virtual void updateGliding(void);
    virtual void prepareRegion(ChunkSource &);
    virtual void destroyRegion(void);
    virtual void suspendRegion(void);
    virtual void _fireWillChangeDimension(void);
    virtual void _fireDimensionChanged(void);
    virtual void changeDimensionWithCredits(AutomaticID<Dimension, int>);
    virtual void tickWorld(Tick const&);
    virtual void getTickingOffsets(void)const;
    virtual void moveView(void);
    virtual void moveSpawnView(Vec3 const&);
    virtual void setName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void checkMovementStats(Vec3 const&);
    virtual void getCurrentStructureFeature(void)const;
    virtual bool isAutoJumpEnabled(void)const;
    virtual void respawn(void);
    virtual void resetRot(void);
    virtual void resetPos(bool);
    virtual bool isInTrialMode(void);
    virtual bool hasResource(int);
    virtual void completeUsingItem(void);
    virtual void setPermissions(CommandPermissionLevel);
    virtual void startCrafting(BlockPos const&, bool);
    virtual void startStonecutting(BlockPos const&);
    virtual void startDestroying(void);
    virtual void stopDestroying(void);
    virtual void openContainer(BlockPos const&);
    virtual void openContainer(ActorUniqueID const&);
    virtual void openFurnace(BlockPos const&);
    virtual void openBlastFurnace(BlockPos const&);
    virtual void openSmoker(BlockPos const&);
    virtual void openEnchanter(BlockPos const&);
    virtual void openAnvil(BlockPos const&);
    virtual void openGrindstone(BlockPos const&);
    virtual void openBrewingStand(BlockPos const&);
    virtual void openHopper(BlockPos const&);
    virtual void openHopper(ActorUniqueID const&);
    virtual void openDispenser(BlockPos const&, bool);
    virtual void openBeacon(BlockPos const&);
    virtual void openPortfolio(void);
    virtual void openBook(int, bool, int, BlockActor *);
    virtual void openCommandBlock(BlockPos const&);
    virtual void openCommandBlockMinecart(ActorUniqueID const&);
    virtual void openHorseInventory(ActorUniqueID const&);
    virtual void openTrading(ActorUniqueID const&, bool);
    virtual bool canOpenContainerScreen(void);
    virtual void openChalkboard(ChalkboardBlockActor &, bool);
    virtual void openNpcInteractScreen(Actor &);
    virtual void openInventory(void);
    virtual void openStructureEditor(BlockPos const&);
    virtual void openLabTable(BlockPos const&);
    virtual void openElementConstructor(BlockPos const&);
    virtual void openCompoundCreator(BlockPos const&);
    virtual void openMaterialReducer(BlockPos const&);
    virtual void openLoom(BlockPos const&);
    virtual void openStonecutter(BlockPos const&);
    virtual void openCartographyTable(BlockPos const&);
    virtual void displayChatMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void displayClientMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void displayLocalizableMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    virtual void displayTextObjectMessage(TextObjectRoot const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void displayWhisperMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void startSleepInBed(BlockPos const&);
    virtual void stopSleepInBed(bool, bool);
    virtual bool canStartSleepInBed(void);
    virtual void getSleepTimer(void)const;
    virtual void getPreviousTickSleepTimer(void)const;
    virtual void openSign(BlockPos const&);
    virtual void playEmote(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual bool isLocalPlayer(void)const;
    virtual bool isHostingPlayer(void)const;
    virtual bool isLoading(void)const;
    virtual bool isPlayerInitialized(void)const;
    virtual void stopLoading(void);
    virtual void registerTrackedBoss(ActorUniqueID);
    virtual void unRegisterTrackedBoss(ActorUniqueID);
    virtual void setPlayerGameType(GameType);
    virtual void _crit(Actor &);
    virtual void getEventing(void)const;
    virtual void getUserId(void)const;
    virtual void sendEventPacket(EventPacket &)const;
    virtual void addExperience(int);
    virtual void addLevels(int);
    virtual void inventoryChanged(Container &, int, ItemStack const&, ItemStack const&);
    virtual void deleteContainerManager(void);
    virtual void setFieldOfViewModifier(float);
    virtual bool isPositionRelevant(AutomaticID<Dimension, int>, BlockPos const&);
    virtual bool isEntityRelevant(Actor const&);
    virtual void onSuspension(void);
    virtual void onLinkedSlotsChanged(void);
    virtual void startCooldown(Item const*);
    virtual void getItemCooldownLeft(CooldownType)const;
    virtual bool isItemInCooldown(CooldownType)const;
    virtual void sendNetworkPacket(Packet &)const;
    virtual void reportMovementTelemetry(MovementEventType);
    virtual void onMovePlayerPacketNormal(Vec3 const&, Vec2 const&, float);

    void getTransactionManager(void);
    bool isRespawnReady(void);
    void getGameMode(void)const;
    void getR5DataRecoverComplete(void)const;
    void setR5DataRecoverComplete(bool);
    void getPacketSender(void);
    void getChunkSource(void)const;
    void Player(Level &, PacketSender &, GameType, NetworkIdentifier const&, unsigned char, mce::UUID, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::unique_ptr<Certificate, std::default_delete<Certificate>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void registerAttributes(void);
    void _registerElytraLoopSound(void);
    void resetPlayerLevel(void);
    void getNewEnchantmentSeed(void);
    void getClientId(void)const;
    void getClientSubId(void)const;
    void getCertificate(void)const;
    void getTrackedBosses(void);
    bool isSurvival(void)const;
    void forceAllowEating(void)const;
    bool isViewer(void)const;
    void getCapePos(float);
    bool canBeSeenOnMap(void)const;
    void setContainerManager(std::shared_ptr<IContainerManager>);
    void shouldShowCredits(void)const;
    void setHasSeenCredits(void);
    void setBedRespawnPosition(BlockPos const&);
    void setDefaultHeadHeight(void);
    void setAllPlayersSleeping(void);
    bool isSleepingLongEnough(void)const;
    void getSleepRotation(void)const;
    void checkBed(BlockSource *, Vec3 const*);
    void getPlatform(void)const;
    void setPlatform(BuildPlatform);
    void setPlatformOnlineId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void onMobStatusChanged(ActorUniqueID);
    void getChunkRadius(void)const;
    bool isEmoting(void)const;
    void getUnderwaterLightLevel(void)const;
    void setUnderwaterLightLevel(float);
    void setUsedPotion(bool);
    void getUsedPotion(void);
    void _tickCooldowns(void);
    void setEmotingStatus(bool);
    void _applyExhaustion(Vec3 const&);
    void moveCape(void);
    void getSupplies(void)const;
    void stopUsingItem(void);
    void _updateInteraction(void);
    bool isBouncing(void)const;
    void _setBlockedUsingShieldTimeStamp(long);
    void _setBlockedUsingDamagedShieldTimeStamp(long);
    void resetOnScreenAnimationTicks(void);
    void getPlayerIndex(void)const;
    void setPlayerIndex(int);
    bool isUsingItem(void)const;
    void getItemInUse(void)const;
    void startUsingItem(ItemStack const&, int);
    void releaseUsingItem(void);
    void setSelectedItem(ItemStack const&);
    void getSelectedItem(void)const;
    void getTicksUsingItem(void);
    void getCurrentActiveShield(void)const;
    void stopGliding(void);
    void causeFoodExhaustion(float);
    void handleJumpEffects(void);
    void _touch(Actor &);
    void updateTrackedBosses(void);
    void updateInventoryTransactions(void);
    bool isInCreativeMode(void)const;
    bool canUseAbility(AbilitiesIndex)const;
    void getScore(void);
    void dropCursorSelectedItem(void);
    void getDestroySpeed(Block const&)const;
    void _getItemDestroySpeed(Block const&)const;
    void getDestroyProgress(Block const&)const;
    bool canDestroy(Block const&)const;
    bool isOperator(void)const;
    void getPlayerPermissionLevel(void)const;
    bool canUseOperatorBlocks(void)const;
    void getXpNeededForNextLevel(void)const;
    void setPlayerUIItem(PlayerUISlot, ItemStack const&);
    void getPlayerLevel(void)const;
    void getLevelProgress(void)const;
    void getAgentID(void)const;
    void take(Actor &, int, int);
    bool isHurt(void);
    bool isHungry(void)const;
    bool isSpawned(void)const;
    void _blockUsingShield(ActorDamageSource const&, float);
    void setLastHurtBy(ActorType);
    void interact(Actor &, Vec3 const&);
    void recheckSpawnPosition(void);
    void setBlockRespawnUntilClientMessage(bool);
    void updateTeleportDestPos(void);
    bool hasRespawnPosition(void)const;
    bool isForcedRespawn(void)const;
    void getBlockRespawnUntilClientMessage(void)const;
    void _chooseSpawnArea(void);
    void _isChunkSourceLoaded(Vec3 const&, BlockSource const&)const;
    void _chooseSpawnPositionWithinArea(void);
    void setTeleportDestination(Vec3 const&);
    void _validateSpawnPositionAvailability(Vec3 const&, BlockSource *, Vec3 const*)const;
    void _isDangerousSpawn(BlockSource &, AABB const&)const;
    void _fixup4JBedSpawnPosition(Vec3 &);
    void clearRespawnPosition(void);
    void checkAndfixSpawnPosition(Vec3 &, std::vector<BlockSource *, std::allocator<BlockSource *>>, bool, bool, bool, bool)const;
    void _findFallbackSpawnPosition(Vec3 &, std::vector<BlockSource *, std::allocator<BlockSource *>>, unsigned int);
    void _ensureSafeSpawnPosition(Vec3 &);
    void _setStartedBlockingTimeStamp(long);
    void handleMovePlayerPacket(Player::PositionMode, Vec3 const&, Vec2 const&, float, int, int);
    void setRespawnDimension(AutomaticID<Dimension, int>);
    bool isHiddenFrom(Mob &)const;
    void getSpawnPosition(void);
    void setRespawnPosition(BlockPos const&, bool);
    void setRespawnDimensionId(AutomaticID<Dimension, int>);
    void crackBlock(BlockPos const&, unsigned char);
    void _addLevels(int);
    void getSelectedItemSlot(void)const;
    void getAttackDamage(void);
    bool hasOwnedChunkSource(void)const;
    void tickArmor(void);
    bool isInRaid(void)const;
    void getStandingPositionOnBlock(BlockPos const&);
    void setChunkRadius(unsigned int);
    void getPlayerGameType(void)const;
    void resetToDefaultGameMode(void);
    void getUnmappedPlayerGameType(void);
    void eat(ItemStack const&);
    void eat(int, float);
    void getEnchantmentSeed(void)const;
    void setEnchantmentSeed(int);
    void spawnExperienceOrb(Vec3 const&, int);
    void _sendShieldUpdatePacket(ShieldItem const*, ItemStack const&, ItemStack const&, ContainerID, int);
    void getXpNeededForLevelRange(int, int)const;
    bool hasOpenContainer(void)const;
    void getContainerManager(void);
    void getHudContainerManagerModel(void);
    void getLuck(void);
    void getPlayerUIItem(PlayerUISlot);
    void setCursorSelectedItem(ItemStack const&);
    void setCursorSelectedItemGroup(ItemGroup const&);
    void startGliding(void);
    void setAgent(Agent *);
    void getAgent(void)const;
    void getAgentIfAllowed(bool, ActorUniqueID)const;
    bool isChatAllowed(void);
    void fireDimensionChangedEvent(AutomaticID<Dimension, int>);
    void queueOnScreenTextureAnimation(unsigned int);
    void getCurrentOnScreenAnimationEffectID(void)const;
    void getOnScreenAnimationTicks(void)const;
    void getBlockingStartTimeStamp(void)const;
    void getBlockedUsingShieldTimeStamp(void)const;
    void getBlockedUsingDamagedShieldTimeStamp(void)const;
    void getDirection(void)const;
    void addListener(PlayerListener &);
    void removeListener(PlayerListener &);
    void getMapIndex(void);
    void setMapIndex(int);
    void getLastHurtBy(void)const;
    void clearCreativeItemList(void);
    void updateCreativeItemList(std::vector<ItemInstance, std::allocator<ItemInstance>> const&);
    void getCreativeItemList(void)const;
    void getFilteredCreativeItemList(void)const;
    void _handleCarriedItemInteractText(void);
    void _aboveBlockHasCollisionShape(BlockPos const&, int, BlockSource &, AABB &, Actor &);
    void checkNeedAutoJump(float, float);
    void getSkinAdjustments(void)const;
    void updateSkin(SerializedSkin const&, int);
    void getSkin(void)const;
    void getSkin(void);
    void onResetBAI(int);
    void useUIAnimationComponent(bool);
    bool isDestroyingBlock(void);
    void getRespawnDimensionId(void)const;
    void getCursorSelectedItem(void)const;
    void getEnderChestContainer(void);
    void getPlayerUIContainer(void);
    void getVRMoveAdjustAngle(void)const;
    void getAutoJumping(void)const;
    void getCursorSelectedItemGroup(void)const;
};

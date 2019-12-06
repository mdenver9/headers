#pragma once

class Level : BlockSourceListener, IWorldRegistriesProvider {

public:
    virtual ~Level();
    virtual void onSourceCreated(BlockSource &);
    virtual void onSourceDestroyed(BlockSource &);
    virtual void initialize(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, LevelSettings const&, LevelData *, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const*);
    virtual void startLeaveGame(void);
    virtual void addEntity(BlockSource &, std::unique_ptr<Actor, std::default_delete<Actor>>);
    virtual void addGlobalEntity(BlockSource &, std::unique_ptr<Actor, std::default_delete<Actor>>);
    virtual void addAutonomousEntity(BlockSource &, std::unique_ptr<Actor, std::default_delete<Actor>>);
    virtual void addPlayer(std::unique_ptr<Player, std::default_delete<Player>>);
    virtual void takeEntity(ActorUniqueID);
    virtual void borrowEntity(ActorUniqueID, LevelChunk *);
    virtual void getCurrentServerTick(void)const;
    virtual void getBiomeRegistry(void)const;
    virtual void getBiomeRegistry(void);
    virtual void getBlockPalette(void)const;
    virtual void getBlockPalette(void);
    virtual void getFeatureRegistry(void)const;
    virtual void getFeatureRegistry(void);
    virtual void getFeatureTypeFactory(void)const;
    virtual void getFeatureTypeFactory(void);
    virtual void getJigsawStructureRegistry(void)const;
    virtual void getJigsawStructureRegistry(void);
    virtual void getStructureManager(void);
    virtual void getStructureManager(void)const;
    virtual void getBiomeComponentFactory(void)const;
    virtual void getBiomeComponentFactory(void);
    virtual void getSurfaceBuilderRegistry(void)const;
    virtual void getSurfaceBuilderRegistry(void);
    virtual void getDimensionFactory(void)const;
    virtual void getDimensionFactory(void);
    virtual void onPlayerDeath(Player &, ActorDamageSource const&);
    virtual void tick(void);
    virtual void directTickEntities(BlockSource &);
    virtual void updateSleepingPlayerList(void);
    virtual void setDifficulty(Difficulty);
    virtual void setCommandsEnabled(bool);
    virtual void setWorldTemplateOptionsUnlocked(void);
    virtual void saveAdditionalData(void);
    virtual void onNewChunk(BlockSource &, LevelChunk &);
    virtual void onNewChunkFor(Player &, LevelChunk &);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void queueEntityRemoval(std::unique_ptr<Actor, std::default_delete<Actor>> &&, bool);
    virtual void removeEntityReferences(Actor &, bool);
    virtual void loadFunctionManager(void);
    virtual void getClientResourcePackManager(void)const;
    virtual void getServerResourcePackManager(void)const;
    virtual void getTradeTables(void);
    virtual void addEntryToTagCache(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void dropEntryFromTagCache(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void clearTagCache(void);
    virtual void decrementTagCache(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, TagRegistry &);
    virtual void incrementTagCache(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, TagRegistry &);
    virtual void runCommand(HashedString const&, CommandOrigin &, CommandOriginSystem, CurrentCmdVersion);
    virtual void getTagRegistry(void);
    virtual void setFinishedInitializing(void);

    void getIOTasksGroup(void);
    void getEntitySystems(void);
    void getActorFactory(void);
    void getActorInfoRegistry(void);
    void getSimPaused(void);
    void getEntityRegistryOwner(void);
    void getClientTickingOffsets(void)const;
    void getActivePlayers(void)const;
    void setSimPaused(bool);
    void getSoundPlayer(void);
    void getTickingOffsets(void)const;
    void getRegisteredBorderBlock(void)const;
    void getSyncTasksGroup(void);
    void createRandomSeed(void);
    void Level(SoundPlayer &, std::unique_ptr<LevelStorage, std::default_delete<LevelStorage>>, IMinecraftEventing &, bool, Scheduler &, StructureManager &, ResourcePackManager &, IEntityRegistryOwner &, std::unique_ptr<BlockComponentFactory, std::default_delete<BlockComponentFactory>>, std::unique_ptr<BlockDefinitionGroup, std::default_delete<BlockDefinitionGroup>>);
    void addListener(LevelListener &);
    void setRemotePlayerEventCoordinator(std::unique_ptr<PlayerEventCoordinator, std::default_delete<PlayerEventCoordinator>> &&);
    void setServerPlayerEventCoordinator(std::unique_ptr<ServerPlayerEventCoordinator, std::default_delete<ServerPlayerEventCoordinator>> &&);
    void setClientPlayerEventCoordinator(std::unique_ptr<ClientPlayerEventCoordinator, std::default_delete<ClientPlayerEventCoordinator>> &&);
    void setActorEventCoordinator(std::unique_ptr<ActorEventCoordinator, std::default_delete<ActorEventCoordinator>> &&);
    void _setClientLevelEventCoordinator(std::unique_ptr<ClientLevelEventCoordinator, std::default_delete<ClientLevelEventCoordinator>> &&);
    void _setServerLevelEventCoordinator(std::unique_ptr<ServerLevelEventCoordinator, std::default_delete<ServerLevelEventCoordinator>> &&);
    void setBlockEventCoordinator(std::unique_ptr<BlockEventCoordinator, std::default_delete<BlockEventCoordinator>> &&);
    void setItemEventCoordinator(std::unique_ptr<ItemEventCoordinator, std::default_delete<ItemEventCoordinator>> &&);
    void setDefaultGameType(GameType);
    void _resetBiomeData(void);
    void _loadBiomeData(void);
    void getCurrentTick(void)const;
    void createPhotoStorage(void);
    void _loadAutonomousEntities(void);
    void getEventing(void);
    void saveGameData(void);
    void saveVillages(void);
    void saveBiomeData(void);
    void setNetEventCallback(NetEventCallback *);
    void setPacketSender(PacketSender *);
    void _removeAllPlayers(void);
    bool isLeaveGameDone(void);
    void createDimension(AutomaticID<Dimension, int>);
    void getDimension(AutomaticID<Dimension, int>)const;
    void forEachDimension(std::function<bool ()(Dimension &)>);
    void forEachDimension(std::function<bool ()(Dimension const&)>)const;
    void getChunkTickRange(void)const;
    void getLevelData(void)const;
    void getPortalForcer(void);
    void requestPlayerChangeDimension(Player &, std::unique_ptr<ChangeDimensionRequest, std::default_delete<ChangeDimensionRequest>>);
    void _handleChangeDimensionRequests(void);
    void entityChangeDimension(Actor &, AutomaticID<Dimension, int>);
    void getDimensionConversionData(void)const;
    void _playerChangeDimension(Player *, ChangeDimensionRequest &);
    void forceRemoveEntity(Actor &);
    void getSharedSpawnPos(void);
    void getPlayer(ActorUniqueID)const;
    bool isPlayerSuspended(Player &)const;
    void _handlePlayerSuspension(void);
    void _suspendPlayer(mce::UUID const&);
    void _resumePlayer(mce::UUID const&);
    void _fixEntitiesRegion(std::vector<Actor *, std::allocator<Actor *>> &, BlockSource const&, Dimension &);
    void checkAndHandleMaterial(AABB const&, MaterialType, Actor *);
    void checkMaterial(AABB const&, MaterialType, Actor *);
    void _syncTime(int);
    bool isClientSide(void)const;
    void _cleanupDisconnectedPlayers(void);
    void _getServerLevelEventCoordinator(void);
    void fetchEntity(ActorUniqueID, bool)const;
    void getGameRules(void);
    void tickEntities(void);
    void setTime(int);
    void getTime(void)const;
    void forEachPlayer(std::function<bool ()(Player &)>);
    void getActivePlayerCount(void)const;
    void tickEntitySystems(void);
    void _saveSomeChunks(void);
    void _isSavingRequired(void)const;
    void _pollSaveGameStatistics(void);
    bool hasLevelStorage(void)const;
    void getLevelStorage(void);
    void saveDirtyChunks(void);
    void findPath(Actor &, int, int, int, NavigationComponent &);
    void findPath(Actor &, Actor &, NavigationComponent &);
    void broadcastLevelEvent(LevelEvent, Vec3 const&, int, Player *);
    void broadcastLevelEvent(LevelEvent, CompoundTag const&, Player *);
    void playSound(BlockSource &, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool);
    void getPrimaryLocalPlayer(void)const;
    void playSound(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool);
    void playSynchronizedSound(BlockSource &, LevelSoundEvent, Vec3 const&, Block const&, ActorDefinitionIdentifier const&, bool, bool);
    void playSynchronizedSound(BlockSource &, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool);
    void broadcastSoundEvent(BlockSource &, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool);
    void broadcastSoundEvent(BlockSource &, LevelSoundEvent, Vec3 const&, Block const&, ActorDefinitionIdentifier const&, bool, bool);
    void broadcastDimensionEvent(BlockSource &, LevelEvent, Vec3 const&, int, Player *);
    void broadcastDimensionEvent(BlockSource &, LevelEvent, Vec3 const&, Block const&, Player *);
    void handleLevelEvent(LevelEvent, Vec3 const&, int);
    void handleLevelEvent(LevelEvent, CompoundTag const&);
    void handleSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool);
    void handleSoundEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Vec3 const&, float, float);
    void handleStopSoundEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void handleStopAllSounds(void);
    void addParticle(ParticleType, Vec3 const&, Vec3 const&, int, CompoundTag const*, bool);
    void sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int);
    void getDifficulty(void)const;
    void getNextRuntimeID(void);
    void getActorEventCoordinator(void);
    void _validatePlayerName(Player &);
    void getNewPlayerId(void)const;
    void suspendPlayer(Player &);
    void resumePlayer(Player &);
    void removeAllNonPlayerEntities(ActorUniqueID);
    void getRuntimeEntity(ActorRuntimeID, bool)const;
    void findPlayer(std::function<bool ()(Player const&)>)const;
    void getScoreboard(void);
    void forceFlushRemovedPlayers(void);
    void levelCleanupQueueEntityRemoval(std::unique_ptr<Actor, std::default_delete<Actor>> &&, bool);
    void registerTemporaryPointer(_TickPtr &);
    void unregisterTemporaryPointer(_TickPtr &);
    void getMob(ActorUniqueID)const;
    void removeListener(LevelListener &);
    void _tickTemporaryPointers(void);
    void _clientHandleAddOwnedEntity(EntityNetId);
    void _clientHandleAddWeakRefEntity(EntityNetId, WeakRefT<EntityRefTraits> const&);
    void _clientHandleRemoveOwnedEntity(EntityNetId);
    void _clientHandleRemoveWeakRefEntity(EntityNetId);
    void explode(BlockSource &, Actor *, Vec3 const&, float, bool, bool, float, bool);
    void spawnParticleEffect(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Vec3 const&, Dimension *);
    void spawnParticleEffect(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Actor const&, Vec3 const&);
    void denyEffect(Vec3 const&);
    void potionSplash(Vec3 const&, Color const&, bool);
    void extinguishFire(BlockSource &, BlockPos const&, unsigned char);
    void saveLevelData(void);
    void setMultiplayerGameIntent(bool);
    void getMultiplayerGameIntent(void)const;
    void setMultiplayerGame(bool);
    bool isMultiplayerGame(void)const;
    void setLANBroadcastIntent(bool);
    void getLANBroadcastIntent(void)const;
    void setLANBroadcast(bool);
    void getLANBroadcast(void)const;
    void setXBLBroadcastIntent(Social::GamePublishSetting);
    void getXBLBroadcastIntent(void)const;
    bool hasXBLBroadcastIntent(void)const;
    void setXBLBroadcastMode(Social::GamePublishSetting);
    void getXBLBroadcastMode(void)const;
    bool hasXBLBroadcast(void)const;
    void setPlatformBroadcastIntent(Social::GamePublishSetting);
    void getPlatformBroadcastIntent(void)const;
    bool hasPlatformBroadcastIntent(void)const;
    void setPlatformBroadcastMode(Social::GamePublishSetting);
    void getPlatformBroadcastMode(void)const;
    bool hasPlatformBroadcast(void)const;
    void setHasLockedBehaviorPack(bool);
    void setHasLockedResourcePack(bool);
    void animateTick(Actor &);
    void getSeed(void);
    void setDefaultSpawn(BlockPos const&);
    void getDefaultSpawn(void)const;
    void getDefaultGameType(void)const;
    void getRemotePlayerEventCoordinator(void);
    void getServerPlayerEventCoordinator(void);
    void getClientPlayerEventCoordinator(void);
    void getBlockEventCoordinator(void);
    void _getClientLevelEventCoordinator(void);
    void getItemEventCoordinator(void);
    void broadcastEntityEvent(Actor *, ActorEvent, int);
    void addBossEventListener(BossEventListener *);
    void removeBossEventListener(BossEventListener *);
    void broadcastBossEvent(BossEventUpdateType, ActorUniqueID const&, BossEventPacket const&);
    void broadcastBossEvent(BossEventUpdateType);
    void areBossEventListenersReady(void);
    void getLevelStorage(void)const;
    void getLevelData(void);
    void getPhotoStorage(void);
    void _saveAllMapData(void);
    void savePlayers(void);
    void _saveAutonomousEntities(void);
    void deferTimedStorageActions(bool);
    void _checkUserStorage(void);
    void getTickingAreasMgr(void);
    void getTickingArea(mce::UUID const&)const;
    void getPlayer(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void getPlayer(mce::UUID const&)const;
    void getPlayerByXuid(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void getPlayerFromUnknownIdentifier(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void getNextPlayer(ActorUniqueID const&, bool);
    void getPrevPlayer(ActorUniqueID const&, bool);
    void getNumRemotePlayers(void);
    void getPlatformPlayer(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void getPlayerFromServerId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void getRuntimePlayer(ActorRuntimeID)const;
    void getRandomPlayer(void);
    void getRandom(void)const;
    void getPlayerColor(Player const&)const;
    void onChunkDiscarded(LevelChunk &);
    void removeAutonomousEntity(Actor *, LevelChunk *);
    void forEachPlayer(std::function<bool ()(Player const&)>)const;
    void getUserCount(void)const;
    void getUsers(void);
    void getUsers(void)const;
    void _getValidatedPlayerName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void destroyBlock(BlockSource &, BlockPos const&, bool);
    void getSpawner(void)const;
    void getProjectileFactory(void)const;
    void getEntityDefinitions(void)const;
    void getBlockDefinitions(void)const;
    void getBlockComponentFactory(void);
    void getBlockComponentFactory(void)const;
    void getActorAnimationGroup(void)const;
    void getActorAnimationControllerGroup(void)const;
    void getSpawnRules(void)const;
    void getSpawnGroupRegistry(void)const;
    void getSpawnRulesMutable(void)const;
    void getBehaviorTreeGroup(void)const;
    void getBehaviorFactory(void)const;
    bool isUsableLevel(Level*);
    void getTearingDown(void)const;
    void getPlayerList(void);
    void getPlayerList(void)const;
    void getGlobalEntities(void);
    void getAutonomousEntities(void);
    void getAutonomousActiveEntity(ActorUniqueID)const;
    void getAutonomousInactiveEntity(ActorUniqueID)const;
    void getAutonomousEntity(ActorUniqueID)const;
    void getAutonomousLoadedEntities(void);
    void getPacketSender(void)const;
    void getNetEventCallback(void)const;
    void getHitResult(void);
    void getLiquidHitResult(void);
    void getAdventureSettings(void);
    void getGameRules(void)const;
    void getDefaultAbilities(void);
    void getWireframeQueue(void)const;
    void getWireframeQueue(void);
    bool hasStartWithMapEnabled(void)const;
    void getLootTables(void);
    void updateWeather(float, int, float, int);
    void takePicture(cg::ImageBuffer &, Actor *, Actor *, ScreenshotOptions &);
    void upgradeStorageVersion(StorageVersion);
    void save(void);
    void suspendAndSave(void);
    void waitAsyncSuspendWork(void);
    void _destroyEffect(BlockPos const&, Block const&, int);
    void addParticleEffect(HashedString const&, Vec3 const&, MolangVariableMap const&);
    void addParticleEffect(HashedString const&, Actor const&, HashedString const&, Vec3 const&, MolangVariableMap const&);
    void addTerrainParticleEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
    void addBreakingItemParticleEffect(Vec3 const&, ParticleType, TextureUVCoordinateSet const&, bool);
    bool hasCommandsEnabled(void)const;
    bool hasExperimentalGameplayEnabled(void)const;
    void useMsaGamertagsOnly(void)const;
    void setMsaGamertagsOnly(bool);
    void getSpecialMultiplier(AutomaticID<Dimension, int>);
    void getNewUniqueID(void);
    bool isExporting(void)const;
    void setIsExporting(bool);
    void getSavedData(void)const;
    void setLevelId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    bool isEdu(void)const;
    void getMapSavedData(ActorUniqueID);
    void _loadMapData(ActorUniqueID const&);
    void getMapSavedData(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    void requestMapInfo(ActorUniqueID);
    void createMapSavedData(ActorUniqueID const&, BlockPos const&, AutomaticID<Dimension, int>, int);
    void createMapSavedData(std::vector<ActorUniqueID, std::allocator<ActorUniqueID>> const&, BlockPos const&, AutomaticID<Dimension, int>, int);
    void _createMapSavedData(ActorUniqueID const&);
    void copyAndLockMap(ActorUniqueID, ActorUniqueID);
    void expandMapByID(ActorUniqueID, bool);
    void getNetherScale(void)const;
    void getPlayerAbilities(ActorUniqueID const&);
    void setPlayerAbilities(ActorUniqueID const&, Abilities);
    void sendAllPlayerAbilities(Player const&);
    void tickedMob(void);
    void getTickedMobCountPrevious(void)const;
    void getGlobalBlockPalette(void)const;
    void getRecipes(void)const;
    void registerBorderBlock(BlockLegacy const&);
    void getEducationLevelSettings(void)const;
    void setEducationLevelSettings(EducationLevelSettings);
    void saveEducationLevelSettings(void);
    void getServerAuthoritativeMovement(void)const;
    void setServerAuthoritativeMovement(bool);
    void shouldCorrectPlayerMovement(void)const;
    void setCorrectPlayerMovement(bool);
    void getPlayerMovementScoreThreshold(void)const;
    void setPlayerMovementScoreThreshold(float);
    void getPlayerMovementDistanceThreshold(void)const;
    void getPlayerMovementDistanceThresholdSqr(void)const;
    void setPlayerMovementDistanceThreshold(float);
    void getPlayerMovementDurationThreshold(void)const;
    void setPlayerMovementDurationThreshold(std::chrono::duration<long, std::ratio<1l, 1000l>>);
};

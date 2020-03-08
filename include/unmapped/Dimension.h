#pragma once

#include "../bedrock/network/packet/Packet"
#include "../bedrock/level/LevelChunk"
#include "../bedrock/level/Level"
#include "../bedrock/actor/Actor"
#include "../bedrock/level/LevelListener"
#include "../bedrock/nbt/CompoundTag"


class Dimension : LevelListener, SavedData {

public:
    static long MOON_BRIGHTNESS_PER_PHASE;
    static long CurrentLimboEntitiesVersion;
    static long STRUCTURE_PRUNE_INTERVAL;

    virtual Dimension::~Dimension();
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    virtual void onBlockEvent(BlockSource &, int, int, int, int, int);
    virtual void onNewChunk(BlockSource &, LevelChunk &);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onLevelDestruction(std::string const&);
    virtual void init(void);
    virtual void tick(void);
    virtual void tickRedstone(void);
    virtual void updateLightRamp(void);
    virtual bool isNaturalDimension(void)const;
    virtual bool isValidSpawn(int, int)const;
    virtual void getFogColor(float)const;
    virtual void getMaxFogEnd(void)const;
    virtual void getMaxFogStart(void)const;
    virtual bool isFoggyAt(int, int)const;
    virtual void getCloudHeight(void)const;
    virtual void getDefaultBiome(void)const;
    virtual void mayRespawn(void)const;
    virtual bool hasGround(void)const;
    virtual void getSpawnPos(void)const;
    virtual void getSpawnYPosition(void)const;
    virtual bool hasBedrockFog(void);
    virtual void getClearColorScale(void);
    virtual void showSky(void)const;
    virtual bool isDay(void)const;
    virtual void getSunIntensity(float, Vec3 const&, float)const;
    virtual void deserialize(CompoundTag const&);
    virtual void serialize(CompoundTag &)const;
    virtual void sendBroadcast(Packet const&, Player *);
    virtual void startLeaveGame(void);
    virtual void getTimeOfDay(int, float)const;

    void setHasWeather(bool);
    void getSeaLevel(void)const;
    void getPostProcessingManager(void);
    void getHeight(void)const;
    void getChunkBuildOrderPolicy(void);
    void getTaskGroup(void);
    void getDefaultBrightness(void)const;
    bool hasWeather(void)const;
    void getLevelChunkBuilderData(void);
    void getLevelChunkGarbageCollector(void)const;
    void getLevelChunkGarbageCollector(void);
    Dimension(Level &, AutomaticID<Dimension, int>, short, Scheduler &, std::string);
    bool isRedstoneTick(void);
    void addWither(ActorUniqueID const&);
    void removeWither(ActorUniqueID const&);
    void removeActorByID(ActorUniqueID const&);
    void getEntityIdMap(void)const;
    void getPopCap(int, bool)const;
    void updateBlockLight(BlockPos const&, Brightness, Brightness, Brightness, Brightness, bool);
    void backgroundTickSeasons(void);
    void getLevel(void)const;
    void forEachPlayer(std::function<bool ()(Player &)>);
    bool isLeaveGameDone(void);
    void getChunkSource(void)const;
    void getVillageManager(void)const;
    void forceSaveVillageManager(void);
    void tryGarbageCollectStructures(void);
    void getWorldGenerator(void)const;
    void getOldSkyDarken(float);
    void _tickEntityChunkMoves(void);
    void _runChunkGenerationWatchdog(void);
    void _captureChunkMapDebugDrawData(void);
    void transferEntityToUnloadedChunk(Vec3 const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>);
    void getSeasons(void);
    void getTimeOfDay(float)const;
    void getSunAngle(float)const;
    void getSunlightDirection(float)const;
    void getWeather(void)const;
    void getMoonPhase(void)const;
    void getMoonBrightness(void)const;
    void getSkyDarken(float)const;
    void getSkyDarken(void)const;
    void getBrightnessRamp(void)const;
    void setBrightnessRamp(unsigned int, float);
    void getSunriseColor(float)const;
    void getSkyColor(Actor const&, float)const;
    void getSkyColor(BlockSource &, BlockPos const&, float)const;
    void getCloudColor(float);
    void getStarBrightness(float);
    void getId(void)const;
    void getLevelConst(void)const;
    void getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD(void)const;
    void getCircuitSystem(void);
    void getTickingAreasConst(void)const;
    void getTickingAreas(void);
    void _onNewTickingEntity(Actor &);
    bool processTickingAreaRemoves(void);
    bool processTickingAreaUpdates(void);
    void getEntityIdMapConst(void)const;
    void forEachPlayer(std::function<bool ()(Player const&)>)const;
    void findPlayer(std::function<bool ()(Player const&)>)const;
    void fetchNearestPlayer(Actor &, float);
    void fetchNearestPlayer(float, float, float, float, bool);
    void fetchNearestAttackablePlayer(BlockPos, float, Actor *);
    void fetchNearestAttackablePlayer(Actor &, float);
    void distanceToNearestPlayerSqr2D(Vec3);
    void _registerEntity(Actor &);
    void _unregisterEntity(Actor &);
    void flagEntityforChunkMove(Actor &);
    void fetchEntity(ActorUniqueID, bool);
    void transferEntity(Vec3 const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>);
    void _completeEntityTransfer(BlockSource &, std::unique_ptr<Actor, std::default_delete<Actor>>);
    void onChunkDiscarded(LevelChunk &);
    void tryAssignNewRegionAt(ChunkPos const&, Actor &);
    void upgradeOldLimboEntity(CompoundTag &, LimboEntitiesVersion);
    void sendPacketForPosition(BlockPos const&, Packet const&, Player const*);
    bool isUltraWarm(void)const;
    void setUltraWarm(bool);
    bool hasCeiling(void)const;
    void setCeiling(bool);
    bool hasSkylight(void)const;
    void setSkylight(bool);
    void sendPacketForEntity(Actor const&, Packet const&, Player const*);
    void getBlockEventDispatcher(void);
    void getBlockEventDispatcherConst(void)const;
};

#pragma once

class Dimension : LevelListener, SavedData {

    virtual void Dimension::~Dimension();
    virtual void Dimension::~Dimension();
    virtual void onSourceCreated(BlockSource &);
    virtual void onSourceDestroyed(BlockSource &);
    virtual void onAreaChanged(BlockSource &, BlockPos const&, BlockPos const&);
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    virtual void onBrightnessChanged(BlockSource &, BlockPos const&);
    virtual void onBlockEntityChanged(BlockSource &, BlockActor &);
    virtual void onBlockEntityAboutToBeRemoved(BlockSource &, std::shared_ptr<BlockActor>);
    virtual void onEntityChanged(BlockSource &, Actor &);
    virtual void onBlockEvent(BlockSource &, int, int, int, int, int);
    virtual void allChanged(void);
    virtual void addParticle(ParticleType, Vec3 const&, Vec3 const&, int, CompoundTag const*, bool);
    virtual void sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int);
    virtual void addParticleEffect(HashedString const&, Vec3 const&, MolangVariableMap const&);
    virtual void addParticleEffect(HashedString const&, Actor const&, HashedString const&, Vec3 const&, MolangVariableMap const&);
    virtual void addTerrainParticleEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
    virtual void addBreakingItemParticleEffect(Vec3 const&, ParticleType, TextureUVCoordinateSet const&, bool);
    virtual void playMusic(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Vec3 const&, float, float);
    virtual void playStreamingMusic(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, int, int);
    virtual void onEntityAdded(Actor &);
    virtual void onEntityRemoved(Actor &);
    virtual void onNewChunk(BlockSource &, LevelChunk &);
    virtual void onNewChunkFor(Player &, LevelChunk &);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);
    virtual void onLevelDestruction(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void levelEvent(LevelEvent, Vec3 const&, int);
    virtual void levelEvent(LevelEvent, CompoundTag const&);
    virtual void levelSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool);
    virtual void levelSoundEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Vec3 const&, float, float);
    virtual void stopSoundEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void stopAllSounds(void);
    virtual void takePicture(cg::ImageBuffer &, Actor *, Actor *, ScreenshotOptions &);
    virtual void playerListChanged(void);
    virtual void init(void);
    virtual void tick(void);
    virtual void tickRedstone(void);
    virtual void createGenerator(void);
    virtual void updateLightRamp(void);
    virtual void isNaturalDimension(void)const;
    virtual void isValidSpawn(int, int)const;
    virtual void getFogColor(float)const;
    virtual void getMaxFogEnd(void)const;
    virtual void getMaxFogStart(void)const;
    virtual void isFoggyAt(int, int)const;
    virtual void getCloudHeight(void)const;
    virtual void getDefaultBiome(void)const;
    virtual void mayRespawn(void)const;
    virtual void hasGround(void)const;
    virtual void getSpawnPos(void)const;
    virtual void getSpawnYPosition(void)const;
    virtual void hasBedrockFog(void);
    virtual void getClearColorScale(void);
    virtual void showSky(void)const;
    virtual void isDay(void)const;
    virtual void getSunIntensity(float, Vec3 const&, float)const;
    virtual void translatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const;
    virtual void deserialize(CompoundTag const&);
    virtual void serialize(CompoundTag &)const;
    virtual void sendBroadcast(Packet const&, Player *);
    virtual void startLeaveGame(void);
    virtual void getTimeOfDay(int, float)const;
    virtual void ;
    virtual void `non-virtual thunk to'Dimension::~Dimension();
    virtual void `non-virtual thunk to'Dimension::~Dimension();
    virtual void `non-virtual thunk to'Dimension::deserialize(CompoundTag const&);
    virtual void `non-virtual thunk to'Dimension::serialize(CompoundTag &)const;
}

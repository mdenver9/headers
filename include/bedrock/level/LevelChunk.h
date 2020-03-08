#pragma once

#include "../../unmapped/BlockPos"
#include "../../unmapped/AABB"
#include "../../unmapped/BlockID"
#include "../actor/Actor"
#include "../io/IDataInput"
#include "../../unmapped/ActorUniqueID"
#include "../../unmapped/ChunkBlockPos"
#include "../../unmapped/BlockSource"
#include "../io/IDataOutput"
#include "chunksource/ChunkSource"
#include "../../unmapped/Block"
#include "../../unmapped/SubChunk"
#include "biome/Biome"
#include "../../unmapped/BoundingBox"
#include "chunksource/ChunkViewSource"
#include "../../unmapped/Dimension"
#include "../block/actor/BlockActor"
#include "../../unmapped/Tick"


class LevelChunk {

public:
    static long UPDATE_MAP_BIT_SHIFT;


    bool isOwnedByTickingThread(void)const;
    void getAllocatedHeight(void)const;
    void getSubChunks(void)const;
    void onTickingStarted(void);
    void onTickingStopped(void);
    void createNew(Dimension &, ChunkPos, bool);
    void createNewNoCustomDeleter(Dimension &, ChunkPos, bool);
    LevelChunk(Dimension &, ChunkPos const&, bool);
    void _reassignSubChunks(buffer_span_mut<SubChunk>);
    void _createSubChunk(unsigned long, bool, SubChunkInitMode);
    void _assertBlockEntityAccess(void)const;
    void _placeBlockEntity(std::shared_ptr<BlockActor>);
    void _createBlockEntity(BlockPos const&, BlockSource *, Block const&, Block const&);
    void _setLight(ChunkBlockPos const&, Brightness);
    void _lightingCallbacks(ChunkBlockPos const&, Block const&, Block const&, BlockSource *);
    void getHeightmap(ChunkBlockPos const&)const;
    void _recalcHeight(ChunkBlockPos const&, BlockSource *);
    void placeCallbacks(ChunkBlockPos const&, Block const&, Block const&, BlockSource *, std::shared_ptr<BlockActor>);
    void trySetLightingTaskActive(void);
    void resetLightingTaskActive(void);
    void _removeCallbacks(ChunkBlockPos const&, Block const&, Block const&, BlockSource *);
    void getBlock(ChunkBlockPos const&)const;
    void setBlock(ChunkBlockPos const&, Block const&, BlockSource *, std::shared_ptr<BlockActor>);
    void setExtraBlock(ChunkBlockPos const&, Block const&, BlockSource *);
    void getExtraBlock(ChunkBlockPos const&)const;
    void fetchBlocks(BlockPos const&, BlockVolume &)const;
    void getPosition(void)const;
    bool isBlockInChunk(BlockPos const&)const;
    void borderBlocksAreEnabled(void);
    void getBorder(ChunkBlockPos const&)const;
    void setBorder(ChunkBlockPos const&, bool);
    void addHardcodedSpawningArea(BoundingBox const&, HardcodedSpawnAreaType);
    void getMin(void)const;
    void getMax(void)const;
    void removeHardcodedSpawningArea(HardcodedSpawnAreaType);
    void findHardcodedSpawnAt(BlockPos const&);
    void getSpawningAreas(void)const;
    void getPreWorldGenHeightmap(ChunkBlockPos const&)const;
    void setPreWorldGenHeightMap(std::unique_ptr<std::vector<short, std::allocator<short>>, std::default_delete<std::vector<short, std::allocator<short>>>>);
    void getTickQueue(void);
    void getTickQueue(void)const;
    void getRandomTickQueue(void);
    void getRandomTickQueue(void)const;
    void getBrightness(ChunkBlockPos const&)const;
    void getBrightness(ChunkBlockPos const&, Brightness)const;
    void getRawBrightness(ChunkBlockPos const&, Brightness)const;
    bool hasEntity(Actor &);
    void addEntity(std::unique_ptr<Actor, std::default_delete<Actor>>);
    void removeEntity(Actor &);
    void removeBlockEntity(BlockPos const&);
    bool isSkyLit(ChunkBlockPos const&)const;
    void tryChangeState(ChunkState, ChunkState);
    void changeState(ChunkState, ChunkState);
    void _changeTerrainDataState(ChunkTerrainDataState, ChunkTerrainDataState);
    void _onTickingQueueChanged(void);
    void _onRandomTickingQueueChanged(void);
    void createSubchunk(unsigned long, bool, SubChunkInitMode);
    void getConvertedInterpolantBool(unsigned long, unsigned long)const;
    void enableBlockEntityAccessForThisThread(void)const;
    void getEntities(Actor *, AABB const&, std::vector<Actor *, std::allocator<Actor *>> &)const;
    void getEntities(buffer_span<Actor *>, AABB const&, std::vector<Actor *, std::allocator<Actor *>> &)const;
    void getEntities(ActorType, AABB const&, std::vector<Actor *, std::allocator<Actor *>> &, bool)const;
    void getEntity(ActorUniqueID const&)const;
    void getEntities(void)const;
    void getBlockEntities(void)const;
    void getBlockEntity(ChunkBlockPos const&);
    bool hasBlockEntity(ChunkBlockPos const&);
    void setAllBlocks(buffer_span<Block const*>, short);
    void setAllLegacyBlockIDAndData(buffer_span<BlockID>, buffer_span<NibblePair>);
    void tick(BlockSource &, Tick const&);
    void _deserializeEntity(BlockSource &, IDataInput &, std::vector<ActorLink, std::allocator<ActorLink>> &);
    void setUnsaved(void);
    void tickBlocks(BlockSource &);
    void tickBlockEntities(BlockSource &);
    void tickRedstoneBlocks(BlockSource &);
    void tickEntitiesDirty(void);
    void findLightningTarget(BlockPos const&, BlockSource &);
    void serialize2DMaps(IDataOutput &)const;
    void serializeBiomes(IDataOutput &)const;
    void serializeBorderBlocks(IDataOutput &)const;
    void serializeTicks(IDataOutput &)const;
    void serializeRandomTicks(IDataOutput &)const;
    void serializeFinalization(IDataOutput &)const;
    void serializeHardcodedSpawners(IDataOutput &)const;
    void deserializeHardcodedSpawners(IDataInput &);
    void serializeBlockEntities(IDataOutput &)const;
    void serializeBiomeStates(IDataOutput &)const;
    void serializeEntities(IDataOutput &)const;
    void legacyDeserializeTerrain(IDataInput &);
    void checkBiomeStates(void);
    void deserialize2DMaps(IDataInput &);
    void deserializeBiomes(IDataInput &);
    void deserialize2DMapsLegacy(IDataInput &);
    void deserializeBlockEntities(IDataInput &);
    void deserializeBorderBlocks(IDataInput &);
    void legacyDeserializeBlockExtraData(IDataInput &);
    void deserializeBiomeStates(IDataInput &);
    void deserializeTicks(IDataInput &);
    void deserializeRandomTicks(IDataInput &);
    void deserializeSubChunk(unsigned char, IDataInput &);
    void deserializeFinalization(IDataInput &);
    void deserializeConversionData(IDataInput &);
    void deserializeLoadedVersion(IDataInput &);
    void _deserializeVersion(IDataInput &);
    bool isSubChunkKey(gsl::basic_string_span<char const, -1l>)const;
    void deserializeKey(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>);
    void getAboveTopSolidBlock(ChunkBlockPos const&, bool, bool, bool);
    bool isAABBOverlappingChunk(BlockPos const&, BlockPos const&)const;
    bool isAABBFullyInChunk(BlockPos const&, BlockPos const&)const;
    bool needsSaving(int, int)const;
    bool isDirty(void)const;
    void getBiome(ChunkBlockPos const&)const;
    void setBiome(Biome const&, ChunkBlockPos const&);
    void setGrassColor(int, ChunkBlockPos const&);
    void setWaterColor(int, ChunkBlockPos const&);
    void getGrassColor(ChunkBlockPos const&);
    void getWaterColor(ChunkBlockPos const&);
    void setCachedTemperatureNoise(ChunkBlockPos const&, signed char);
    void getCachedTemperatureNoise(ChunkBlockPos const&);
    bool wasTickedThisTick(Tick const&)const;
    void _generateOriginalLightingSubChunk(BlockSource &, unsigned long, bool);
    void generateOriginalLighting(ChunkViewSource &, bool);
    void getDimension(void)const;
    void _generateOriginalLighting(ChunkViewSource &, bool);
    void runtimeRelightSubchunk(BlockSource &, unsigned long, std::vector<SubChunkLightUpdate, std::allocator<SubChunkLightUpdate>> *, std::vector&<BlockPos, std::allocator<std::vector&>>);
    void recomputeHeightMap(bool);
    void getTopRainBlockPos(ChunkBlockPos const&);
    void clearDeletedEntities(void);
    void setPendingEntities(std::string &);
    bool hasEntitiesToSerialize(void)const;
    bool hasEntitiesPendingToLoad(void)const;
    void getState(void)const;
    void _getTerrainDataState(void)const;
    void setSaved(void);
    void onDiscarded(void);
    void onBlockEntityChanged(void);
    void setupRedstoneCircuit(BlockSource &);
    bool isRedstoneSetupDone(void)const;
    bool needsUpgradeFix(void)const;
    void getLoadedFormat(void)const;
    void applySeasonsPostProcess(BlockSource &);
    void checkSeasonsPostProcessDirty(void);
    void key(void)const;
    void getLastTick(void)const;
    bool isReadOnly(void)const;
    void getGenerator(void)const;
    void _setGenerator(ChunkSource *);
    void getLevel(void)const;
    void setFinalized(LevelChunk::Finalization);
    bool hasAnyBiomeStates(void)const;
    void updateCachedData(BlockSource &);
    void _enableBlockEntityAccessForThisThread(void)const;
    void _disableBlockEntityAccessForThisThread(void)const;
    void _dirtyTicksCounter(LevelChunkDataField);
    void getSubChunks(void);
    void getMaxSubChunks(void)const;
    void getMaxSubChunkCnt(void);
    void fillBiomes(BiomeChunkData const&);
    void _setDBChunkSurroundedByNeighbors(bool);
    void setDebugDisplaySavedState(bool);
    void _getDBChunkSurroundedByNeighbors(void)const;
    void chunkHasConvertedDataTag(void)const;
    void getDirtyTicksCounter(LevelChunkDataField)const;
};

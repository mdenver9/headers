#pragma once

class RandomScatteredLargeFeature : StructureFeature {

    virtual void RandomScatteredLargeFeature::~RandomScatteredLargeFeature();
    virtual void RandomScatteredLargeFeature::~RandomScatteredLargeFeature();
    virtual void initMobSpawnTypes(HardcodedSpawnAreaRegistry &);
    virtual void postProcess(BlockSource *, Random &, int, int);
    virtual void getNearestGeneratedFeature(Dimension &, BiomeSource &, BlockPos const&, BlockPos&);
    virtual void isFeatureChunk(BiomeSource const&, Random &, ChunkPos const&, unsigned int);
    virtual void createStructureStart(Dimension &, BiomeSource &, Random &, ChunkPos const&);
    virtual void getStructureAt(int, int, int);
    virtual void getGuesstimatedFeaturePositions(void);
}

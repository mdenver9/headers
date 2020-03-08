#pragma once



using namespace SpikeFeature;

class EndSpike {

public:

    EndSpike(int, int, int, int, bool);
    bool startsInChunk(BlockPos const&)const;
    void getCenterX(void)const;
    void getCenterZ(void)const;
    void getRadius(void)const;
    void getHeight(void)const;
    bool isGuarded(void)const;
    void getTopBoundingBox(void)const;
};

#pragma once

class HugeMushroomFeature : Feature {

public:
    static long mMushroomTypes;
    static long mHugeMushroomTypes;

    virtual ~HugeMushroomFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void HugeMushroomFeature(void);
    void HugeMushroomFeature(int);
    void shutdown(void);
    void _canSurvive(Block const&)const;
};

#pragma once

#include "../../../unmapped/BlockSource"


class HellFireFeature : Feature {

public:
    virtual HellFireFeature::~HellFireFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    HellFireFeature(void);
};

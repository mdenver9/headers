#pragma once

class DoublePlantFeature : Feature {

    virtual void DoublePlantFeature::~DoublePlantFeature();
    virtual void DoublePlantFeature::~DoublePlantFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
}

#pragma once

using namespace LayerFilters;

class PromoteCenter {

public:

    PromoteCenter(Biome &, Biome &);
    void operator()(LayerDetails::NeighborhoodReader<Biome *, 1u, 1u> &)const;
};
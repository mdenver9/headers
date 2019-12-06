#pragma once

class LayerFilters::BiomeInit {

public:

    void BiomeInit(BiomeRegistry const&, Biome &, Biome &, GeneratorType);
    void operator()(LayerDetails::NeighborhoodReader<LayerValues::PreBiome, 0u, 0u> &, LayerDetails::RandomProviderT<LayerDetails::LayerBase::initRandom(long, long)const::{lambda(long &, unsigned int)#1}>)const;
};

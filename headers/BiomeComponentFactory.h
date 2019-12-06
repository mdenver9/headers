#pragma once

class BiomeComponentFactory {

public:

    void _shouldPopulateSchema(BiomeComponentFactory::ComponentScope);
    void BiomeComponentFactory(BiomeComponentFactory::FactoryScope);
    void processDataComponents(Biome &, IWorldRegistriesProvider &, Json::Value &)const;
    void processDataComponents(Biome &, IWorldRegistriesProvider &, CompoundTag &)const;
    void registrationFinished(void);
};

#pragma once

class FilterTestBiomeHasTag : SimpleTagIDFilterTest {

public:
    virtual FilterTestBiomeHasTag::~FilterTestBiomeHasTag();
    virtual void evaluate(FilterContext const&)const;
    virtual void finalizeParsedValue(IWorldRegistriesProvider &);
    virtual void getName(void)const;

    FilterTestBiomeHasTag(void);
    void _evalBiome(Biome const&, FilterContext const&)const;
};
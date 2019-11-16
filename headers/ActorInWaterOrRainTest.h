#pragma once

class ActorInWaterOrRainTest : SimpleBoolFilterTest {

    virtual void ActorInWaterOrRainTest::~ActorInWaterOrRainTest();
    virtual void ActorInWaterOrRainTest::~ActorInWaterOrRainTest();
    virtual void setup(FilterTest::Definition const&, FilterInputs const&);
    virtual void evaluate(FilterContext const&)const;
    virtual void finalizeParsedValue(IWorldRegistriesProvider &);
    virtual void getName(void)const;
    virtual void _serializeDomain(void)const;
    virtual void _serializeValue(void)const;
}

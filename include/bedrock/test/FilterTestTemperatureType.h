#pragma once

class FilterTestTemperatureType : SimpleIntFilterTest {

public:
    virtual FilterTestTemperatureType::~FilterTestTemperatureType();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    FilterTestTemperatureType(void);
};
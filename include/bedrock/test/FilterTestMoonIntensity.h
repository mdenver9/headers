#pragma once

class FilterTestMoonIntensity : SimpleFloatFilterTest {

public:
    virtual FilterTestMoonIntensity::~FilterTestMoonIntensity();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    FilterTestMoonIntensity(void);
};
#pragma once

class ActorInWaterTest : SimpleBoolFilterTest {

public:
    virtual ActorInWaterTest::~ActorInWaterTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorInWaterTest(void);
};
#pragma once

class ActorIsVariantTest : SimpleIntFilterTest {

public:
    virtual ActorIsVariantTest::~ActorIsVariantTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorIsVariantTest(void);
};
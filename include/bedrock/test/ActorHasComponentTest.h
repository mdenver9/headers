#pragma once

#include "../../unmapped/FilterContext"


class ActorHasComponentTest : SimpleHashStringFilterTest {

public:
    virtual ActorHasComponentTest::~ActorHasComponentTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorHasComponentTest(void);
};

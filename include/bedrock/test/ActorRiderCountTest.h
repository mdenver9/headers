#pragma once

#include "../../unmapped/FilterContext"


class ActorRiderCountTest : SimpleIntFilterTest {

public:
    virtual ActorRiderCountTest::~ActorRiderCountTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorRiderCountTest(void);
};

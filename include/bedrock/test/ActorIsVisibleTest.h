#pragma once

class ActorIsVisibleTest : SimpleBoolFilterTest {

public:
    virtual ActorIsVisibleTest::~ActorIsVisibleTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorIsVisibleTest(void);
};
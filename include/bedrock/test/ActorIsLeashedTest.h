#pragma once

class ActorIsLeashedTest : SimpleBoolFilterTest {

public:
    virtual ActorIsLeashedTest::~ActorIsLeashedTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    ActorIsLeashedTest(void);
};
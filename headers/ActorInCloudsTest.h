#pragma once

class ActorInCloudsTest : SimpleBoolFilterTest {

public:
    virtual ~ActorInCloudsTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void ActorInCloudsTest(void);
};

#pragma once

class BlockIsNameTest : SimpleHashStringFilterTest {

public:
    virtual ~BlockIsNameTest();
    virtual void evaluate(FilterContext const&)const;
    virtual void getName(void)const;

    void BlockIsNameTest(void);
};

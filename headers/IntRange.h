#pragma once

class IntRange {

public:
    static long ZERO;


    void IntRange(void);
    void IntRange(int);
    void IntRange(int, int);
    void getValue(Random &)const;
    bool isInRangeInclusive(int)const;
    bool isInRangeExclusive(int)const;
    void parseJson(Json::Value, int, int);
};
#pragma once

class Tick {

public:
    static long Tick::MAX;


    void Tick(void);
    void Tick(unsigned long);
    void Tick(Tick const&);
    void getTimeStamp(void)const;
};

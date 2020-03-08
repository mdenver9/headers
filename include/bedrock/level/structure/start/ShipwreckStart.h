#pragma once

#include "../../../../unmapped/BiomeSource"


class ShipwreckStart : StructureStart {

public:
    virtual ShipwreckStart::~ShipwreckStart();
    virtual void getType(void)const;

    ShipwreckStart(void);
    ShipwreckStart(BiomeSource &, Random &, int, int);
};

#pragma once

#include "Block.h"


class LegacyStructureBlockPalette {

public:
    ~LegacyStructureBlockPalette();
    LegacyStructureBlockPalette();
    void getSize();
    void addMapping(int, Block const&);
    void getBlock(int);
    void getId(Block const&);
    void clearMap();
};

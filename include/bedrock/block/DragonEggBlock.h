#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Player"


class DragonEggBlock : HeavyBlock {

public:
    virtual DragonEggBlock::~DragonEggBlock();
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void getDustColor(Block const&)const;
    virtual void getDustParticleName[abi:cxx11](Block const&)const;

    DragonEggBlock(std::string const&, int);
    void _teleport(BlockSource &, Random &, BlockPos const&)const;
};

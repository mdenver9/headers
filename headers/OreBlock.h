#pragma once

class OreBlock : BlockLegacy {

public:
    virtual ~OreBlock();
    virtual bool canBeOriginalSurface(void)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getExperienceDrop(Random &)const;

    void OreBlock(std::string const&, int);
};

#pragma once

class BlockFetchResult {

public:

    void BlockFetchResult(Block const&, BlockPos const&, unsigned int);
    void getBlock(void)const;
    void getBlockPos(void)const;
    void getDistanceSquared(void)const;
    void BlockFetchResult(BlockFetchResult&&);
    void BlockFetchResult(BlockFetchResult const&);
};
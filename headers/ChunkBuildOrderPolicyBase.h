#pragma once

class ChunkBuildOrderPolicyBase {

    virtual void ChunkBuildOrderPolicyBase::~ChunkBuildOrderPolicyBase();
    virtual void ChunkBuildOrderPolicyBase::~ChunkBuildOrderPolicyBase();
    virtual void getChunkRebuildPriority(ChunkPos const&)const;
    virtual void registerForPositionUpdates(void);
    virtual void updatePosition(unsigned int, ChunkPos &);
    virtual void unregisterForPositionUpdates(unsigned int);
}

#pragma once

class ConduitBlockActor : BlockActor {

public:
    virtual ConduitBlockActor::~ConduitBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual bool hasAlphaLayer(void)const;

    ConduitBlockActor(BlockPos const&);
    void _animateTick(BlockSource &)const;
    void _checkShape(BlockSource &);
    void _applyEffects(BlockSource &);
    void _updateTarget(BlockSource &);
    void setEffectRange(int);
    void incrementAnimationValue(float);
    void incrementWindLevel(void);
    bool isActive(void)const;
    void setShellRotation(float);
};
#pragma once

class Endermite : Monster {

public:
    virtual ~Endermite();
    virtual void normalTick(void);
    virtual void getRidingHeight(void);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _onSizeUpdated(void);
    virtual void aiStep(void);
    virtual void checkSpawnRules(bool);

    void Endermite(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};

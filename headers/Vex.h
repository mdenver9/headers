#pragma once

class Vex : Monster {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~Vex();
    virtual bool isInWall(void)const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    void Vex(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};

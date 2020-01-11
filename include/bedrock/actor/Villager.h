#pragma once

class Villager : VillagerBase {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual Villager::~Villager();
    virtual void buildDebugInfo(std::string &)const;

    Villager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
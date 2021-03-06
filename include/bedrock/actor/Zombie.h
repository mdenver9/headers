#pragma once

#include "HumanoidMonster.h"


class Zombie : public HumanoidMonster {

public:
    static long SPAWN_BONUS_UUID;
    static long SPAWN_REINFORCEMENTS_CHANCE;

    virtual void reloadHardcoded__incomplete0(long, VariantParameterList const&); //TODO: incomplete function definition // _ZN6Zombie15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    virtual ~Zombie(); // _ZN6ZombieD2Ev
    virtual void __fake_function0(); // fake
    virtual void getRidingHeight(); // _ZN6Zombie15getRidingHeightEv
    virtual void die(ActorDamageSource const&); // _ZN6Zombie3dieERK17ActorDamageSource
    virtual void checkSpawnRules(bool); // _ZN6Zombie15checkSpawnRulesEb
    virtual bool shouldDespawn()const; // _ZNK6Zombie13shouldDespawnEv
    virtual void getArmorValue(); // _ZN6Zombie13getArmorValueEv
    virtual void useNewAi()const; // _ZNK6Zombie8useNewAiEv
    Zombie(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN6ZombieC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
//    void setZombieType(long); //TODO: incomplete function definition // _ZN6Zombie13setZombieTypeENS_10ZombieTypeE
    void getZombieType()const; // _ZNK6Zombie13getZombieTypeEv
};

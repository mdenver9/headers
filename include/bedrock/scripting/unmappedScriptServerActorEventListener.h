#pragma once

#include "../../actor/damagesource/ActorDamageSource"
#include "../../../unmapped/HitResult"
#include "../../actor/Actor"
#include "../../actor/unmapped/ActorEventListener"
#include "../../util/Vec3"
#include "../../../unmapped/MinecraftServerScriptEngine"
#include "../../item/ItemInstance"


class ScriptServerActorEventListener : ActorEventListener {

public:
    ScriptServerActorEventListener::~ScriptServerActorEventListener()
    virtual void onActorAttack(Actor &, Actor &);
    virtual void onActorHurt(Actor &, ActorDamageSource const&, int, int);
    virtual void onActorMove(Actor &, Vec3 const&);
    virtual void onActorTick(Actor &);
    virtual void onActorSneakChanged(Actor &, bool);
    virtual void onActorStartRiding(Actor &, Actor &);
    virtual void onActorStopRiding(Actor &, bool, bool, bool);
    virtual void onActorDeath(Actor &, ActorDamageSource const&);
    virtual void onActorDefinitionEventTriggered(Actor &, std::string const&);
    virtual void onActorUseItem(Actor &, ItemInstance const&, ItemUseMethod);
    virtual void onActorCreated(Actor &);
    virtual void onProjectileHit(Actor &, HitResult const&);
    virtual void onActorAcquiredItem(Actor &, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor*);
    virtual void onActorDroppedItem(Actor &, ItemInstance const&);
    virtual void onActorCarriedItemChanged(Actor &, ItemInstance const&, ItemInstance const&, HandSlot);
    virtual void onActorEquippedArmor(Actor &, ItemInstance const&, ArmorSlot);
    virtual void onActorRemoved(Actor &);

    ScriptServerActorEventListener(MinecraftServerScriptEngine &);
};
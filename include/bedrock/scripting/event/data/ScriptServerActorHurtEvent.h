#pragma once

#include "../../../../unmapped/BlockPos"
#include "../../../../unmapped/ScriptEngine"
#include "../../../../unmapped/ActorUniqueID"


class ScriptServerActorHurtEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorHurtEvent::~ScriptServerActorHurtEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerActorHurtEvent(void);
    void setActorId(ActorUniqueID const&);
    void setAttackerId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setCause(std::string const&);
    void setProjectile(ActorType const&);
    void setDamage(int);
    void setAbsorbedDamage(int);
};

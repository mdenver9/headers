#pragma once

class ScriptServerActorMoveEvent : ScriptEventData {

public:
    static long ScriptServerActorMoveEvent::mHash;

    virtual ~ScriptServerActorMoveEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerActorMoveEvent(void);
    void setActorId(ActorUniqueID const&);
};

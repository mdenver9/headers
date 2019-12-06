#pragma once

class ScriptServerActorEquippedArmorEvent : ScriptEventData {

public:
    static long ScriptServerActorEquippedArmorEvent::mHash;

    virtual ~ScriptServerActorEquippedArmorEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerActorEquippedArmorEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
    void setSlot(ArmorSlot);
};

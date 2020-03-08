#pragma once

#include "../ScriptVersionInfo"


class ScriptArmorContainerComponent : ScriptContainerComponentBase {

public:
    static long mHash;

    virtual ScriptArmorContainerComponent::~ScriptArmorContainerComponent();
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;

    void getHash(void);
    ScriptArmorContainerComponent(void);
};

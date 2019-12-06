#pragma once

class ScriptLevelBinderComponent : ScriptBinderComponent {

public:
    virtual ~ScriptLevelBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    void ScriptLevelBinderComponent(void);
    void ScriptLevelBinderComponent(unsigned int);
    void getIdentifier(void)const;
};

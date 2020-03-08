#pragma once

#include "../../../unmapped/ScriptServerContext"
#include "../ScriptVersionInfo"


class ApplyItemBinding : ScriptTemplateFactory<ScriptServerContext>::Entity {

public:
    virtual ApplyItemBinding::~ApplyItemBinding();
    virtual void createAndApplyTemplate(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor **, std::string const&)const;

    ApplyItemBinding(void);
};

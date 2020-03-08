#pragma once

#include "../../util/BlockPos"
#include "../ScriptObjectHandle"
#include "../../../unmapped/Block"


class ScriptBinderBlockTemplate : ScriptBinderTemplate {

public:
    ScriptBinderBlockTemplate::~ScriptBinderBlockTemplate()
    virtual void getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(Block const&, BlockPos const&, ScriptApi::ScriptObjectHandle &&);
    ScriptBinderBlockTemplate(void);
};
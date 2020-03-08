#pragma once

#include "../../../json/Value"
#include "../../level/ServerLevel"


class ScriptCommandOrigin : CommandOrigin {

public:
    virtual ScriptCommandOrigin::~ScriptCommandOrigin();
    virtual void getRequestId[abi:cxx11](void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void getBlockPosition(void)const;
    virtual void getWorldPosition(void)const;
    virtual void getLevel(void)const;
    virtual void getDimension(void)const;
    virtual void getEntity(void)const;
    virtual void getPermissionsLevel(void)const;
    virtual void clone(void)const;
    virtual bool canUseCommandsWithoutCheatsEnabled(void)const;
    virtual bool isSelectorExpansionAllowed(void)const;
    virtual void getOriginType(void)const;
    virtual void handleCommandOutputCallback(Json::Value &&)const;

    ScriptCommandOrigin(ServerLevel &, ScriptEngine &);
    ScriptCommandOrigin(ServerLevel &, ScriptEngine &, unsigned int);
};

#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class TeleportToSubcomponent : OnHitSubcomponent {

public:
    virtual TeleportToSubcomponent::~TeleportToSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    TeleportToSubcomponent(void);
};

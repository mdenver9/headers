#pragma once

class OnHurtDescription : TriggerDescription {

    virtual void getJsonName(void)const;
    virtual ~OnHurtDescription();
    virtual ~OnHurtDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}

#pragma once

class IsBabyDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~IsBabyDescription();
    virtual ~IsBabyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}

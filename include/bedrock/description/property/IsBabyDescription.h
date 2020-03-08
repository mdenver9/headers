#pragma once

#include "../../../json/Value"


class IsBabyDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual IsBabyDescription::~IsBabyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsBabyDescription(void);
};

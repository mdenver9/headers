#pragma once

class IsIgnitedDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual IsIgnitedDescription::~IsIgnitedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsIgnitedDescription(void);
};
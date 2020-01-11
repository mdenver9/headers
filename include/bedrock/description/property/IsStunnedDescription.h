#pragma once

class IsStunnedDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual IsStunnedDescription::~IsStunnedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsStunnedDescription(void);
};
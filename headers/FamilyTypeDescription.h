#pragma once

class FamilyTypeDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void FamilyTypeDescription::~FamilyTypeDescription();
    virtual void FamilyTypeDescription::~FamilyTypeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}

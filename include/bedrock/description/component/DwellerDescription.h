#pragma once

class DwellerDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual DwellerDescription::~DwellerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    DwellerDescription(void);
};
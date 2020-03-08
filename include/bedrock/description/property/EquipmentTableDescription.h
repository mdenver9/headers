#pragma once

#include "../../../json/Value"


class EquipmentTableDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual EquipmentTableDescription::~EquipmentTableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    EquipmentTableDescription(void);
};

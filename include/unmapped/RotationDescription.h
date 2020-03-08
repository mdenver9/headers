#pragma once

#include "../json/Value"
#include "../bedrock/description/Description"


class RotationDescription : Description {

public:
    virtual void getJsonName(void)const;
    virtual RotationDescription::~RotationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    RotationDescription(void);
    RotationDescription(Vec2);
};

#pragma once

class TransformationDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void TransformationDescription::~TransformationDescription();
    virtual void TransformationDescription::~TransformationDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}

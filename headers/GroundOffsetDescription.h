#pragma once

class GroundOffsetDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~GroundOffsetDescription();
    virtual ~GroundOffsetDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}

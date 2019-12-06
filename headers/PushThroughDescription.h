#pragma once

class PushThroughDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~PushThroughDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void PushThroughDescription(void);
};

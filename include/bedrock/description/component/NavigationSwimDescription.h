#pragma once

class NavigationSwimDescription : NavigationDescription {

public:
    virtual void getJsonName(void)const;
    virtual NavigationSwimDescription::~NavigationSwimDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    NavigationSwimDescription(void);
};
#pragma once

class NavigationGenericDescription : NavigationDescription {

public:
    virtual void getJsonName(void)const;
    virtual NavigationGenericDescription::~NavigationGenericDescription();

    NavigationGenericDescription(void);
};
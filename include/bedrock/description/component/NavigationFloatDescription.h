#pragma once

#include "NavigationDescription.h"


class NavigationFloatDescription : NavigationDescription {

public:
    virtual void getJsonName()const;
    ~NavigationFloatDescription();
    NavigationFloatDescription();
};

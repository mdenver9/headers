#pragma once

#include "PropertyDescription.h"


class FlyingSpeedDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK22FlyingSpeedDescription11getJsonNameEv
    virtual ~FlyingSpeedDescription(); // _ZN22FlyingSpeedDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN22FlyingSpeedDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK22FlyingSpeedDescription13serializeDataERN4Json5ValueE
    FlyingSpeedDescription(); // _ZN22FlyingSpeedDescriptionC2Ev
};

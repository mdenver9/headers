#pragma once

#include "PropertyDescription.h"


class WalkAnimationSpeedDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK29WalkAnimationSpeedDescription11getJsonNameEv
    virtual ~WalkAnimationSpeedDescription(); // _ZN29WalkAnimationSpeedDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN29WalkAnimationSpeedDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK29WalkAnimationSpeedDescription13serializeDataERN4Json5ValueE
    WalkAnimationSpeedDescription(); // _ZN29WalkAnimationSpeedDescriptionC2Ev
};

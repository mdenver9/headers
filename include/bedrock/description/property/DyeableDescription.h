#pragma once

#include "PropertyDescription.h"


class DyeableDescription : public PropertyDescription {

public:
    virtual void getJsonName()const; // _ZNK18DyeableDescription11getJsonNameEv
    virtual ~DyeableDescription(); // _ZN18DyeableDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN18DyeableDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK18DyeableDescription13serializeDataERN4Json5ValueE
    DyeableDescription(); // _ZN18DyeableDescriptionC2Ev
};

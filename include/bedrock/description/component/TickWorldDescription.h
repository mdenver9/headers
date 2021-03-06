#pragma once

#include "ComponentDescription.h"


class TickWorldDescription : public ComponentDescription {

public:
    static long MinChunkRadius;
    static long MaxChunkRadius;
    static long MinDistToPlayers;

    virtual void getJsonName()const; // _ZNK20TickWorldDescription11getJsonNameEv
    virtual ~TickWorldDescription(); // _ZN20TickWorldDescriptionD2Ev
    virtual void __fake_function0(); // fake
    virtual void deserializeData(Json::Value &); // _ZN20TickWorldDescription15deserializeDataERN4Json5ValueE
    virtual void serializeData(Json::Value &)const; // _ZNK20TickWorldDescription13serializeDataERN4Json5ValueE
    TickWorldDescription(); // _ZN20TickWorldDescriptionC2Ev
};

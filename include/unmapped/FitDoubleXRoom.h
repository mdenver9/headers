#pragma once

#include <memory>
#include "MonumentRoomFitter.h"


class FitDoubleXRoom : public MonumentRoomFitter {

public:
    virtual ~FitDoubleXRoom(); // _ZN14FitDoubleXRoomD2Ev
    virtual void __fake_function0(); // fake
    virtual void fits(std::shared_ptr<RoomDefinition> &); // _ZN14FitDoubleXRoom4fitsERSt10shared_ptrI14RoomDefinitionE
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &); // _ZN14FitDoubleXRoom6createERiRSt10shared_ptrI14RoomDefinitionER6Random
    FitDoubleXRoom(); // _ZN14FitDoubleXRoomC2Ev
};

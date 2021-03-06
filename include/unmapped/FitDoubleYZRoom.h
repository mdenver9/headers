#pragma once

#include <memory>
#include "MonumentRoomFitter.h"


class FitDoubleYZRoom : public MonumentRoomFitter {

public:
    virtual ~FitDoubleYZRoom(); // _ZN15FitDoubleYZRoomD2Ev
    virtual void __fake_function0(); // fake
    virtual void fits(std::shared_ptr<RoomDefinition> &); // _ZN15FitDoubleYZRoom4fitsERSt10shared_ptrI14RoomDefinitionE
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &); // _ZN15FitDoubleYZRoom6createERiRSt10shared_ptrI14RoomDefinitionER6Random
    FitDoubleYZRoom(); // _ZN15FitDoubleYZRoomC2Ev
};

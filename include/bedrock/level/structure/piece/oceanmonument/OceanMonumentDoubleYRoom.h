#pragma once

#include <memory>
#include "../OceanMonumentPiece.h"


class OceanMonumentDoubleYRoom : public OceanMonumentPiece {

public:
    virtual ~OceanMonumentDoubleYRoom(); // _ZN24OceanMonumentDoubleYRoomD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK24OceanMonumentDoubleYRoom7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN24OceanMonumentDoubleYRoom11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    OceanMonumentDoubleYRoom(); // _ZN24OceanMonumentDoubleYRoomC2Ev
    OceanMonumentDoubleYRoom(int &, std::shared_ptr<RoomDefinition> &); // _ZN24OceanMonumentDoubleYRoomC2ERiRSt10shared_ptrI14RoomDefinitionE
};

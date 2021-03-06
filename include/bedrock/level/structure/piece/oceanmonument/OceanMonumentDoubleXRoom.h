#pragma once

#include <memory>
#include "../OceanMonumentPiece.h"


class OceanMonumentDoubleXRoom : public OceanMonumentPiece {

public:
    virtual ~OceanMonumentDoubleXRoom(); // _ZN24OceanMonumentDoubleXRoomD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK24OceanMonumentDoubleXRoom7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN24OceanMonumentDoubleXRoom11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    OceanMonumentDoubleXRoom(); // _ZN24OceanMonumentDoubleXRoomC2Ev
    OceanMonumentDoubleXRoom(int &, std::shared_ptr<RoomDefinition> &); // _ZN24OceanMonumentDoubleXRoomC2ERiRSt10shared_ptrI14RoomDefinitionE
};

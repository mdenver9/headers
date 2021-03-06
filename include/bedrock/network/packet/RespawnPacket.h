#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include <string>
#include "Packet.h"


class RespawnPacket : public Packet {

public:
    virtual ~RespawnPacket(); // _ZN13RespawnPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK13RespawnPacket5getIdEv
    virtual std::string getName()const; // _ZNK13RespawnPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK13RespawnPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN13RespawnPacket4readER20ReadOnlyBinaryStream
    RespawnPacket(); // _ZN13RespawnPacketC2Ev
//    RespawnPacket(Vec3 const&, long const&); //TODO: incomplete function definition // _ZN13RespawnPacketC2ERK4Vec3RK18PlayerRespawnState
//    RespawnPacket(Vec3 const&, long const&, ActorRuntimeID); //TODO: incomplete function definition // _ZN13RespawnPacketC2ERK4Vec3RK18PlayerRespawnState14ActorRuntimeID
};

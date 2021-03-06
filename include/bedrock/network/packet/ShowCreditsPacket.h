#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include <string>
#include "Packet.h"


class ShowCreditsPacket : public Packet {

public:
    virtual ~ShowCreditsPacket(); // _ZN17ShowCreditsPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK17ShowCreditsPacket5getIdEv
    virtual std::string getName()const; // _ZNK17ShowCreditsPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK17ShowCreditsPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN17ShowCreditsPacket4readER20ReadOnlyBinaryStream
    ShowCreditsPacket(); // _ZN17ShowCreditsPacketC2Ev
//    ShowCreditsPacket(ActorRuntimeID, long); //TODO: incomplete function definition // _ZN17ShowCreditsPacketC2E14ActorRuntimeIDNS_12CreditsStateE
};

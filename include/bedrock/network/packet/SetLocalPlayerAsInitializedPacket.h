#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/ActorRuntimeID"
#include "../../io/ReadOnlyBinaryStream"


class SetLocalPlayerAsInitializedPacket : Packet {

public:
    virtual SetLocalPlayerAsInitializedPacket::~SetLocalPlayerAsInitializedPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetLocalPlayerAsInitializedPacket(void);
    SetLocalPlayerAsInitializedPacket(ActorRuntimeID);
};

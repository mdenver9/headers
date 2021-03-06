#pragma once

#include "../../nbt/CompoundTag.h"
#include <string>
#include "Packet.h"


class BiomeDefinitionListPacket : public Packet {

public:
    virtual ~BiomeDefinitionListPacket(); // _ZN25BiomeDefinitionListPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK25BiomeDefinitionListPacket5getIdEv
    virtual std::string getName()const; // _ZNK25BiomeDefinitionListPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK25BiomeDefinitionListPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN25BiomeDefinitionListPacket4readER20ReadOnlyBinaryStream
    BiomeDefinitionListPacket(); // _ZN25BiomeDefinitionListPacketC2Ev
    BiomeDefinitionListPacket(CompoundTag); // _ZN25BiomeDefinitionListPacketC2E11CompoundTag
};

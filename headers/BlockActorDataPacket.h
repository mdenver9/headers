#pragma once

class BlockActorDataPacket : Packet {

    virtual void BlockActorDataPacket::~BlockActorDataPacket();
    virtual void BlockActorDataPacket::~BlockActorDataPacket();
    virtual void getId(void)const;
    virtual void _ZNK20BlockActorDataPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

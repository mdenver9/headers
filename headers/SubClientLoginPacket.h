#pragma once

class SubClientLoginPacket : Packet {

    virtual void SubClientLoginPacket::~SubClientLoginPacket();
    virtual void SubClientLoginPacket::~SubClientLoginPacket();
    virtual void getId(void)const;
    virtual void _ZNK20SubClientLoginPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

#pragma once

class MovePlayerPacket : Packet {

    virtual void MovePlayerPacket::~MovePlayerPacket();
    virtual void MovePlayerPacket::~MovePlayerPacket();
    virtual void getId(void)const;
    virtual void _ZNK16MovePlayerPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

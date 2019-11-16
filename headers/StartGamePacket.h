#pragma once

class StartGamePacket : Packet {

    virtual void StartGamePacket::~StartGamePacket();
    virtual void StartGamePacket::~StartGamePacket();
    virtual void getId(void)const;
    virtual void _ZNK15StartGamePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

#pragma once

class PlayerListPacket : Packet {

    virtual void PlayerListPacket::~PlayerListPacket();
    virtual void PlayerListPacket::~PlayerListPacket();
    virtual void getId(void)const;
    virtual void _ZNK16PlayerListPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

#pragma once

class ServerToClientHandshakePacket : Packet {

    virtual void ServerToClientHandshakePacket::~ServerToClientHandshakePacket();
    virtual void ServerToClientHandshakePacket::~ServerToClientHandshakePacket();
    virtual void getId(void)const;
    virtual void _ZNK29ServerToClientHandshakePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

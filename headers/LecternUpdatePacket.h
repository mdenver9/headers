#pragma once

class LecternUpdatePacket : Packet {

    virtual void LecternUpdatePacket::~LecternUpdatePacket();
    virtual void LecternUpdatePacket::~LecternUpdatePacket();
    virtual void getId(void)const;
    virtual void _ZNK19LecternUpdatePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

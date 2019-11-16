#pragma once

class LabTablePacket : Packet {

    virtual void LabTablePacket::~LabTablePacket();
    virtual void LabTablePacket::~LabTablePacket();
    virtual void getId(void)const;
    virtual void _ZNK14LabTablePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

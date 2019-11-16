#pragma once

class ContainerOpenPacket : Packet {

    virtual ~ContainerOpenPacket();
    virtual ~ContainerOpenPacket();
    virtual void getId(void)const;
    virtual void _ZNK19ContainerOpenPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

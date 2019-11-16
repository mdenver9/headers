#pragma once

class SetActorMotionPacket : Packet {

    virtual ~SetActorMotionPacket();
    virtual ~SetActorMotionPacket();
    virtual void getId(void)const;
    virtual void _ZNK20SetActorMotionPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

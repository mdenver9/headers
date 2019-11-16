#pragma once

class ChunkRadiusUpdatedPacket : Packet {

    virtual void ChunkRadiusUpdatedPacket::~ChunkRadiusUpdatedPacket();
    virtual void ChunkRadiusUpdatedPacket::~ChunkRadiusUpdatedPacket();
    virtual void getId(void)const;
    virtual void _ZNK24ChunkRadiusUpdatedPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

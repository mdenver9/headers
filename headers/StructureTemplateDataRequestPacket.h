#pragma once

class StructureTemplateDataRequestPacket : Packet {

    virtual void StructureTemplateDataRequestPacket::~StructureTemplateDataRequestPacket();
    virtual void StructureTemplateDataRequestPacket::~StructureTemplateDataRequestPacket();
    virtual void getId(void)const;
    virtual void _ZNK34StructureTemplateDataRequestPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}

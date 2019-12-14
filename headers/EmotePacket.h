#pragma once

class EmotePacket : Packet {

public:
    virtual ~EmotePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void EmotePacket(EmotePacket const&);
    void EmotePacket(void);
    void EmotePacket(ActorRuntimeID, std::string const&, unsigned char);
    void requestEmote(ActorRuntimeID, std::string const&);
    void setServerSide(void);
    bool isServerSide(void)const;
};

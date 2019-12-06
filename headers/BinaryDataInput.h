#pragma once

class BinaryDataInput : BytesDataInput {

public:
    virtual ~BinaryDataInput();
    virtual void readFloat(void);
    virtual void readDouble(void);
    virtual void readByte(void);
    virtual void readShort(void);
    virtual void readInt(void);
    virtual void readLongLong(void);
    virtual void readBytes(void *, unsigned long);
    virtual void numBytesLeft(void)const;

    void BinaryDataInput(ReadOnlyBinaryStream &);
};

#pragma once

class RakDataOutput : BytesDataOutput {

    virtual void RakDataOutput::~RakDataOutput();
    virtual void RakDataOutput::~RakDataOutput();
    virtual void writeString(gsl::basic_string_span<char const, -1l>);
    virtual void writeLongString(gsl::basic_string_span<char const, -1l>);
    virtual void writeFloat(float);
    virtual void writeDouble(double);
    virtual void writeByte(char);
    virtual void writeShort(short);
    virtual void writeInt(int);
    virtual void writeLongLong(long);
    virtual void writeBytes(void const*, unsigned long);
}

#pragma once

class RakNet::BitStream {

public:

    void SetReadOffset(unsigned int);
    void DoEndianSwap(void);
    void IsNetworkOrder(void);
    void GetData(void)const;
    void GetNumberOfBytesUsed(void)const;
    void GetNumberOfUnreadBits(void)const;
    void GetInstance(void);
    void DestroyInstance(RakNet::BitStream*);
    void BitStream(void);
    void BitStream(unsigned int);
    void BitStream(unsigned char *, unsigned int, bool);
    void SetNumberOfBitsAllocated(unsigned int);
    void Reset(void);
    void Write(char const*, unsigned int);
    void AddBitsAndReallocate(unsigned int);
    void WriteBits(unsigned char const*, unsigned int, bool);
    void Write(RakNet::BitStream*);
    void Write(RakNet::BitStream*, unsigned int);
    void Write(RakNet::BitStream&, unsigned int);
    void Write(RakNet::BitStream&);
    void Read(RakNet::BitStream*, unsigned int);
    void Read(RakNet::BitStream*);
    void Read(RakNet::BitStream&, unsigned int);
    void Read(RakNet::BitStream&);
    void Read(char *, unsigned int);
    void ReadBits(unsigned char *, unsigned int, bool);
    void ResetReadPointer(void);
    void ResetWritePointer(void);
    void Write0(void);
    void Write1(void);
    void ReadBit(void);
    void WriteAlignedBytes(unsigned char const*, unsigned int);
    void EndianSwapBytes(int, int);
    void ReverseBytesInPlace(unsigned char *, unsigned int);
    void WriteAlignedBytesSafe(char const*, unsigned int, unsigned int);
    void ReadAlignedBytes(unsigned char *, unsigned int);
    void ReadAlignedBytesSafe(char *, int &, int);
    void ReadAlignedBytesSafe(char *, unsigned int &, unsigned int);
    void ReadAlignedBytesSafeAlloc(char **, int &, unsigned int);
    void ReadAlignedBytesSafeAlloc(char **, unsigned int &, unsigned int);
    void SetData(unsigned char *);
    void WriteCompressed(unsigned char const*, unsigned int, bool);
    void ReadCompressed(unsigned char *, unsigned int, bool);
    void GetNumberOfBitsAllocated(void)const;
    void PadWithZeroToByteLength(unsigned int);
    void NumberOfLeadingZeroes(signed char);
    void NumberOfLeadingZeroes(unsigned char);
    void NumberOfLeadingZeroes(short);
    void NumberOfLeadingZeroes(unsigned short);
    void NumberOfLeadingZeroes(int);
    void NumberOfLeadingZeroes(unsigned int);
    void NumberOfLeadingZeroes(long);
    void NumberOfLeadingZeroes(unsigned long);
    void AssertStreamEmpty(void);
    void PrintBits(char *)const;
    void PrintBits(void)const;
    void PrintHex(char *)const;
    void PrintHex(void)const;
    void CopyData(unsigned char **)const;
    void IgnoreBits(unsigned int);
    void IgnoreBytes(unsigned int);
    void SetWriteOffset(unsigned int);
    void AssertCopyData(void);
    void IsNetworkOrderInternal(void);
    void ReverseBytes(unsigned char *, unsigned char *, unsigned int);
    void Read(char *);
    void Read(unsigned char *);
    void WriteAlignedVar8(char const*);
    void ReadAlignedVar8(char *);
    void WriteAlignedVar16(char const*);
    void ReadAlignedVar16(char *);
    void WriteAlignedVar32(char const*);
    void ReadAlignedVar32(char *);
    void ReadFloat16(float &, float, float);
    void SerializeFloat16(bool, float &, float, float);
    void WriteFloat16(float, float, float);
    void GetNumberOfBitsUsed(void)const;
    void GetReadOffset(void)const;
    void AlignWriteToByteBoundary(void);
    void AlignReadToByteBoundary(void);
    void GetWriteOffset(void)const;
    void IsBigEndian(void);
};

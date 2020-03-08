#pragma once



using namespace RakNet;

class RakString {

public:

    void C_String(void)const;
    RakStringComp(RakNet::RakString const&, RakNet::RakString const&);
    void StrCmp(RakNet::RakString const&)const;
    RakString(void);
    RakString(RakNet::RakString::SharedString *);
    RakString(char);
    void Assign(char const*);
    RakString(unsigned char);
    RakString(unsigned char const*, ...);
    void Assign(char const*, __va_list_tag *);
    RakString(char const*, ...);
    RakString(RakNet::RakString const&);
    void Free(void);
    void Realloc(RakNet::RakString::SharedString *, unsigned long);
    void IsEmpty(void)const;
    void Clone(void);
    void GetLength(void)const;
    void LockMutex(void);
    void UnlockMutex(void);
    void ToLower(void);
    void ToLower(unsigned char);
    void ToUpper(void);
    void ToUpper(unsigned char);
    void Set(char const*, ...);
    void Clear(void);
    void GetLengthUTF8(void)const;
    void Replace(unsigned int, unsigned int, unsigned char);
    void SetChar(unsigned int, unsigned char);
    void SetChar(unsigned int, RakNet::RakString);
    void SubStr(unsigned int, unsigned int)const;
    void Find(char const*, unsigned long);
    void TruncateUTF8(unsigned int);
    void Truncate(unsigned int);
    void Allocate(unsigned long);
    void Erase(unsigned int, unsigned int);
    void TerminateAtLastCharacter(char);
    void StartAfterLastCharacter(char);
    void TerminateAtFirstCharacter(char);
    void StartAfterFirstCharacter(char);
    void GetCharacterCount(char);
    void RemoveCharacter(char);
    void StrNCmp(RakNet::RakString const&, unsigned long)const;
    void StrICmp(RakNet::RakString const&)const;
    void Printf(void);
    void FPrintf(_IO_FILE *);
    void IPAddressMatch(char const*);
    void ContainsNonprintableExceptSpaces(void)const;
    void IsEmailAddress(void)const;
    void URLEncode(void);
    void URLDecode(void);
    void SplitURI(RakNet::RakString&, RakNet::RakString&, RakNet::RakString&);
    void SQLEscape(void);
    void FormatForPUTOrPost(char const*, char const*, char const*, char const*, char const*);
    void FormatForPOST(char const*, char const*, char const*, char const*);
    void FormatForPUT(char const*, char const*, char const*, char const*);
    void FormatForGET(char const*, char const*);
    void FormatForDELETE(char const*, char const*);
    void MakeFilePath(void);
    void FreeMemory(void);
    void FreeMemoryNoMutex(void);
    void Serialize(RakNet::BitStream *)const;
    void Serialize(char const*, RakNet::BitStream *);
    void SerializeCompressed(RakNet::BitStream *, unsigned char, bool)const;
    void SerializeCompressed(char const*, RakNet::BitStream *, unsigned char, bool);
    void Deserialize(RakNet::BitStream *);
    void Deserialize(char *, RakNet::BitStream *);
    void DeserializeCompressed(RakNet::BitStream *, bool);
    void DeserializeCompressed(char *, RakNet::BitStream *, bool);
    void ToString(long);
    void ToString(unsigned long);
    void Assign(char const*, unsigned long, unsigned long);
    void NonVariadic(char const*);
    void ToInteger(char const*);
    void ToInteger(RakNet::RakString const&);
    void ReadIntFromSubstring(char const*, unsigned long, unsigned long);
    void AppendBytes(char const*, unsigned int);
    void GetSizeToAllocate(unsigned long);
};

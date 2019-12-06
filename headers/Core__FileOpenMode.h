#pragma once

class Core::FileOpenMode {

public:

    void FileOpenMode(void);
    void readExisting(void);
    void writeCreateOrTruncate(void);
    void writeCreateOrAppend(void);
    void binary(void);
    void read(void);
    void write(void);
    void create(void);
    void truncate(void);
    void append(void);
    void wb(void);
    void rb(void);
    void wPlus(void);
    void rbPlus(void);
    void wbPlus(void);
    void FileOpenMode(std::_Ios_Openmode);
    void FileOpenMode(char const*);
    void cMode(void);
    void cModeWide(void);
    bool isRead(void)const;
    bool isWrite(void)const;
    bool isTruncate(void)const;
    bool isCreate(void)const;
    bool isAppend(void)const;
    bool isBinary(void)const;
};

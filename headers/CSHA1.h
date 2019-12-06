#pragma once

class CSHA1 {

public:

    void CSHA1(void);
    void Reset(void);
    void Transform(unsigned int *, unsigned char const*);
    void Update(unsigned char const*, unsigned int);
    void HashFile(char const*);
    void Final(void);
    void ReportHash_a(char *, CSHA1::REPORT_TYPE)const;
    void ReportHash(char *, CSHA1::REPORT_TYPE)const;
    void ReportHashStl(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, CSHA1::REPORT_TYPE)const;
    void GetHash(unsigned char *)const;
    void GetHash(void)const;
    void HMAC(unsigned char *, int, unsigned char *, int, unsigned char *);
};

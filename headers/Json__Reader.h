#pragma once

class Json::Reader {

public:

    void Reader(void);
    void Reader(Json::Features const&);
    void parse(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value &, bool);
    void parse(char const*, char const*, Json::Value &, bool);
    void parse(char const*, unsigned long, Json::Value &, bool);
    void parse(std::istream &, Json::Value &, bool);
    void readValue(void);
    void skipCommentTokens(Json::Reader::Token &);
    void addError(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Reader::Token &, char const*);
    void currentValue(void);
    void readObject(Json::Reader::Token &);
    void readArray(Json::Reader::Token &);
    void decodeNumber(Json::Reader::Token &);
    void decodeString(Json::Reader::Token &);
    void readToken(Json::Reader::Token &);
    void expectToken(Json::Reader::TokenType, Json::Reader::Token &, char const*);
    void skipSpaces(void);
    void getNextChar(void);
    void readString(void);
    void readComment(void);
    void readNumber(void);
    void match(char const*, int);
    void readCStyleComment(void);
    void readCppStyleComment(void);
    void addComment(char const*, char const*, Json::CommentPlacement);
    void decodeString(Json::Reader::Token &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    void recoverFromError(Json::Reader::TokenType);
    void addErrorAndRecover(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Reader::Token &, Json::Reader::TokenType);
    void decodeDouble(Json::Reader::Token &);
    void decodeUnicodeCodePoint(Json::Reader::Token &, char const*&, char const*, unsigned int &);
    void decodeUnicodeEscapeSequence(Json::Reader::Token &, char const*&, char const*, unsigned int &);
    void getLocationLineAndColumn(char const*, int &, int &)const;
};

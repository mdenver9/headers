#pragma once

class PackError {

public:
    virtual ~PackError();

    void PackError(PackErrorType, std::vector<std::string, std::allocator<std::string>> const&);
    void getErrorValue(void)const;
    void serialize(Json::Value &);
    void deserialize(Json::Value const&);
    void getPackErrorType(void)const;
    void PackError(PackError const&);
};

#pragma once

class NullLogger : leveldb::Logger {

public:
    static long NullLogger::instance;

    virtual ~NullLogger();
    virtual void Logv(char const*, __va_list_tag *);

    void NullLogger(void);
};

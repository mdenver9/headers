#pragma once

class CompactionListenerEnv : leveldb::EnvWrapper {

public:
    virtual ~CompactionListenerEnv();
    virtual void Schedule(void (*)(void *), void *);

    void CompactionListenerEnv(leveldb::Env *);
    void setCompactionCallback(std::function<void ()(CompactionStatus)>);
    void notifyStart(void);
    void notifyComplete(void);
};

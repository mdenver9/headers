#pragma once

class SnapshotEnv : leveldb::EnvWrapper {

public:
    virtual ~SnapshotEnv();
    virtual void NewSequentialFile(std::string const&, leveldb::SequentialFile **);
    virtual void NewRandomAccessFile(std::string const&, leveldb::RandomAccessFile **);
    virtual void NewWritableFile(std::string const&, leveldb::WritableFile **);
    virtual void NewAppendableFile(std::string const&, leveldb::WritableFile **);
    virtual void DeleteFile(std::string const&);
    virtual void RenameFile(std::string const&, std::string const&);

    void SnapshotEnv(leveldb::Env *);
    void _newWrappedWritableFile(std::string const&, leveldb::WritableFile **);
    void createSnapshot(Core::Path const&);
    void releaseSnapshot(void);
};

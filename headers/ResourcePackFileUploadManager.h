#pragma once

class ResourcePackFileUploadManager : FileUploadManager {

public:
    virtual ~ResourcePackFileUploadManager();
    virtual void uploadFileToRealmStorage(std::string const&, Core::Path const&, std::string const&);

    void ResourcePackFileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>);
    void ResourcePackFileUploadManager(TaskGroup &, std::shared_ptr<IFileChunkUploader>, std::weak_ptr<FileArchiver>);
    void uploadResourcePack(std::string const&, ResourceLocation const&, bool, bool, PackType, bool);
    void _uploadResourcePackFolder(std::string const&, ResourceLocation const&, Core::Path const&, bool, Json::Value const&);
    void _uploadPackToRealmStorage(std::string const&, Core::Path const&, std::string const&);
};

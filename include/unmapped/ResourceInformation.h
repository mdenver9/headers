#pragma once

#include <string>


class ResourceInformation {

public:
    void ResourceTypeFromString(std::string const&);
    ~ResourceInformation();
    ResourceInformation(std::string const&, SemVersion const&, mce::UUID const&, std::string const&, std::string const&);
//  ResourceInformation(std::string const&, SemVersion const&, mce::UUID const&, ResourceInformation::ResourceType, std::string const&); //TODO: incomplete function definition
    void satisfies(PackIdVersion const&)const;
    ResourceInformation(ResourceInformation const&);
//  std::string StringFromResourceType(ResourceInformation::ResourceType); //TODO: incomplete function definition
};

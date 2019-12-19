#pragma once

class PackSettingsFactory {

public:

    void getPackSettings(PackManifest const&);
    void loadPackSettings(PackIdVersion const&, Json::Value const&);
    void savePackSettings(PackIdVersion const&);
    void PackSettingsFactory(void);
};
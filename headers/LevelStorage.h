#pragma once

class LevelStorage {

public:
    virtual ~LevelStorage();
    virtual void createWriteBatch(void);
    virtual void clonePlayerData(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>);
    virtual void loadData(gsl::basic_string_span<char const, -1l>, std::string &)const;
    virtual void freeCaches(void);
    virtual void corruptLevel(void);

    void save(Actor &);
    void saveData(std::string const&, CompoundTag const&);
    void loadServerPlayerData(Player const&, bool);
    void loadLocalPlayerData(void);
    void loadPlayerData(PlayerStorageIds const&, bool);
    void loadLostPlayerData(Player const&, bool);
    void loadPlayerDataFromTag(gsl::basic_string_span<char const, -1l>);
    void LevelStorage(void);
};

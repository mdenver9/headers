#pragma once

class Minecraft : IEntityRegistryOwner {

public:
    virtual void getEntityRegistry(void);
    virtual Minecraft::~Minecraft();

    Minecraft(IMinecraftApp &, GameCallbacks &, Whitelist &, PermissionsFile *, Core::FilePathManager *, std::chrono::duration<long, std::ratio<1l, 1l>>, IMinecraftEventing &, NetworkHandler &, PacketSender &, unsigned char, Timer &, Timer &, ContentTierManager const&, ServerMetrics *);
    void resetGameSession(void);
    void clearThreadCallbacks(void);
    void updateScreens(void);
    void initAsDedicatedServer(void);
    void init(void);
    void getGameModuleServer(void);
    void initCommands(void);
    bool isInitialized(void)const;
    void startLeaveGame(bool);
    bool isLeaveGameDone(void)const;
    void clientReset(void);
    void setGameModeReal(GameType);
    void update(void);
    void getServerNetworkHandler(void);
    void disconnectClient(NetworkIdentifier const&, std::string const&);
    void tickSimtime(int, int);
    void tickRealtime(int, int);
    void getLevel(void)const;
    void setSimTimePause(bool);
    void setSimTimeScale(float);
    void getSimPaused(void)const;
    bool isModded(void);
    bool isOnlineClient(void);
    void getNetworkStatistics(void)const;
    void hostMultiplayer(std::string const&, std::unique_ptr<Level, std::default_delete<Level>>, Player *, mce::UUID const&, std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback>>, int, bool, bool, std::vector<std::string, std::allocator<std::string>> const&, std::string, ConnectionDefinition const&, std::unordered_map<PackIdVersion, std::string, std::hash<PackIdVersion>, std::equal_to<PackIdVersion>, std::allocator<std::pair<PackIdVersion const, std::string>>> const&, Scheduler &, TextFilteringProcessor *);
    void getClientSubId(void)const;
    void setupServerCommands(std::string const&, std::string const&);
    void usesNonLocalConnection(NetworkIdentifier const&);
    void getNetworkHandler(void);
    void startClientGame(std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback>>);
    void joinWorldInProgress(std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback>>);
    void activateWhitelist(void);
    void getCommands(void);
    bool hasCommands(void);
    void getNetEventCallback(void);
    void getServerLocator(void);
    void getServerLocator(void)const;
    void getNetworkHandler(void)const;
    void getEventing(void)const;
    void onClientCreatedLevel(std::unique_ptr<Level, std::default_delete<Level>>);
    void getTimer(void);
    void getLastTimestep(void);
    void getResourceLoader(void);
    void getStructureManager(void);
};
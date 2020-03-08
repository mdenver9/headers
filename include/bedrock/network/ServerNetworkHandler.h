#pragma once

#include "../../unmapped/MultiplayerServiceObserver"
#include "../../unmapped/NetworkIdentifier"
#include "../actor/ServerPlayer"
#include "../actor/Player"
#include "../../unmapped/Vec3"
#include "../../unmapped/AutomationClient"
#include "../../mce/UUID"
#include "packet/EntityClientPacket"
#include "../../unmapped/XboxLiveUserObserver"
#include "../../unmapped/GameCallbacks"
#include "../level/LevelListener"


class ServerNetworkHandler : NetEventCallback, LevelListener, Social::MultiplayerServiceObserver, Social::XboxLiveUserObserver {

public:
    virtual void onPlayerReady(Player &);
    virtual ServerNetworkHandler::~ServerNetworkHandler();
    virtual void onTick(void);
    virtual void onDisconnect(NetworkIdentifier const&, std::string const&, bool, std::string const&);
    virtual void allowIncomingPacketId(NetworkIdentifier const&, MinecraftPacketIds);
    virtual void onWebsocketRequest(std::string const&, std::string const&, std::function<void ()(void)>);
    virtual void onTransferRequest(NetworkIdentifier const&, std::string const&, int);
    virtual void handle(NetworkIdentifier const&, DisconnectPacket const&);
    virtual void handle(NetworkIdentifier const&, EmotePacket const&);
    virtual void handle(NetworkIdentifier const&, LoginPacket const&);
    virtual void handle(NetworkIdentifier const&, SubClientLoginPacket const&);
    virtual void handle(NetworkIdentifier const&, ClientToServerHandshakePacket const&);
    virtual void handle(NetworkIdentifier const&, ResourcePackClientResponsePacket const&);
    virtual void handle(NetworkIdentifier const&, TextPacket const&);
    virtual void handle(NetworkIdentifier const&, MoveActorAbsolutePacket const&);
    virtual void handle(NetworkIdentifier const&, MovePlayerPacket const&);
    virtual void handle(NetworkIdentifier const&, RiderJumpPacket const&);
    virtual void handle(NetworkIdentifier const&, SetPlayerGameTypePacket const&);
    virtual void handle(NetworkIdentifier const&, SetDefaultGameTypePacket const&);
    virtual void handle(NetworkIdentifier const&, LevelSoundEventPacket const&);
    virtual void handle(NetworkIdentifier const&, LevelSoundEventPacketV1 const&);
    virtual void handle(NetworkIdentifier const&, LevelSoundEventPacketV2 const&);
    virtual void handle(NetworkIdentifier const&, BlockPickRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, ActorPickRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, ActorEventPacket const&);
    virtual void handle(NetworkIdentifier const&, MobEquipmentPacket const&);
    virtual void handle(NetworkIdentifier const&, MobArmorEquipmentPacket const&);
    virtual void handle(NetworkIdentifier const&, InteractPacket const&);
    virtual void handle(NetworkIdentifier const&, PlayerActionPacket const&);
    virtual void handle(NetworkIdentifier const&, ActorFallPacket const&);
    virtual void handle(NetworkIdentifier const&, ItemFrameDropItemPacket const&);
    virtual void handle(NetworkIdentifier const&, ContainerClosePacket const&);
    virtual void handle(NetworkIdentifier const&, PlayerHotbarPacket const&);
    virtual void handle(NetworkIdentifier const&, CraftingEventPacket const&);
    virtual void handle(NetworkIdentifier const&, AdventureSettingsPacket const&);
    virtual void handle(NetworkIdentifier const&, AnimatePacket const&);
    virtual void handle(NetworkIdentifier const&, std::shared_ptr<BlockActorDataPacket>);
    virtual void handle(NetworkIdentifier const&, PlayerAuthInputPacket const&);
    virtual void handle(NetworkIdentifier const&, PlayerInputPacket const&);
    virtual void handle(NetworkIdentifier const&, ClientCacheBlobStatusPacket const&);
    virtual void handle(NetworkIdentifier const&, SetDifficultyPacket const&);
    virtual void handle(NetworkIdentifier const&, SimpleEventPacket const&);
    virtual void handle(NetworkIdentifier const&, SpawnExperienceOrbPacket const&);
    virtual void handle(NetworkIdentifier const&, ClientCacheStatusPacket const&);
    virtual void handle(NetworkIdentifier const&, RequestChunkRadiusPacket const&);
    virtual void handle(NetworkIdentifier const&, MapCreateLockedCopyPacket const&);
    virtual void handle(NetworkIdentifier const&, MapInfoRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, BossEventPacket const&);
    virtual void handle(NetworkIdentifier const&, CommandRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, CommandBlockUpdatePacket const&);
    virtual void handle(NetworkIdentifier const&, CompletedUsingItemPacket const&);
    virtual void handle(NetworkIdentifier const&, ResourcePackChunkRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, StructureBlockUpdatePacket const&);
    virtual void handle(NetworkIdentifier const&, StructureTemplateDataRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, InventoryTransactionPacket const&);
    virtual void handle(NetworkIdentifier const&, PurchaseReceiptPacket const&);
    virtual void handle(NetworkIdentifier const&, ModalFormResponsePacket const&);
    virtual void handle(NetworkIdentifier const&, TickSyncPacket const&);
    virtual void handle(NetworkIdentifier const&, RespawnPacket const&);
    virtual void handle(NetworkIdentifier const&, ShowCreditsPacket const&);
    virtual void handle(NetworkIdentifier const&, PlayerSkinPacket const&);
    virtual void handle(NetworkIdentifier const&, LecternUpdatePacket const&);
    virtual void handle(NetworkIdentifier const&, BookEditPacket const&);
    virtual void handle(NetworkIdentifier const&, NpcRequestPacket const&);
    virtual void handle(NetworkIdentifier const&, PhotoTransferPacket const&);
    virtual void handle(NetworkIdentifier const&, LabTablePacket const&);
    virtual void handle(NetworkIdentifier const&, NetworkStackLatencyPacket const&);
    virtual void handle(NetworkIdentifier const&, SetLocalPlayerAsInitializedPacket const&);
    virtual void handle(NetworkIdentifier const&, MultiplayerSettingsPacket const&);
    virtual void handle(NetworkIdentifier const&, SettingsCommandPacket const&);
    virtual void handle(NetworkIdentifier const&, AnvilDamagePacket const&);
    virtual void onInvalidPlayerJoinedLobby(mce::UUID const&, std::string const&);
    virtual void onXboxUserBlocked(std::string const&);
    virtual void onXboxUserUnblocked(std::string const&);
    virtual void sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int);

    ServerNetworkHandler(GameCallbacks &, Level &, NetworkHandler &, PrivateKeyManager &, ServerLocator &, PacketSender &, Whitelist &, PermissionsFile *, mce::UUID const&, int, bool, std::vector<std::string, std::allocator<std::string>> const&, std::string, int, MinecraftCommands &, IMinecraftApp &, std::unordered_map<PackIdVersion, std::string, std::hash<PackIdVersion>, std::equal_to<PackIdVersion>, std::allocator<std::pair<PackIdVersion const, std::string>>> const&, Scheduler &, TextFilteringProcessor *, ServerMetrics *);
    void disallowIncomingConnections(void);
    void _displayGameMessage(Player const&, std::string const&);
    void disconnectClient(NetworkIdentifier const&, std::string const&, bool);
    void _getServerPlayer(NetworkIdentifier const&, unsigned char);
    void allowIncomingConnections(std::string const&, bool);
    void _getPlayer(NetworkIdentifier const&, unsigned char, ActorRuntimeID const&);
    void _onPlayerLeft(ServerPlayer *, bool);
    void updateServerAnnouncement(void);
    void onSubclientLogoff(NetworkIdentifier const&, unsigned char const&);
    void removeFromBlacklist(mce::UUID const&, std::string const&);
    void _onClientAuthenticated(NetworkIdentifier const&, Certificate const&);
    void _onSubClientAuthenticated(NetworkIdentifier const&, Certificate const&, SubClientLoginPacket const&);
    void _isServerFull(mce::UUID)const;
    void sendSubClientLoginMessageLocal(NetworkIdentifier const&, SubClientConnectionRequest const&, unsigned char);
    void sendLoginMessageLocal(NetworkIdentifier const&, ConnectionRequest const&);
    void onReady_ClientGeneration(Player &, NetworkIdentifier const&);
    void activateWhitelist(void);
    void addToBlacklist(mce::UUID const&, std::string const&);
    void addToBlacklist(mce::UUID const&, std::string const&, std::string const&, Blacklist::Duration const&);
    void setIsTrial(bool);
    void _getPlayer(NetworkIdentifier const&, unsigned char, ActorUniqueID const&);
    void _tryGetEntity(EntityClientPacket const&);
    void _sendLevelData(ServerPlayer &, NetworkIdentifier const&);
    void _sendAdditionalLevelData(ServerPlayer &, NetworkIdentifier const&);
    void _getActiveAndInProgressPlayerCount(mce::UUID)const;
    void setMaxNumPlayers(int);
    void _createNewPlayer(NetworkIdentifier const&, ConnectionRequest const&);
    void _createNewPlayer(NetworkIdentifier const&, SubClientConnectionRequest const&, unsigned char);
    void sendBehaviorTrees(NetworkIdentifier const&, unsigned char);
    void _getOrCreateDimension(Player &);
    void _loadNewPlayer(ServerPlayer &, bool);
    void _setNewPlayerPermissions(ServerPlayer &);
    void setAutomationClient(Automation::AutomationClient *);
    void setTenantId(std::string const&);
    void setShareableIdentityToken(std::string const&);
    void setPermission(Player const&, PlayerPermissionLevel);
    void getMaxNumPlayers(void)const;
};

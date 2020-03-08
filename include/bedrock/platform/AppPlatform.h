#pragma once

#include "../../unmapped/CommonPlatform"
#include "../../core/Path"
#include "../../unmapped/AppPlatformListener"


class AppPlatform : IAppPlatform {

public:
    static long HOME_PATH;
    static long SETTINGS_PATH;
    static long LOG_PATH;
    static long SHADERCACHE_PATH;
    static long mIsInitialized;

    virtual AppPlatform::~AppPlatform();
    virtual void restartRequested(void);
    virtual void getLoggingPath[abi:cxx11](void)const;
    virtual bool isLowMemoryDevice(void)const;
    virtual void initializeScreenDependentResources(void);
    virtual void getHighPerformanceThreadsCount(void)const;
    virtual void getTotalHardwareThreadsCount(void)const;
    virtual void restartApp(bool);
    virtual void _fireAppTerminated(void);
    virtual bool hasFastAlphaTest(void)const;
    virtual bool supportsScripting(void)const;
    virtual bool supportsInPackageRecursion(void)const;
    virtual bool supportsXboxLiveAchievements(void)const;
    virtual void hideSplashScreen(void);
    virtual void getFeedbackHelpLink[abi:cxx11](void)const;
    virtual void getModalErrorMessageProc[abi:cxx11](void);
    virtual void updateLocalization(std::string const&);
    virtual void setSleepEnabled(bool);
    virtual void getInternalPackStoragePath[abi:cxx11](void)const;
    virtual void getSettingsPath[abi:cxx11](void);
    virtual void getPackagedShaderCachePath[abi:cxx11](void);
    virtual void getShaderCachePath[abi:cxx11](void);
    virtual void getUserdataPathForLevels[abi:cxx11](void)const;
    virtual void getCacheStoragePath[abi:cxx11](void);
    virtual void getOnDiskScratchPath[abi:cxx11](void);
    virtual void getOnDiskPackScratchPath[abi:cxx11](void);
    virtual void getLevelInfoCachePath[abi:cxx11](void)const;
    virtual void getCatalogSearchScratchPath[abi:cxx11](void);
    virtual bool hasSeparatedStorageAreasForContentAcquisition(void)const;
    virtual void getOptimalLDBSize(void);
    virtual void showDialog(int);
    virtual void createUserInput(void);
    virtual void getUserInputStatus(void);
    virtual void getUserInput[abi:cxx11](void);
    virtual void getFileAccess(ResourceFileSystem);
    virtual void copyImportFileToTempFolder[abi:cxx11](Core::Path const&);
    virtual void registerFileForCollectionWithCrashDump(Core::Path const&);
    virtual void getScreenWidth(void);
    virtual void getScreenHeight(void);
    virtual void setScreenSize(int, int);
    virtual void setWindowSize(int, int);
    virtual void setWindowText(std::string const&);
    virtual void getPixelsPerMillimeter(void);
    virtual void getOperationMode(void)const;
    virtual void allowContentLogWriteToDisk(void);
    virtual bool supportsLaunchingLegacyVersion(void)const;
    virtual void launchLegacyVersion(void);
    virtual bool canManageLegacyData(void)const;
    virtual bool supportsDayOneExperience(void)const;
    virtual bool hasBroadcastPermission(void);
    virtual bool hasAppInstalled(ExternalApp)const;
    virtual void navigateToStoreForApp(ExternalApp)const;
    virtual void launchApp(ExternalApp)const;
    virtual bool canSupportApp(ExternalApp)const;
    virtual void startBroadcast(void);
    virtual bool isContentAutoUpdateAllowed(void)const;
    virtual void getMaxSimultaneousDownloads(void)const;
    virtual void getMaxSimultaneousServiceRequests(void)const;
    virtual bool isDownloadAndImportBlocking(void)const;
    virtual bool isDownloadBuffered(void)const;
    virtual bool supportsAutoSaveOnDBCompaction(void)const;
    virtual void updateTextBoxText(std::string const&);
    virtual bool isKeyboardVisible(void);
    virtual bool supportsVibration(void);
    virtual void vibrate(int);
    virtual void getAssetFileFullPath[abi:cxx11](Core::Path const&);
    virtual void readAssetFile[abi:cxx11](Core::Path const&);
    virtual void listAssetFilesIn(Core::Path const&, std::string const&)const;
    virtual bool supportsClientUpdate(void)const;
    virtual void getClientUpdateUrl[abi:cxx11](void)const;
    virtual void checkLicense(void);
    virtual bool hasBuyButtonWhenInvalidLicense(void);
    virtual bool isNetworkAvailable(void);
    virtual bool isNetworkEnabled(bool);
    virtual void setNetworkAllowed(bool);
    virtual bool isNetworkAllowed(void);
    virtual void multiplayerRequiresPremiumAccess(void)const;
    virtual void multiplayerRequiresUGCEnabled(void)const;
    virtual bool isCrossPlatformToggleVisible(void)const;
    virtual bool isTelemetryAllowed(void);
    virtual bool isTrialWorldsTransferToFullGameAllowed(void)const;
    virtual void buyGame(void);
    virtual void finish(void);
    virtual bool canLaunchUri(std::string const&);
    virtual void launchUri(std::string const&);
    virtual void launchSettings(void);
    virtual bool isRatingsPromptSupported(void)const;
    virtual void launchRatingsPrompt(void);
    virtual void useXboxControlHelpers(void)const;
    virtual void getPlatformType(void)const;
    virtual bool isCentennial(void)const;
    virtual void getPackageFamilyName[abi:cxx11](void)const;
    virtual void getBuildPlatform(void)const;
    virtual void setARVRPlatform(ARVRPlatform);
    virtual void getARVRPlatform(void)const;
    virtual void getNumberOfParticleFramesToInterpolate(void)const;
    virtual void setVRControllerType(VRControllerType);
    virtual void getVRControllerType(void)const;
    virtual bool hasIDEProfiler(void);
    virtual void getPlatformStringVar[abi:cxx11](int);
    virtual void getMaximumUsedMemory(void);
    virtual void getMaxSimRadiusInChunks(void)const;
    virtual void getBroadcastAddresses[abi:cxx11](void);
    virtual void getIPAddresses[abi:cxx11](void);
    virtual void useAppPlatformForTelemetryIPAddress(void);
    virtual void getModelName[abi:cxx11](void);
    virtual bool usesHDRBrightness(void)const;
    virtual void setFullscreenMode(FullscreenMode);
    virtual bool isNetworkThrottled(void);
    virtual bool isLANAllowed(void)const;
    virtual bool doesLANRequireMultiplayerRestrictions(void)const;
    virtual void trackPurchaseEvent(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
    virtual void sendBrazeEvent(std::string const&);
    virtual void sendBrazeEventWithProperty(std::string const&, std::string const&, int);
    virtual void sendBrazeEventWithStringProperty(std::string const&, std::string const&, std::string const&);
    virtual void sendBrazeToastClick(void);
    virtual void sendBrazeDialogButtonClick(int);
    virtual void collectGraphicsHardwareDetails(void);
    virtual void getEdition[abi:cxx11](void)const;
    virtual void getOSVersion(void)const;
    virtual bool isBrazeEnabled(void)const;
    virtual bool isFireTV(void)const;
    virtual bool isWin10Arm(void)const;
    virtual void setThreadsFrozen(bool);
    virtual void areThreadsFrozen(void)const;
    virtual void getDefaultSafeZoneScaleX(void)const;
    virtual void getDefaultSafeZoneScaleY(void)const;
    virtual void getDefaultScreenPositionX(void)const;
    virtual void getDefaultScreenPositionY(void)const;
    virtual bool isQuitCapable(void)const;
    virtual void requireControllerAtStartup(void)const;
    virtual void notifyControllerConnectionStateChange(void)const;
    virtual void platformRequiresControllerApplet(void)const;
    virtual void getDefaultInputMode(void)const;
    virtual bool supportsTextToSpeech(void)const;
    virtual void getSecureStorage(void);
    virtual void getSecureStorageKey(std::string const&);
    virtual void setSecureStorageKey(std::string const&, SecureStorageKey const&);
    virtual void reloadRenderResourcesOnResume(void)const;
    virtual void shouldPauseDownloadsWhenEnterGame(void)const;
    virtual void compareAppReceiptToLocalReceipt(std::string const&);
    virtual void getThirdPartyPackUUID(void)const;
    virtual bool alwaysUseZippedPacksForDlc(void)const;
    virtual bool allowsResourcePackDevelopment(void)const;
    virtual bool supportsLegacySinglePremiumCacheDirectory(void)const;
    virtual bool supportsWorldShare(void)const;
    virtual bool hasJournalingFilesystem(void)const;
    virtual bool isAutoCompactionEnabled(void)const;
    virtual void getLevelSaveInterval(void)const;
    virtual void getOptionsSaveInterval(void)const;
    virtual bool hasPlatformSpecificInvites(void)const;
    virtual void usePlatformProfilePicturesOnly(void)const;
    virtual bool requiresXboxLiveSigninToPlay(void)const;
    virtual bool requiresLiveGoldForMultiplayer(void)const;
    virtual void shouldRegisterForXboxLiveNotifications(void)const;
    virtual bool isRealmsEnabled(void)const;
    virtual void minimizeBackgroundDownloads(void)const;
    virtual bool requiresAutoSaveIconExplanationPopup(void)const;
    virtual void getExtraLevelSaveDataIconParams(std::string const&)const;
    virtual bool requiresPatchNoticePopup(void)const;
    virtual void getMultiplayerServiceListToRegister(void)const;
    virtual void getBroadcastingMultiplayerServiceIds(bool, bool)const;
    virtual void maxFileDataRequestConcurrency(void)const;
    virtual void goToExternalConsumablesStoreListing(void)const;
    virtual void getStoreNetworkFailureTimeout(void)const;
    virtual void createLoggingStorageArea(Core::FileAccessType, Core::Path const&);
    virtual void handlePlatformSpecificSPIErrors(std::string const&);
    virtual void useNativeStoreForRealmsPurchase(void);
    virtual void importAsFlatFile(void)const;
    virtual bool isWebviewSupported(void)const;
    virtual void createWebview(Webview::PlatformArguments &&)const;
    virtual void createXboxLiveSignInHandler(void)const;
    virtual void getPlatformTTSExists(void)const;
    virtual void getPlatformTTSEnabled(void)const;
    virtual void getRenderSurfaceParameters(void)const;
    virtual void shouldRemoveGraphicsDeviceOnAppTermination(void)const;
    virtual bool isJoinableViaExternalServers(void)const;
    virtual void onPrimaryUserNetworkReady(void);
    virtual bool requiresNetworkOutageMessaging(void)const;
    virtual bool usesAsyncOptionSaving(void)const;
    virtual void showPlatformStoreIcon(bool);
    virtual void getPlatformDpi(void)const;
    virtual void getPlatformUIScalingRules(void)const;
    virtual void _onInitialize(void);
    virtual void _onTeardown(void);

    AppPlatform(void);
    void initialize(void);
    void _initializeLoadProfiler(void);
    void calculateIfLowMemoryDevice(void);
    void _initLastDeviceSessionId(void);
    void teardown(void);
    void setCommonPlatformShim(BedrockEngine::CommonPlatform *);
    void getDpi(void)const;
    void setDpi(int);
    void getUIScalingRules(void)const;
    void setUIScalingRules(UIScalingRules);
    void getPlatformRuntimeInformation(void)const;
    void accessPlatformRuntimeInformation_Shim(void);
    void getPlatformBuildInformation(void)const;
    void accessPlatformBuildInformation_Shim(void);
    void getAppLifecycleContext(void);
    void getFocusState(void);
    void createUserInput(int);
    void StringizeUIScalingRules(UIScalingRules);
    void addListener(AppPlatformListener *, float);
    void notifyTerminate(void);
    bool isTerminating(void)const;
    void removeListener(AppPlatformListener *);
    void addNetworkChangeObserver(NetworkChangeObserver &);
    void getDefaultUIProfile(void)const;
    void setMockMultiplayerActive(bool);
    bool isInitialized(void);
    bool isEduMode(void)const;
};

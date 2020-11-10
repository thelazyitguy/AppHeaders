//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTAppStartupReasonProtocol-Protocol.h>
#import <Module_Framework/YTOfflineGuideUserDefaultsProtocol-Protocol.h>
#import <Module_Framework/YTOfflineSettingsUserDefaultsProtocol-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSHashTable, NSString, NSUserDefaults, YTAppStateInfo, YTEditTOKTextOverlayModel, YTUserDefaultsKeys;
@protocol YTUserDefaultsKeysProvider, YTUserIDProviderProtocol;

@interface YTUserDefaults : NSObject <YTAppStartupReasonProtocol, YTOfflineGuideUserDefaultsProtocol, YTOfflineSettingsUserDefaultsProtocol>
{
    NSHashTable *_observers;
    id <YTUserIDProviderProtocol> _userIDProvider;
    NSString *_prefix;
    NSUserDefaults *_defaults;
    NSUserDefaults *_sharedDefaults;
    long long _sharedKeysVersionNumber;
    YTUserDefaultsKeys<YTUserDefaultsKeysProvider> *_keysProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTUserDefaultsKeys<YTUserDefaultsKeysProvider> *keysProvider; // @synthesize keysProvider=_keysProvider;
- (_Bool)isUserDictionaryFullKey:(id)arg1;
- (void)migrateKey:(id)arg1 from:(id)arg2 to:(id)arg3;
- (id)defaultsForKey:(id)arg1;
- (id)prefixedKeyForKey:(id)arg1;
- (id)objectInUserDefaults:(id)arg1 forKey:(id)arg2;
- (void)removeObjectInUserDefaults:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 inUserDefaults:(id)arg2 forKey:(id)arg3;
- (_Bool)isUserSpecificKey:(id)arg1;
- (void)notifyValueDidChangeForKey:(id)arg1;
- (id)userSettingsDictionaryInDefaults:(id)arg1;
- (id)sharedKeys;
- (void)migrateKeysFromSharedContainerToStandardContainer:(id)arg1;
- (void)migrateKeysFromStandardContainerToSharedContainer:(id)arg1;
- (id)prefix;
- (id)standardUserSettingsDictionary;
- (id)sharedUserSettingsDictionary;
- (id)keyForCurrentUserID;
- (id)uniqueIDForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (void)setLonglong:(long long)arg1 forKey:(id)arg2;
- (long long)longlongForKey:(id)arg1;
- (void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;
- (unsigned long long)unsignedIntegerForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setSharedKeysVersionNumber:(long long)arg1;
- (long long)sharedKeysVersionNumber;
- (void)purgeKey:(id)arg1;
- (void)removeUserDefaultsObserver:(id)arg1;
- (void)addUserDefaultsObserver:(id)arg1;
- (id)initWithKeysProvider:(id)arg1 userIDProvider:(id)arg2 prefix:(id)arg3 sharedGroupName:(id)arg4 defaults:(id)arg5 sharedDefaults:(id)arg6;
- (id)initWithKeysProvider:(id)arg1 userIDProvider:(id)arg2 prefix:(id)arg3 sharedGroupName:(id)arg4;
@property(copy, nonatomic) NSDate *cellSwipeHintLastShownDate;
@property(nonatomic) double lastDismissPreviewSelectTooltipTimeInterval;
@property(readonly, nonatomic) _Bool hasDismissedPreviewSelectTooltip;
- (void)setCurrentGuestSessionID:(id)arg1;
- (id)legacyLastSelectedIdentity;
- (id)currentGuestSessionID;
- (void)setLastUnicornPasswordUpdateTimestamps:(id)arg1;
- (id)lastUnicornPasswordUpdateTimestamps;
- (void)setChildVisitorData:(id)arg1;
- (id)childVisitorData;
- (_Bool)isIncognitoActive;
- (void)setIsVisitorDataBugFixed:(_Bool)arg1;
- (_Bool)isVisitorDataBugFixed;
- (void)setIncognitoVisitorData:(id)arg1;
- (id)incognitoVisitorData;
- (void)setVisitorData:(id)arg1;
- (id)visitorData;
- (void)setHasDismissedGoIncognitoConfirmDialog:(_Bool)arg1;
- (_Bool)hasDismissedGoIncognitoConfirmDialog;
- (void)setShouldSuppressFrictionlessSignIn:(_Bool)arg1;
- (_Bool)shouldSuppressFrictionlessSignIn;
- (void)setLastActiveIncognitoTime:(id)arg1;
- (id)lastActiveIncognitoTime;
- (void)setSerializedPreDelegatedChildIdentity:(id)arg1;
- (id)serializedPreDelegatedChildIdentity;
- (void)setSerializedPreIncognitoIdentity:(id)arg1;
- (id)serializedPreIncognitoIdentity;
- (void)setSerializedLastSelectedIdentity:(id)arg1;
- (id)serializedLastSelectedIdentity;
- (void)setCachedUserImage:(id)arg1;
- (id)cachedUserImage;
- (void)setAllowGaialessHandleIAP:(_Bool)arg1;
- (_Bool)allowGaialessHandleIAP;
- (id)transactionLockerData;
- (void)setTransactionLockerData:(id)arg1;
- (id)clientInfoForKey:(id)arg1;
- (void)setClientInfo:(id)arg1 forKey:(id)arg2;
- (id)offerInfoForKey:(id)arg1;
- (void)setOfferInfo:(id)arg1 forKey:(id)arg2;
- (void)setLastAsyncActivityRenderer:(id)arg1;
- (id)lastAsyncActivityRenderer;
- (void)setLastClientLocationContext:(id)arg1;
- (id)lastClientLocationContext;
- (void)setLastOfferSelectionDate:(id)arg1;
- (id)lastOfferSelectionDate;
- (void)setLastOfferParams:(id)arg1;
- (id)lastOfferParams;
- (void)setLastProductID:(id)arg1;
- (id)lastProductID;
- (void)setLastObservedAppVersion:(id)arg1;
- (id)lastObservedAppVersion;
@property(nonatomic) long long encourageLandscapeUsageCount;
@property(nonatomic) _Bool creatorComplianceViewIsDisabled;
- (_Bool)areRecentlyUsedStickersVersionOutdated;
- (void)cleanUpRecentlyUsedStickers;
@property(retain, nonatomic) NSString *uploadDisclaimerBannerSettings;
@property(nonatomic) _Bool hasSeenMusicDisclaimer;
- (id)tutorialPolicyForTutorialID:(id)arg1;
- (void)setTutorialPolicy:(id)arg1 forTutorialID:(id)arg2;
@property(retain, nonatomic) NSDate *videoLinkStickerUsedDate;
@property(nonatomic) _Bool hasShownHintForMentionsInTextSticker;
@property(retain, nonatomic) YTEditTOKTextOverlayModel *lastUsedTextEditorOverlayModel;
@property(copy, nonatomic) NSArray *recentlyUsedStickers;
@property(nonatomic) long long lastCameraPosition;
@property(nonatomic) _Bool hasShownUploadAccountHint;
@property(nonatomic) int defaultVideoTargetedAudience;
@property(nonatomic) int defaultVideoPrivacyStatus;
- (id)hasBeenViewedKeyForEffectBaseName:(id)arg1;
- (id)selectedCountKeyForEffectBaseName:(id)arg1;
- (void)markSwazzleEffectViewed:(id)arg1;
- (_Bool)hasBeenViewedStatusForSwazzleEffect:(id)arg1;
- (void)markSwazzleEffectSelected:(id)arg1;
- (long long)selectedCountForSwazzleEffect:(id)arg1;
- (void)savePushNotificationDialogDecision:(id)arg1;
- (id)pushNotificationDialogData;
- (void)saveLastNotificationsEnabledStatus:(id)arg1;
- (id)lastNotificationsEnabledStatus;
- (void)saveLastNotificationsEnabledStatusChangeTime:(id)arg1;
- (id)lastNotificationsEnabledStatusChangeTime;
- (void)setLastSetNotificationRegistrationTime:(id)arg1;
- (id)lastSetNotificationRegistrationTime;
- (void)saveLastSendDeviceContextTime:(id)arg1;
- (id)lastSendDeviceContextTime;
- (void)savePushNotificationOSDialogShown;
- (_Bool)invalidationDebugToastSelection;
- (void)saveInvalidationDebugToastSelection:(_Bool)arg1;
- (_Bool)wasPushNotificationOSDialogShown;
@property(nonatomic, getter=isOfflineImageMigrationComplete) _Bool offlineImageMigrationComplete;
@property(nonatomic, getter=isOfflinePlaylistStoreMigrationComplete) _Bool offlinePlaylistStoreMigrationComplete;
@property(nonatomic, getter=isOfflineVideoStoreMigrationComplete) _Bool offlineVideoStoreMigrationComplete;
- (void)setOfflineHamplayerDownloadsDisabled:(_Bool)arg1;
- (_Bool)offlineHamplayerDownloadsDisabled;
- (id)lastEligibleIDsForRemoval;
- (void)setLastEligibleIDsForRemoval:(id)arg1;
- (void)setOfflineBackupRepairDate:(id)arg1;
- (id)offlineBackupRepairDate;
- (void)setOfflineStateGELHasVideos:(_Bool)arg1;
- (_Bool)offlineStateGELHasVideos;
- (void)setOfflineStateGELDate:(id)arg1;
- (id)offlineStateGELDate;
- (void)setOfflineEntitlementRefreshDate:(id)arg1;
- (id)offlineEntitlementRefreshDate;
- (void)setOfflineRefreshInterval:(double)arg1;
- (double)offlineRefreshInterval;
- (void)setOfflineRefreshDate:(id)arg1;
- (id)offlineRefreshDate;
- (void)setMaximumOfflineVideoQuality:(int)arg1;
- (int)maximumOfflineVideoQuality;
- (void)setMaximumOfflineAudioQuality:(int)arg1;
- (int)maximumOfflineAudioQuality;
- (void)setOfflineImageRepairDate:(id)arg1;
- (id)offlineImageRepairDate;
- (void)setOfflineUserRemovalCheckDate:(id)arg1;
- (id)offlineUserRemovalCheckDate;
- (void)setOfflinePlaylistSyncDate:(id)arg1;
- (id)offlinePlaylistSyncDate;
- (void)setOfflinePlaylistSyncFast:(_Bool)arg1;
- (_Bool)offlinePlaylistSyncFast;
- (void)setEnableOfflinePlaylistAutoSync:(_Bool)arg1;
- (_Bool)enableOfflinePlaylistAutoSync;
- (void)setOnlyDownloadOverWiFi:(_Bool)arg1;
- (_Bool)onlyDownloadOverWiFi;
- (void)setOfflineAdFrequencyCapsIgnored:(_Bool)arg1;
- (_Bool)areOfflineAdFrequencyCapsIgnored;
- (void)setOfflineRefreshFast:(_Bool)arg1;
- (_Bool)isOfflineRefreshFast;
- (void)setDetourTraceID:(id)arg1;
- (id)detourTraceID;
- (void)setForceAdParameters:(id)arg1;
- (id)forceAdParameters;
- (void)setForcedViralCampaignID:(id)arg1;
- (id)forcedViralCampaignID;
- (void)setForcedPyvAdGroupID:(id)arg1;
- (id)forcedPyvAdGroupID;
- (void)setForcedHomepageAdType:(id)arg1;
- (id)forcedHomepageAdType;
- (void)setForcedViralAdResponseURL:(id)arg1;
- (id)forcedViralAdResponseURL;
- (void)setForcedHomepageAdURL:(id)arg1;
- (id)forcedHomepageAdURL;
- (void)setDebugMastheadKeyword:(id)arg1;
- (id)debugMastheadKeyword;
@property(retain, nonatomic) NSDictionary *pivotBarLastTapDateMap;
- (void)setDisableFrequencyCap:(_Bool)arg1;
- (_Bool)isDisableFrequencyCap;
- (void)didShowNotificationForKey:(id)arg1;
- (_Bool)shouldShowNotificationForKey:(id)arg1;
- (void)didShowBackgroundNotification;
- (_Bool)shouldShowBackgroundNotification;
- (void)setRecurrenceThrottleDisabled:(_Bool)arg1;
- (_Bool)recurrenceThrottleDisabled;
@property(nonatomic) _Bool hasSeenVideoZoomUserEdu;
- (void)setAdultContentConfirmed:(_Bool)arg1;
- (_Bool)isAdultContentConfirmed;
- (id)lastSpeedyGPromoDisplayDate;
- (void)setLastSpeedyGPromoDisplayDate:(id)arg1;
- (id)ml_manualQualitySelectionEventDate;
- (int)ml_manualQualitySelectionVideoQualitySetting;
- (int)ml_manualQualitySelectionPrecedingResolution;
- (int)ml_manualQualitySelectionChosenResolution;
- (void)ml_setManualQualitySelectionWithChosenResolution:(int)arg1 precedingResolution:(int)arg2 videoQualitySetting:(int)arg3 eventDate:(id)arg4;
- (id)lastPersistentVideoQualitySelectionDate;
- (void)setPersistentVideoQualityWifi:(int)arg1;
- (int)persistentVideoQualityWifi;
- (void)setPersistentVideoQualityMobile:(int)arg1;
- (int)persistentVideoQualityMobile;
- (void)setDisableHDOnCellular:(_Bool)arg1;
- (_Bool)disableHDOnCellular;
- (void)setInAppReviewEligibleDate:(id)arg1;
- (id)inAppReviewEligibleDate;
- (void)setForcedPromoInterval:(id)arg1;
- (id)forcedPromoInterval;
- (void)setLastPromoDisplayedTime:(id)arg1;
- (id)lastPromoDisplayedTime;
@property(nonatomic) unsigned long long crashStallMinidumpCount;
@property(retain, nonatomic) NSString *crashRestoreCurrentUserID;
@property(retain, nonatomic) NSDate *crashRestoreDateLastOpenedVideo;
@property(nonatomic) unsigned long long crashRestoreIndex;
@property(retain, nonatomic) NSString *crashRestoreStartTime;
@property(retain, nonatomic) NSString *crashRestorePlaylistID;
@property(retain, nonatomic) NSString *crashRestoreVideoID;
@property(nonatomic) _Bool shouldShowAppStartupReasonDialog;
@property(retain, nonatomic) NSDate *dateCrashCountControllerLastSent;
@property(retain, nonatomic) NSDate *dateCrashCountControllerLastRun;
@property(nonatomic) _Bool hasDisplayedCrashReportsPrompt;
@property(nonatomic) _Bool shouldSendCrashReports;
@property(retain, nonatomic) YTAppStateInfo *appStateInfo;
@property(retain, nonatomic) NSDate *systemBootTime;
@property(copy, nonatomic) NSDictionary *delayedEventMetricsParameters;
@property(nonatomic) _Bool crashDetectionFlag;
@property(nonatomic) _Bool suppressUploadOverCellularPrompt;
@property(nonatomic) _Bool onlyUploadOverWiFi;
@property(copy, nonatomic) NSDictionary *clientEventIdCounters;
@property(copy, nonatomic) NSDictionary *serializedEventIds;
@property(retain, nonatomic) NSData *attributionData;
@property(nonatomic) double appSettingsSnapshotLastCaptureTimestamp;
@property(copy, nonatomic) NSDictionary *periodicLoggingParameters;
@property(copy, nonatomic) NSDictionary *retentionTrackingParameters;
- (void)setApiaryDeviceCrypto:(id)arg1;
- (id)apiaryDeviceCrypto;
- (id)hotConfigStoreDate;
- (id)hotConfigGroupHash;
- (void)setHotConfigGroupHash:(id)arg1;
- (id)hotConfigGroupData;
- (void)setHotConfigGroupData:(id)arg1;
- (id)coldConfigClientVersion;
- (id)coldConfigGroupHash;
- (void)setColdConfigGroupHash:(id)arg1;
- (id)coldConfigGroupData;
- (void)setColdConfigGroupData:(id)arg1;
- (void)setOfflineSettingsItems:(id)arg1;
- (id)offlineSettingsItems;
- (void)setOfflineGuideItems:(id)arg1;
- (id)offlineGuideItems;
- (id)installationID;
- (void)setBrowseDebug:(_Bool)arg1;
- (_Bool)browseDebug;
- (void)setLastSeenActivityTabIdentifier:(id)arg1;
- (id)lastSeenActivityTabIdentifier;
- (void)setDebugCompleteServerURL:(id)arg1;
- (id)debugCompleteServerURL;
- (void)setConfigWorkerLastRequestAppVersion:(id)arg1;
- (id)configWorkerLastRequestAppVersion;
- (void)setConfigWorkerLastRequestDate:(id)arg1;
- (id)configWorkerLastRequestDate;
- (void)setCustomExperimentsToken:(id)arg1;
- (id)customExperimentsToken;
- (void)setOSVersionOverride:(id)arg1;
- (id)OSVersionOverride;
- (void)setVersionOverride:(id)arg1;
- (id)versionOverride;
- (void)setLanguageOverride:(id)arg1;
- (id)languageOverride;
- (void)setInternalGeoOverride:(id)arg1;
- (id)internalGeoOverride;
- (void)setInteractionLoggingDebugEnabled:(_Bool)arg1;
- (_Bool)isInteractionLoggingDebugEnabled;
- (void)setPPGHost:(id)arg1;
- (id)PPGHost;
- (void)setServerEnvironment:(long long)arg1;
- (long long)serverEnvironment;
- (id)objectsForKeyPrefix:(id)arg1 removePrefix:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


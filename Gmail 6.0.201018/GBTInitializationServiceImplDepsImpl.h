//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTInitializationServiceImplDeps-Protocol.h"

@class GOOAccountScopedProvider, GOOProvider, NSString;
@protocol GBTAccountsService, GBTApplicationSettingsService, GBTAuthzenService, GBTBigtopSyncClientAPIProvider, GBTChronosService, GBTClearcutApplicationService, GBTDataExfiltrationProtectionService, GBTFileLogWriterService, GBTGrowthKitService, GBTNotificationService, GBTShortcutService, GBTStartupMetricsService, GBTSyncClientProtectedService, GBTUrlService, HUBAppRouterService, HUBAppStateManager, HUBSiriShortcutsFeatureService;

@interface GBTInitializationServiceImplDepsImpl : NSObject <GBTInitializationServiceImplDeps>
{
    GOOProvider *_accountsServiceProvider;
    GOOProvider *_applicationSettingsServiceProvider;
    GOOProvider *_appRouterServiceProvider;
    GOOProvider *_appStateManagerProvider;
    GOOAccountScopedProvider *_attachmentCacheServiceProvider;
    GOOProvider *_authzenServiceProvider;
    GOOProvider *_bigtopSyncClientAPIProviderProvider;
    GOOProvider *_chronosServiceProvider;
    GOOProvider *_clearcutApplicationServiceProvider;
    GOOProvider *_dataExfiltrationProtectionServiceProvider;
    GOOProvider *_fileLogWriterServiceProvider;
    GOOProvider *_growthKitServiceProvider;
    GOOProvider *_notificationServiceProvider;
    GOOAccountScopedProvider *_offlineSearchServiceProvider;
    GOOAccountScopedProvider *_onboardingServiceProvider;
    GOOProvider *_shortcutServiceProvider;
    GOOProvider *_siriShortcutsFeatureServiceProvider;
    GOOProvider *_startupMetricsServiceProvider;
    GOOProvider *_syncClientProtectedServiceProvider;
    GOOProvider *_urlServiceProvider;
    GOOAccountScopedProvider *_visualElementLoggerServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOAccountScopedProvider *visualElementLoggerServiceProvider; // @synthesize visualElementLoggerServiceProvider=_visualElementLoggerServiceProvider;
@property(readonly, nonatomic) GOOProvider *urlServiceProvider; // @synthesize urlServiceProvider=_urlServiceProvider;
@property(readonly, nonatomic) GOOProvider *syncClientProtectedServiceProvider; // @synthesize syncClientProtectedServiceProvider=_syncClientProtectedServiceProvider;
@property(readonly, nonatomic) GOOProvider *startupMetricsServiceProvider; // @synthesize startupMetricsServiceProvider=_startupMetricsServiceProvider;
@property(readonly, nonatomic) GOOProvider *siriShortcutsFeatureServiceProvider; // @synthesize siriShortcutsFeatureServiceProvider=_siriShortcutsFeatureServiceProvider;
@property(readonly, nonatomic) GOOProvider *shortcutServiceProvider; // @synthesize shortcutServiceProvider=_shortcutServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *onboardingServiceProvider; // @synthesize onboardingServiceProvider=_onboardingServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *offlineSearchServiceProvider; // @synthesize offlineSearchServiceProvider=_offlineSearchServiceProvider;
@property(readonly, nonatomic) GOOProvider *notificationServiceProvider; // @synthesize notificationServiceProvider=_notificationServiceProvider;
@property(readonly, nonatomic) GOOProvider *growthKitServiceProvider; // @synthesize growthKitServiceProvider=_growthKitServiceProvider;
@property(readonly, nonatomic) GOOProvider *fileLogWriterServiceProvider; // @synthesize fileLogWriterServiceProvider=_fileLogWriterServiceProvider;
@property(readonly, nonatomic) GOOProvider *dataExfiltrationProtectionServiceProvider; // @synthesize dataExfiltrationProtectionServiceProvider=_dataExfiltrationProtectionServiceProvider;
@property(readonly, nonatomic) GOOProvider *clearcutApplicationServiceProvider; // @synthesize clearcutApplicationServiceProvider=_clearcutApplicationServiceProvider;
@property(readonly, nonatomic) GOOProvider *chronosServiceProvider; // @synthesize chronosServiceProvider=_chronosServiceProvider;
@property(readonly, nonatomic) GOOProvider *bigtopSyncClientAPIProviderProvider; // @synthesize bigtopSyncClientAPIProviderProvider=_bigtopSyncClientAPIProviderProvider;
@property(readonly, nonatomic) GOOProvider *authzenServiceProvider; // @synthesize authzenServiceProvider=_authzenServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *attachmentCacheServiceProvider; // @synthesize attachmentCacheServiceProvider=_attachmentCacheServiceProvider;
@property(readonly, nonatomic) GOOProvider *appStateManagerProvider; // @synthesize appStateManagerProvider=_appStateManagerProvider;
@property(readonly, nonatomic) GOOProvider *appRouterServiceProvider; // @synthesize appRouterServiceProvider=_appRouterServiceProvider;
@property(readonly, nonatomic) GOOProvider *applicationSettingsServiceProvider; // @synthesize applicationSettingsServiceProvider=_applicationSettingsServiceProvider;
@property(readonly, nonatomic) GOOProvider *accountsServiceProvider; // @synthesize accountsServiceProvider=_accountsServiceProvider;
- (id)visualElementLoggerServiceWithAccountID:(id)arg1;
@property(readonly, nonatomic) id <GBTUrlService> urlService;
@property(readonly, nonatomic) id <GBTSyncClientProtectedService> syncClientProtectedService;
@property(readonly, nonatomic) id <GBTStartupMetricsService> startupMetricsService;
@property(readonly, nonatomic) id <HUBSiriShortcutsFeatureService> siriShortcutsFeatureService;
@property(readonly, nonatomic) id <GBTShortcutService> shortcutService;
- (id)onboardingServiceWithAccountID:(id)arg1;
- (id)offlineSearchServiceWithAccountID:(id)arg1;
@property(readonly, nonatomic) id <GBTNotificationService> notificationService;
@property(readonly, nonatomic) id <GBTGrowthKitService> growthKitService;
@property(readonly, nonatomic) id <GBTFileLogWriterService> fileLogWriterService;
@property(readonly, nonatomic) id <GBTDataExfiltrationProtectionService> dataExfiltrationProtectionService;
@property(readonly, nonatomic) id <GBTClearcutApplicationService> clearcutApplicationService;
@property(readonly, nonatomic) id <GBTChronosService> chronosService;
@property(readonly, nonatomic) id <GBTBigtopSyncClientAPIProvider> bigtopSyncClientAPIProvider;
@property(readonly, nonatomic) id <GBTAuthzenService> authzenService;
- (id)attachmentCacheServiceWithAccountID:(id)arg1;
@property(readonly, nonatomic) id <HUBAppStateManager> appStateManager;
@property(readonly, nonatomic) id <HUBAppRouterService> appRouterService;
@property(readonly, nonatomic) id <GBTApplicationSettingsService> applicationSettingsService;
@property(readonly, nonatomic) id <GBTAccountsService> accountsService;
- (id)initWithAccountsServiceProvider:(id)arg1 applicationSettingsServiceProvider:(id)arg2 appRouterServiceProvider:(id)arg3 appStateManagerProvider:(id)arg4 attachmentCacheServiceProvider:(id)arg5 authzenServiceProvider:(id)arg6 bigtopSyncClientAPIProviderProvider:(id)arg7 chronosServiceProvider:(id)arg8 clearcutApplicationServiceProvider:(id)arg9 dataExfiltrationProtectionServiceProvider:(id)arg10 fileLogWriterServiceProvider:(id)arg11 growthKitServiceProvider:(id)arg12 notificationServiceProvider:(id)arg13 offlineSearchServiceProvider:(id)arg14 onboardingServiceProvider:(id)arg15 shortcutServiceProvider:(id)arg16 siriShortcutsFeatureServiceProvider:(id)arg17 startupMetricsServiceProvider:(id)arg18 syncClientProtectedServiceProvider:(id)arg19 urlServiceProvider:(id)arg20 visualElementLoggerServiceProvider:(id)arg21;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

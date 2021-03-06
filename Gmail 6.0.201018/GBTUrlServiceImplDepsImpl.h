//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTUrlServiceImplDeps-Protocol.h"

@class GOOAccountScopedProvider, GOOProvider, NSString;
@protocol GBTAccountsService, GBTBigtopSyncClientAPIProvider, GBTGrowthKitService, GBTInitializationService, GBTSyncClientService, GBTSyncHintsService, HUBPerformanceMonitoringService, SSOService;

@interface GBTUrlServiceImplDepsImpl : NSObject <GBTUrlServiceImplDeps>
{
    GOOAccountScopedProvider *_accountSettingsServiceProvider;
    GOOProvider *_accountsServiceProvider;
    GOOProvider *_bigtopSyncClientAPIProviderProvider;
    GOOAccountScopedProvider *_eventLoggingServiceProvider;
    GOOProvider *_growthKitServiceProvider;
    GOOProvider *_initializationServiceProvider;
    GOOProvider *_performanceMonitoringServiceProvider;
    GOOProvider *_SSOServiceProvider;
    GOOProvider *_syncClientServiceProvider;
    GOOProvider *_syncHintsServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOProvider *syncHintsServiceProvider; // @synthesize syncHintsServiceProvider=_syncHintsServiceProvider;
@property(readonly, nonatomic) GOOProvider *syncClientServiceProvider; // @synthesize syncClientServiceProvider=_syncClientServiceProvider;
@property(readonly, nonatomic) GOOProvider *SSOServiceProvider; // @synthesize SSOServiceProvider=_SSOServiceProvider;
@property(readonly, nonatomic) GOOProvider *performanceMonitoringServiceProvider; // @synthesize performanceMonitoringServiceProvider=_performanceMonitoringServiceProvider;
@property(readonly, nonatomic) GOOProvider *initializationServiceProvider; // @synthesize initializationServiceProvider=_initializationServiceProvider;
@property(readonly, nonatomic) GOOProvider *growthKitServiceProvider; // @synthesize growthKitServiceProvider=_growthKitServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *eventLoggingServiceProvider; // @synthesize eventLoggingServiceProvider=_eventLoggingServiceProvider;
@property(readonly, nonatomic) GOOProvider *bigtopSyncClientAPIProviderProvider; // @synthesize bigtopSyncClientAPIProviderProvider=_bigtopSyncClientAPIProviderProvider;
@property(readonly, nonatomic) GOOProvider *accountsServiceProvider; // @synthesize accountsServiceProvider=_accountsServiceProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *accountSettingsServiceProvider; // @synthesize accountSettingsServiceProvider=_accountSettingsServiceProvider;
@property(readonly, nonatomic) id <GBTSyncHintsService> syncHintsService;
@property(readonly, nonatomic) id <GBTSyncClientService> syncClientService;
@property(readonly, nonatomic) id <SSOService> SSOService;
@property(readonly, nonatomic) id <HUBPerformanceMonitoringService> performanceMonitoringService;
@property(readonly, nonatomic) id <GBTInitializationService> initializationService;
@property(readonly, nonatomic) id <GBTGrowthKitService> growthKitService;
- (id)eventLoggingServiceWithAccountID:(id)arg1;
@property(readonly, nonatomic) id <GBTBigtopSyncClientAPIProvider> bigtopSyncClientAPIProvider;
@property(readonly, nonatomic) id <GBTAccountsService> accountsService;
- (id)accountSettingsServiceWithAccountID:(id)arg1;
- (id)initWithAccountSettingsServiceProvider:(id)arg1 accountsServiceProvider:(id)arg2 bigtopSyncClientAPIProviderProvider:(id)arg3 eventLoggingServiceProvider:(id)arg4 growthKitServiceProvider:(id)arg5 initializationServiceProvider:(id)arg6 performanceMonitoringServiceProvider:(id)arg7 SSOServiceProvider:(id)arg8 syncClientServiceProvider:(id)arg9 syncHintsServiceProvider:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


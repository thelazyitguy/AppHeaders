//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JBTRuntimeOptionsComponent;
@protocol ComGoogleAppsBigtopDataSettingsSettingsClientComponent, ComGoogleAppsBigtopServicesGmailCommonComponentGmailCommonDaggerComponent, ComGoogleAppsBigtopSyncClientImplCommonSapiCommonComponent, ComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent, ComGoogleAppsBigtopSyncClientImplItemlistsApiItemListsComponent, ComGoogleAppsBigtopSyncClientImplLivelistLiveListComponent, ComGoogleAppsBigtopSyncClientImplMetricsApiMetricsComponent, ComGoogleAppsBigtopSyncClientImplPlatformPlatformComponent, ComGoogleAppsBigtopSyncClientImplPrefetchersApiPrefetchersComponent, ComGoogleAppsBigtopSyncClientImplStarsSyncstatusStarsSyncStatusComponent, ComGoogleAppsBigtopSyncClientImplUnifiedinboxAsyncApiUnifiedInboxDependenciesComponent, JBTLoggingEventLoggingComponent;

@interface ComGoogleAppsBigtopSyncClientImplUnifiedinboxAsyncDaggerUnifiedInboxComponentImpl_Builder : NSObject
{
    id <JBTLoggingEventLoggingComponent> eventLoggingComponent_;
    id <ComGoogleAppsBigtopServicesGmailCommonComponentGmailCommonDaggerComponent> gmailCommonDaggerComponent_;
    id <ComGoogleAppsBigtopSyncClientImplCommonSapiCommonComponent> sapiCommonComponent_;
    id <ComGoogleAppsBigtopSyncClientImplItemlistsApiItemListsComponent> itemListsComponent_;
    id <ComGoogleAppsBigtopSyncClientImplLivelistLiveListComponent> liveListComponent_;
    id <ComGoogleAppsBigtopSyncClientImplMetricsApiMetricsComponent> metricsComponent_;
    id <ComGoogleAppsBigtopSyncClientImplPlatformPlatformComponent> platformComponent_;
    id <ComGoogleAppsBigtopSyncClientImplPrefetchersApiPrefetchersComponent> prefetchersComponent_;
    JBTRuntimeOptionsComponent *runtimeOptionsComponent_;
    id <ComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent> sapiMainThreadComponent_;
    id <ComGoogleAppsBigtopSyncClientImplStarsSyncstatusStarsSyncStatusComponent> starsSyncStatusComponent_;
    id <ComGoogleAppsBigtopSyncClientImplUnifiedinboxAsyncApiUnifiedInboxDependenciesComponent> unifiedInboxDependenciesComponent_;
    id <ComGoogleAppsBigtopDataSettingsSettingsClientComponent> settingsClientComponent_;
}

- (void)dealloc;
- (id)build;
- (id)settingsClientComponentWithComGoogleAppsBigtopDataSettingsSettingsClientComponent:(id)arg1;
- (id)unifiedInboxDependenciesComponentWithComGoogleAppsBigtopSyncClientImplUnifiedinboxAsyncApiUnifiedInboxDependenciesComponent:(id)arg1;
- (id)starsSyncStatusComponentWithComGoogleAppsBigtopSyncClientImplStarsSyncstatusStarsSyncStatusComponent:(id)arg1;
- (id)sapiMainThreadComponentWithComGoogleAppsBigtopSyncClientImplCommonSapiMainThreadComponent:(id)arg1;
- (id)runtimeOptionsComponentWithJBTRuntimeOptionsComponent:(id)arg1;
- (id)prefetchersComponentWithComGoogleAppsBigtopSyncClientImplPrefetchersApiPrefetchersComponent:(id)arg1;
- (id)platformComponentWithComGoogleAppsBigtopSyncClientImplPlatformPlatformComponent:(id)arg1;
- (id)metricsComponentWithComGoogleAppsBigtopSyncClientImplMetricsApiMetricsComponent:(id)arg1;
- (id)liveListComponentWithComGoogleAppsBigtopSyncClientImplLivelistLiveListComponent:(id)arg1;
- (id)itemListsComponentWithComGoogleAppsBigtopSyncClientImplItemlistsApiItemListsComponent:(id)arg1;
- (id)sapiCommonComponentWithComGoogleAppsBigtopSyncClientImplCommonSapiCommonComponent:(id)arg1;
- (id)gmailCommonDaggerComponentWithComGoogleAppsBigtopServicesGmailCommonComponentGmailCommonDaggerComponent:(id)arg1;
- (id)eventLoggingComponentWithJBTLoggingEventLoggingComponent:(id)arg1;

@end

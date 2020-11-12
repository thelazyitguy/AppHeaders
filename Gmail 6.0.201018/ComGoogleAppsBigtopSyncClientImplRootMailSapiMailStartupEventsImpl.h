//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTSapiMailStartupEvents-Protocol.h"

@class ComGoogleAppsBigtopDataItemsCalendarApiAsyncCalendarEventDataServiceComponent, ComGoogleAppsBigtopDataItemsOutboxApiAsyncOutboxResendManagerComponent, ComGoogleAppsBigtopDataItemsSearchApiAsyncItemsSearchComponent, ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleAppsBigtopSyncClientImplOfflinesynceventpublisherApiAsyncOfflineSyncEventPublisherComponent, ComGoogleAppsBigtopSyncClientImplSearchAsyncApiAsyncSearchComponent, ComGoogleAppsBigtopSyncClientImplTaskssupportAsyncApiAsyncTasksSupportComponent, JBTAsyncItemMessageAttachmentsDownloaderComponent, NSString;
@protocol ComGoogleAppsBigtopDataItemsAdsApiAdsService, ComGoogleAppsBigtopSyncClientImplCommonSapiCallback, ComGoogleAppsXplatDaggerAsyncProvider, ComGoogleAppsXplatObserveObservable, DaggerLazy, JBTSettingsClient;

@interface ComGoogleAppsBigtopSyncClientImplRootMailSapiMailStartupEventsImpl : NSObject <JBTSapiMailStartupEvents>
{
    id <ComGoogleAppsXplatObserveObservable> postCriticalStartEventObservable_;
    id <ComGoogleAppsXplatObserveObservable> nonCriticalStartEventObservable_;
    id <ComGoogleAppsXplatObserveObservable> storageReadyObservable_;
    _Bool isActiveAppStartupMode_;
    _Bool kickOffBackgroundJobExecution_;
    _Bool adsEnabled_;
    id <ComGoogleAppsBigtopDataItemsAdsApiAdsService> adsService_;
    id <ComGoogleAppsXplatObserveObservable> adsStartEventObservable_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    ComGoogleAppsBigtopDataItemsSearchApiAsyncItemsSearchComponent *asyncItemsSearchComponent_;
    ComGoogleAppsBigtopSyncClientImplSearchAsyncApiAsyncSearchComponent *asyncSearchComponent_;
    ComGoogleAppsBigtopSyncClientImplTaskssupportAsyncApiAsyncTasksSupportComponent *asyncTasksSupportComponent_;
    JBTAsyncItemMessageAttachmentsDownloaderComponent *asyncItemMessageAttachmentsDownloaderComponent_;
    ComGoogleAppsBigtopDataItemsCalendarApiAsyncCalendarEventDataServiceComponent *asyncCalendarEventDataServiceComponent_;
    ComGoogleAppsBigtopDataItemsOutboxApiAsyncOutboxResendManagerComponent *asyncOutboxResendManagerComponent_;
    ComGoogleAppsBigtopSyncClientImplOfflinesynceventpublisherApiAsyncOfflineSyncEventPublisherComponent *asyncOfflineSyncEventPublisherComponent_;
    id <DaggerLazy> snapshotsManager_;
    id <DaggerLazy> initialDataSet_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> initialDataSetLoaderProvider_;
    id <DaggerLazy> clusterFetcher_;
    id <ComGoogleAppsBigtopSyncClientImplCommonSapiCallback> initialDataSetCallback_;
    id <JBTSettingsClient> settingsClient_;
    _Bool skipAdsStartupForNonSectionedInboxEnabled_;
}

+ (void)initialize;
- (void)dealloc;
- (void)registerMailStartupEventsAfterSharedWithJavaUtilConcurrentExecutor:(id)arg1;
- (void)registerMailStartupEventsBeforeSharedWithJavaUtilConcurrentExecutor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

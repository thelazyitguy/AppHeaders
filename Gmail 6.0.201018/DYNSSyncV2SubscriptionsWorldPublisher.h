//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsXplatSubscribePublisher-Protocol.h"

@class DYNSCommonConstants_BuildType, DYNSDataModelsGroupSummaryFreshnessOrderComparator, DYNSDataUiGroupSummariesConverter, DYNSDebugDebugManager, DYNSSyncV2SubscriptionsSteadyIntervalThrottler, DYNSSyncV2SubscriptionsWorldPublisher_WorldDataCache, DYNSUIModelsWorldConfig, JavaUtilOptional, NSString, XPTExecutionGuard, XPTLifecycle;
@protocol ComGoogleAppsXplatObserveObservable, ComGoogleAppsXplatObserveObserver, ComGoogleAppsXplatObserveSettable, DYNSAnalyticsClearcutStreamzLogger, DYNSCommonAppFocusStateTracker, DYNSCommonDynamiteClock, DYNSCommonServerTime, DYNSMixinsFilter, DYNSStorageApiWorldStorageCoordinator, DYNSSyncv2ApiWorldSyncEngine, JavaUtilSet, JavaxInjectProvider;

@interface DYNSSyncV2SubscriptionsWorldPublisher : NSObject <ComGoogleAppsXplatSubscribePublisher>
{
    DYNSCommonConstants_BuildType *buildType_;
    id <DYNSCommonAppFocusStateTracker> appFocusStateTracker_;
    id <DYNSAnalyticsClearcutStreamzLogger> clearcutStreamzLogger_;
    id <JavaxInjectProvider> conversationSuggestionsStorageControllerProvider_;
    DYNSDebugDebugManager *debugManager_;
    id <DYNSCommonDynamiteClock> dynamiteClock_;
    id <DYNSMixinsFilter> filter_;
    DYNSDataModelsGroupSummaryFreshnessOrderComparator *groupSummaryFreshnessOrderComparator_;
    XPTLifecycle *lifecycle_;
    id <ComGoogleAppsXplatObserveObservable> localGroupViewedEventObservable_;
    id <ComGoogleAppsXplatObserveObserver> localGroupViewedEventObserver_;
    id <ComGoogleAppsXplatObserveObservable> worldDataUpdatedEventObservable_;
    id <ComGoogleAppsXplatObserveObserver> worldDataUpdatedEventObserver_;
    id <ComGoogleAppsXplatObserveObservable> worldSubscriptionShouldRefreshEventObservable_;
    id <ComGoogleAppsXplatObserveObserver> worldSubscriptionShouldRefreshEventObserver_;
    id <JavaxInjectProvider> executorProvider_;
    id <DYNSCommonServerTime> serverTime_;
    int subscriptionId_;
    id <ComGoogleAppsXplatObserveSettable> worldSnapshotSettable_;
    DYNSDataUiGroupSummariesConverter *uiGroupSummariesConverter_;
    id <DYNSStorageApiWorldStorageCoordinator> worldStorageCoordinator_;
    id <DYNSSyncv2ApiWorldSyncEngine> worldSyncEngine_;
    DYNSSyncV2SubscriptionsSteadyIntervalThrottler *dbThrottler_;
    XPTExecutionGuard *uiPublishGuard_;
    id dataCacheLock_;
    id <JavaUtilSet> pendingGroupsToRefresh_;
    id <JavaUtilSet> pendingRealTimeMessageIds_;
    JavaUtilOptional *pendingWorldSyncSessionIdToSet_;
    JavaUtilOptional *lastCachedForegroundWorldSyncSessionId_;
    DYNSUIModelsWorldConfig *worldConfig_;
    DYNSSyncV2SubscriptionsWorldPublisher_WorldDataCache *worldDataCache_;
    _Bool dataCacheInitializationStarted_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getDbThrottlerForTesting;
- (id)getLifecycle;
- (id)changeConfigurationWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

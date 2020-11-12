//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplStatusApiStatusManager-Protocol.h"
#import "XPTHasLifecycle-Protocol.h"

@class ComGoogleAppsBigtopCommonUtilLifecycleTracker, ComGoogleAppsBigtopDataCommonSyncStatus, ComGoogleAppsBigtopSyncClientImplCommonEventListenersList, ComGoogleAppsBigtopSyncClientImplCommonFeedbackloggingApiFeedbackLoggersList, ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleAppsBigtopSyncClientImplStatusSyncStatusAggregator, ComGoogleCommonBaseOptional, JBTDNetworkNetworkServiceProto_NetworkState, JBTStatus_ItemsEntireSyncState, NSString, XPTExecutionGuard, XPTLifecycle;
@protocol ComGoogleAppsXplatObserveObservable, ComGoogleAppsXplatObserveObserver, ComGoogleCommonTimeClock, DaggerLazy, JavaUtilList;

@interface ComGoogleAppsBigtopSyncClientImplStatusStatusManagerImpl : NSObject <ComGoogleAppsBigtopSyncClientImplStatusApiStatusManager, XPTHasLifecycle>
{
    ComGoogleCommonBaseOptional *lastSuccessfulFullItemsSyncIterationTimeMs_;
    ComGoogleCommonBaseOptional *lastSyncIterationWithChangesTimeMs_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    ComGoogleAppsBigtopSyncClientImplStatusSyncStatusAggregator *syncStatusAggregator_;
    id <ComGoogleAppsXplatObserveObservable> observableSyncStatus_;
    id <ComGoogleAppsXplatObserveObservable> observableItemsSyncStatus_;
    id <ComGoogleAppsXplatObserveObservable> observableNetworkState_;
    id <ComGoogleAppsXplatObserveObservable> observablePermanentChangeFailure_;
    id <ComGoogleAppsXplatObserveObserver> syncStatusObserver_;
    id <ComGoogleAppsXplatObserveObserver> itemsSyncStatusObserver_;
    id <ComGoogleAppsXplatObserveObserver> networkStateObserver_;
    id <ComGoogleAppsXplatObserveObserver> permanentChangeFailureObserver_;
    ComGoogleAppsBigtopSyncClientImplCommonEventListenersList *listeners_;
    XPTExecutionGuard *flushGuard_;
    id <JavaUtilList> appStateListeners_;
    id <JavaUtilList> bufferedEvents_;
    ComGoogleAppsBigtopCommonUtilLifecycleTracker *lifecycleTracker_;
    XPTLifecycle *lifecycle_;
    JBTDNetworkNetworkServiceProto_NetworkState *currentNetworkState_;
    ComGoogleAppsBigtopDataCommonSyncStatus *currentSyncStatus_;
    ComGoogleAppsBigtopSyncClientImplCommonFeedbackloggingApiFeedbackLoggersList *rootFeedbackLogger_;
    id <DaggerLazy> staticSummaryForDebugging_;
    id <ComGoogleCommonTimeClock> clock_;
    _Bool isItemsEntireSyncInProgress_;
    JBTStatus_ItemsEntireSyncState *latestItemsEntireSyncState_;
}

+ (void)initialize;
- (void)dealloc;
- (void)logFeedbackWithXPTLoggingApi:(id)arg1;
- (id)getLastSuccessfulFullItemsSyncIterationTimeMs;
- (id)getRequestType;
- (id)getNetworkState;
- (id)getStaticSummaryForDebugging;
- (id)getDynamicSummaryMapForDebugging;
- (id)getDynamicSummaryForDebugging;
- (id)getStatusSummaryForDebugging;
- (void)setAppStateWithJBTStatus_AppState:(id)arg1;
- (_Bool)isSyncInProgress;
- (_Bool)isClientOrUserMakingTooManyRequests;
- (id)isClientBigTopEnabled;
- (_Bool)isClientAuthRequired;
- (_Bool)isClientUpdatedRequired;
- (_Bool)isConnected;
- (_Bool)hasPendingModifiedObjects;
- (int)getPendingModifiedCount;
- (int)getBackgroundSyncObjectCount;
- (void)logDetailedStatusWithCallbackAndClientDataWithJBTCallback:(id)arg1 withNSString:(id)arg2;
- (id)getLatestItemsEntireSyncState;
- (void)stop;
- (_Bool)isRunning;
- (void)start;
- (id)flushEventsAsFuture;
- (void)flushEvents;
- (void)addAppStateListenerWithComGoogleAppsBigtopSyncClientImplStatusApiStatusManager_AppStateListener:(id)arg1;
- (_Bool)hasListenerWithJBTEventListener:(id)arg1;
- (void)removeListenerWithJBTEventListener:(id)arg1;
- (void)addListenerWithJBTEventListener:(id)arg1;
- (id)getLifecycle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

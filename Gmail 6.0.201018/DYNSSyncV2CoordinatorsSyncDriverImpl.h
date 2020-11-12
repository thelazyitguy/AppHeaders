//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSSyncv2ApiSyncDriver-Protocol.h"

@class DYNSNetworkConnectivityOfflineExceptionHandler, DYNSSyncV2CoordinatorsCatchUpManager, DYNSSyncV2EntitiesGroupEntityManagerRegistry, DYNSSyncV2EntitiesUserEntityManagerRegistry, DYNSSyncV2GetGroupSyncLauncher, DYNSSyncV2GroupMembersSyncerLauncher, DYNSSyncV2SingleTopicSyncLauncher, DYNSSyncV2SubscriptionsUiSubscriptionManager, NSString;
@protocol ComGoogleAppsXplatObserveObservable, ComGoogleAppsXplatObserveObserver, DYNSNetworkConnectivityNetworkConnectionState, DYNSNetworkConnectivityRpcFailureRetryHelper, DYNSSyncv2ApiBackfillManager, JavaUtilConcurrentExecutor, JavaUtilMap, JavaUtilSet;

@interface DYNSSyncV2CoordinatorsSyncDriverImpl : NSObject <DYNSSyncv2ApiSyncDriver>
{
    id <DYNSSyncv2ApiBackfillManager> backfillManager_;
    DYNSSyncV2CoordinatorsCatchUpManager *catchUpManager_;
    id <JavaUtilConcurrentExecutor> executor_;
    DYNSSyncV2GetGroupSyncLauncher *getGroupSyncLauncher_;
    DYNSSyncV2EntitiesGroupEntityManagerRegistry *groupEntityManagerRegistry_;
    DYNSSyncV2GroupMembersSyncerLauncher *groupMembersSyncerLauncher_;
    id <DYNSNetworkConnectivityNetworkConnectionState> networkConnectionState_;
    DYNSNetworkConnectivityOfflineExceptionHandler *offlineExceptionHandler_;
    id <DYNSNetworkConnectivityRpcFailureRetryHelper> rpcFailureRetryHelper_;
    DYNSSyncV2SingleTopicSyncLauncher *singleTopicSyncLauncher_;
    DYNSSyncV2SubscriptionsUiSubscriptionManager *uiSubscriptionManager_;
    DYNSSyncV2EntitiesUserEntityManagerRegistry *userEntityManagerRegistry_;
    id <ComGoogleAppsXplatObserveObservable> connectionChangedObservable_;
    id <ComGoogleAppsXplatObserveObservable> groupDataInvalidatedObservable_;
    id <ComGoogleAppsXplatObserveObservable> groupDataOutdatedObservable_;
    id <ComGoogleAppsXplatObserveObservable> invitedGroupSyncedObservable_;
    id <ComGoogleAppsXplatObserveObservable> membershipInvalidatedObservable_;
    id <ComGoogleAppsXplatObserveObservable> storeWorldCompletedObservable_;
    id <ComGoogleAppsXplatObserveObservable> userDataInvalidatedObservable_;
    id <ComGoogleAppsXplatObserveObservable> userDataOutdatedObservable_;
    id <ComGoogleAppsXplatObserveObservable> subscribedEntityObservable_;
    id <ComGoogleAppsXplatObserveObserver> connectionChangedObserver_;
    id <ComGoogleAppsXplatObserveObserver> groupDataInvalidatedObserver_;
    id <ComGoogleAppsXplatObserveObserver> groupDataOutdatedObserver_;
    id <ComGoogleAppsXplatObserveObserver> invitedGroupSyncedObserver_;
    id <ComGoogleAppsXplatObserveObserver> membershipInvalidatedObserver_;
    id <ComGoogleAppsXplatObserveObserver> storeWorldCompletedObserver_;
    id <ComGoogleAppsXplatObserveObserver> uiSubscriptionObserver_;
    id <ComGoogleAppsXplatObserveObserver> userDataInvalidatedObserver_;
    id <ComGoogleAppsXplatObserveObserver> userDataOutdatedObserver_;
    id <JavaUtilMap> resetStreamViewSyncsExecutionGuards_;
    id <JavaUtilMap> resetStreamViewSyncsInProgress_;
    id <JavaUtilMap> resetTopicViewSyncsExecutionGuards_;
    id <JavaUtilMap> resetTopicViewSyncsInProgress_;
    id <JavaUtilMap> syncGroupMembersExecutionGuards_;
    id <JavaUtilMap> syncGroupMembersInProgress_;
    id <JavaUtilMap> syncGroupMetadataExecutionGuards_;
    id <JavaUtilMap> syncGroupMetadataInProgress_;
    id <JavaUtilSet> syncedInvitedGroups_;
    id lock_;
    _Bool hasStarted_;
    id <JavaUtilSet> groupSubscriptionSet_;
}

+ (void)initialize;
- (void)dealloc;
- (void)registerGroupSubscriptionWithDYNSSyncv2ApiSyncDriver_SubscribedGroupSource:(id)arg1;
- (void)driveGroupSyncWithDYNSCommonGroupId:(id)arg1;
- (id)resolveMembershipSyncedWithDYNSCommonGroupId:(id)arg1;
- (id)resolveCatchUpWithDYNSCommonGroupId:(id)arg1;
- (void)stop;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

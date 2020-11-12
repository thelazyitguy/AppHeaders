//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSStorageApiWorldStorageCoordinator-Protocol.h"

@class ComGoogleAppsXplatSqlSqlDatabase, DYNSStorageCoordinatorsUserSyncHelper, DYNSSyncV2EntitiesGroupEntityManagerRegistry, DYNSSyncV2SubscriptionsEventDispatcher, NSString;
@protocol ComGoogleAppsXplatObserveSettable, DYNSAnalyticsClearcutEventsLogger, DYNSAnalyticsStopwatchFactory, DYNSMembershipsMembershipsUtil, DYNSStorageControllersGroupStorageControllerInternal, DYNSStorageControllersMembershipStorageControllerInternal, DYNSStorageControllersUserRevisionStorageControllerInternal, DYNSStorageCoordinatorsGroupStorageCoordinatorInternal, JavaxInjectProvider;

@interface DYNSStorageCoordinatorsWorldStorageCoordinatorImpl : NSObject <DYNSStorageApiWorldStorageCoordinator>
{
    id <DYNSAnalyticsClearcutEventsLogger> clearcutEventsLogger_;
    DYNSSyncV2SubscriptionsEventDispatcher *eventDispatcher_;
    DYNSSyncV2EntitiesGroupEntityManagerRegistry *groupEntityManagerRegistry_;
    id <DYNSStorageControllersGroupStorageControllerInternal> groupStorageController_;
    id <DYNSStorageCoordinatorsGroupStorageCoordinatorInternal> groupStorageCoordinator_;
    id <DYNSStorageControllersMembershipStorageControllerInternal> membershipStorageController_;
    id <DYNSMembershipsMembershipsUtil> membershipsUtil_;
    id <JavaxInjectProvider> executorProvider_;
    id <ComGoogleAppsXplatObserveSettable> userRemovedEventSettable_;
    id <DYNSAnalyticsStopwatchFactory> stopwatchFactory_;
    ComGoogleAppsXplatSqlSqlDatabase *sqlDatabase_;
    id <DYNSStorageControllersUserRevisionStorageControllerInternal> userRevisionStorageController_;
    DYNSStorageCoordinatorsUserSyncHelper *userSyncHelper_;
}

+ (void)initialize;
- (void)dealloc;
- (id)fillJoinedMembersOfDmsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;
- (id)deleteMissingGroupsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;
- (id)mergeTwoMembershipMapsWithComGoogleCommonCollectImmutableMap:(id)arg1 withComGoogleCommonCollectImmutableMap:(id)arg2;
- (id)updateInitialWorldFromWorldSyncWithJavaUtilOptional:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2 withComGoogleCommonCollectImmutableList:(id)arg3 withComGoogleCommonCollectImmutableMap:(id)arg4 withComGoogleCommonCollectImmutableMap:(id)arg5 withDYNSCommonInternalRevision:(id)arg6 withBoolean:(_Bool)arg7 withComGoogleCommonCollectImmutableSet:(id)arg8 withBoolean:(_Bool)arg9;
- (id)getSelectedGroupSummariesMapWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)getSelectedGroupSummariesWithComGoogleCommonCollectImmutableList:(id)arg1 withBoolean:(_Bool)arg2;
- (id)getGroupSummariesWithBoolean:(_Bool)arg1;
- (id)getUserAndGroupEntityData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

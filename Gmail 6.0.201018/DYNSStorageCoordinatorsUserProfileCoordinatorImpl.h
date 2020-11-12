//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSStorageCoordinatorsUserProfileCoordinatorInternal-Protocol.h"

@class ComGoogleAppsXplatSqlSqlDatabase, DYNSAnalyticsStopwatchManager, DYNSStorageCoordinatorsUserSyncHelper, DYNSSyncV2SubscriptionsEventDispatcher, NSString;
@protocol ComGoogleAppsXplatObserveSettable, DYNSAnalyticsClearcutEventsLogger, DYNSAnalyticsStopwatchFactory, DYNSCommonLowPriorityTaskStateTracker, DYNSStorageControllersRosterStorageControllerInternal, DYNSStorageControllersUserStorageControllerInternal, JavaxInjectProvider;

@interface DYNSStorageCoordinatorsUserProfileCoordinatorImpl : NSObject <DYNSStorageCoordinatorsUserProfileCoordinatorInternal>
{
    id <DYNSAnalyticsClearcutEventsLogger> clearcutEventsLogger_;
    DYNSSyncV2SubscriptionsEventDispatcher *eventDispatcher_;
    id <DYNSCommonLowPriorityTaskStateTracker> lowPriorityTaskStateTracker_;
    ComGoogleAppsXplatSqlSqlDatabase *sqlDatabase_;
    id <DYNSStorageControllersUserStorageControllerInternal> userStorageController_;
    id <DYNSStorageControllersRosterStorageControllerInternal> rosterStorageController_;
    DYNSStorageCoordinatorsUserSyncHelper *userSyncHelper_;
    id <JavaxInjectProvider> executorProvider_;
    id <ComGoogleAppsXplatObserveSettable> worldUpdatedEventSettable_;
    id <ComGoogleAppsXplatObserveSettable> dmNameUpdatedSettable_;
    id <DYNSAnalyticsStopwatchFactory> stopwatchFactory_;
    DYNSAnalyticsStopwatchManager *stopwatchManager_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getHumanPartnerIdToEmailAddressAndDngIds;
- (id)getHumanDmPartnerIdToEmailAddressAndGroupIds;
- (id)updateUsersAndDynamicGroupNamesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;
- (id)updateUsersAndDynamicGroupNamesWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)deleteOutdatedNonMembersWithLong:(long long)arg1;
- (id)getAllStaleUserIdsWithLong:(long long)arg1 withLong:(long long)arg2;
- (id)getMemberUserIdsNeedingSyncWithComGoogleCommonCollectImmutableList:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (id)getRosterIdsNeedingSyncWithDYNSCommonGroupId:(id)arg1;
- (id)getGroupUserIdsWithoutFullProfileInfoWithDYNSCommonGroupId:(id)arg1;
- (id)getAllUserIdsWithoutFullProfileInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

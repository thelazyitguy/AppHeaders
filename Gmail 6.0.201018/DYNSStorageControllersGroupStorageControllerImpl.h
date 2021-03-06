//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSStorageControllersGroupStorageControllerInternal-Protocol.h"

@class ComGoogleAppsXplatSqlSqlDatabase, DYNSDataModelsGroupFreshnessOrderComparator, DYNSStorageControllersGroupCache, DYNSStorageControllersGroupStorageSummaryLogger, NSString;
@protocol ComGoogleAppsXplatObserveSettable, DYNSAnalyticsClearcutEventsLogger, DYNSCommonHelperGroupAttributesInfoHelper, DYNSFlagsSharedConfiguration, JavaxInjectProvider;

@interface DYNSStorageControllersGroupStorageControllerImpl : NSObject <DYNSStorageControllersGroupStorageControllerInternal>
{
    id <DYNSAnalyticsClearcutEventsLogger> clearcutEventsLogger_;
    id <DYNSFlagsSharedConfiguration> sharedConfiguration_;
    id <DYNSCommonHelperGroupAttributesInfoHelper> groupAttributesInfoHelper_;
    DYNSStorageControllersGroupCache *groupCache_;
    DYNSStorageControllersGroupStorageSummaryLogger *groupStorageSummaryLogger_;
    id <JavaxInjectProvider> executorProvider_;
    ComGoogleAppsXplatSqlSqlDatabase *sqlDatabase_;
    DYNSDataModelsGroupFreshnessOrderComparator *groupFreshnessOrderComparator_;
    id <ComGoogleAppsXplatObserveSettable> worldDataUpdatedEventSettable_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getAllGroupsSortedWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)getGroupCache;
- (id)updateHasDraftWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withDYNSCommonGroupId:(id)arg2 withBoolean:(_Bool)arg3;
- (id)deleteSnippetsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableSet:(id)arg2;
- (id)setMembershipStateWithDYNSCommonGroupId:(id)arg1 withDYNSCommonMembershipState:(id)arg2 withJavaUtilOptional:(id)arg3;
- (id)getDasherDomainPoliciesAndOtrStateWithDYNSCommonGroupId:(id)arg1;
- (id)isFlatWithDYNSCommonGroupId:(id)arg1;
- (id)isBotDmWithDYNSCommonGroupId:(id)arg1;
- (id)setGroupsUnsupportedWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableSet:(id)arg2;
- (id)invalidateTopicRangeFlagsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableSet:(id)arg2;
- (id)invalidateStreamRevisionsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableSet:(id)arg2;
- (id)invalidateMembershipRevisionsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableSet:(id)arg2;
- (id)invalidateMembershipRevisionWithDYNSCommonGroupId:(id)arg1;
- (id)invalidateGroupDataWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;
- (id)updateGroupRevisionsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withDYNSCommonGroupId:(id)arg2 withDYNSCommonInternalGroupRevisions:(id)arg3;
- (id)getSortedGroupAssemblersWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2;
- (id)getSortedGroupAssemblersWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)getGroupByIdOrNullWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withDYNSCommonGroupId:(id)arg2;
- (id)updateTopicRangeFlagsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withDYNSCommonGroupId:(id)arg2 withJavaUtilOptional:(id)arg3 withJavaUtilOptional:(id)arg4;
- (id)insertOrUpdateGroupsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2 withBoolean:(_Bool)arg3;
- (id)insertOrUpdateGroupsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;
- (id)updateClearHistoryEnforcementTimestampsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableMap:(id)arg2;
- (id)deleteGroupWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withDYNSCommonGroupId:(id)arg2;
- (id)getLastReadTimeMicrosWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withDYNSCommonGroupId:(id)arg2;
- (id)getMarkAsUnreadTimeMicrosWithDYNSCommonGroupId:(id)arg1;
- (id)getLastReadTimeMicrosWithDYNSCommonGroupId:(id)arg1;
- (id)updateDynamicGroupNamesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilMap:(id)arg2;
- (id)updateGroupDataWithDYNSCommonGroupId:(id)arg1 withDYNProtoGroupData:(id)arg2;
- (id)updateGroupIfGroupExistsWithDYNSCommonGroupId:(id)arg1 withJavaUtilOptional:(id)arg2 withJavaUtilOptional:(id)arg3 withJavaUtilOptional:(id)arg4 withJavaUtilOptional:(id)arg5;
- (id)updateNameIfGroupExistsWithDYNSCommonGroupId:(id)arg1 withNSString:(id)arg2;
- (id)deleteSnippetWithDYNSCommonGroupId:(id)arg1 withDYNSCommonHelperGroupAttributeInfo:(id)arg2 withDYNSCommonMessageId:(id)arg3;
- (id)updateSnippetWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withDYNSCommonGroupId:(id)arg2 withDYNSCommonHelperGroupAttributeInfo:(id)arg3 withJavaUtilOptional:(id)arg4;
- (id)insertSnippetIfAbsentWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withDYNSCommonGroupId:(id)arg2 withDYNSCommonHelperGroupAttributeInfo:(id)arg3 withDYNSDataModelsMessage:(id)arg4;
- (id)insertSnippetIfAbsentWithDYNSCommonGroupId:(id)arg1 withDYNSCommonHelperGroupAttributeInfo:(id)arg2 withDYNSDataModelsMessage:(id)arg3;
- (id)insertOrUpdateGroupWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withDYNSDataModelsGroup:(id)arg2;
- (id)insertOrUpdateWithDYNSDataModelsGroup:(id)arg1;
- (id)getGroupsByIdsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2;
- (id)getGroupsByIdsWithJavaUtilList:(id)arg1;
- (id)getNonRevisionedWorldDataWithComGoogleCommonCollectImmutableSet:(id)arg1;
- (id)getGroups;
- (id)getGroupWithDYNSCommonGroupId:(id)arg1;
- (id)getGroupByLookupIdWithNSString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


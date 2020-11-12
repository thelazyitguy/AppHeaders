//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSStorageControllersUserStorageControllerInternal-Protocol.h"

@class ComGoogleAppsXplatSqlSqlDatabase, NSString;
@protocol JavaxInjectProvider;

@interface DYNSStorageControllersUserStorageControllerImpl : NSObject <DYNSStorageControllersUserStorageControllerInternal>
{
    id <JavaxInjectProvider> executorProvider_;
    ComGoogleAppsXplatSqlSqlDatabase *sqlDatabase_;
}

- (void)dealloc;
- (id)getAllUserProfilesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2;
- (id)filterNonLocalUserIdsWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)markUsersAsNeedingSyncWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)insertOrUpdateUsersAndReturnNameChangedUsersWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;
- (id)insertOrUpdateUsersWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)getMembershipStateToUsersByGroupIdOrderedByNameWithDYNSCommonGroupId:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)getUsersWithContextWithJavaUtilList:(id)arg1;
- (id)getUsersWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2;
- (id)getUsersWithJavaUtilList:(id)arg1;
- (id)getUserWithDYNSCommonUserContextId:(id)arg1;
- (id)getUserWithDYNSCommonUserId:(id)arg1;
- (id)getAllUserIdsNeedingExternalRelationshipSyncWithJavaUtilOptional:(id)arg1 withJavaUtilOptional:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

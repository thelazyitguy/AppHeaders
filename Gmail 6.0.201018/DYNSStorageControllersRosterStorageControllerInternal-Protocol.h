//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSStorageApiRosterStorageController-Protocol.h"
#import "JavaObject-Protocol.h"

@class ComGoogleAppsXplatSqlSqlTransaction, DYNSCommonGroupId;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@protocol DYNSStorageControllersRosterStorageControllerInternal <DYNSStorageApiRosterStorageController, JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getRosterIdsNeedingSyncWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)deleteOutdatedRostersWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1 withLong:(long long)arg2;
@end

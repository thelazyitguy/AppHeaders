//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsXplatSqlSqlTransaction, DYNSStorageApiRange;
@protocol ComGoogleCommonUtilConcurrentListenableFuture, JavaUtilList;

@protocol DYNSStorageControllersRangesStorageHelper_RangeStorageController <JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)updateRangeRecordWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1 withId:(id)arg2 withDYNSStorageApiRange:(DYNSStorageApiRange *)arg3;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)insertRangeRecordWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1 withId:(id)arg2 withDYNSStorageApiRange:(DYNSStorageApiRange *)arg3;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)deleteRangeRecordWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1 withId:(id)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)bulkDeleteRangeRecordsWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1 withJavaUtilList:(id <JavaUtilList>)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)bulkAddRangeRecordsWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1 withId:(id)arg2 withJavaUtilList:(id <JavaUtilList>)arg3;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getEnclosingRangeRecordWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1 withId:(id)arg2 withLong:(long long)arg3;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getOverlappedRangeRecordsInOrderWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1 withId:(id)arg2 withDYNSStorageApiRange:(DYNSStorageApiRange *)arg3;
@end


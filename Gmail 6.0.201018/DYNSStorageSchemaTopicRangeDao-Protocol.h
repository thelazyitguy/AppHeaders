//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsXplatStorageDbTransactionPromise, DYNSCommonGroupId, NSString;
@protocol JavaUtilList;

@protocol DYNSStorageSchemaTopicRangeDao <JavaObject>
- (ComGoogleAppsXplatStorageDbTransactionPromise *)bulkDeleteWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)bulkInsertWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)updateTimestampsWithLong:(long long)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getOverlappedRangeRecordsInOrderWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getEnclosingRangeRecordWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1 withLong:(long long)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)getRangeTopicCountWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)delete__WithNSString:(NSString *)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)delete__WithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1;
@end

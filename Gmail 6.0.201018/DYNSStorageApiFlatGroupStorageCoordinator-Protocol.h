//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class DYNSCommonGroupId, DYNSCommonHelperGroupAttributeInfo, DYNSCommonMessageId;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@protocol DYNSStorageApiFlatGroupStorageCoordinator <JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)regenerateSnippetWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1 withDYNSCommonHelperGroupAttributeInfo:(DYNSCommonHelperGroupAttributeInfo *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getMessagesInRangeInFlatGroupWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1 withLong:(long long)arg2 withInt:(int)arg3 withBoolean:(_Bool)arg4;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getMessagesInFlatGroupWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1 withLong:(long long)arg2 withInt:(int)arg3 withBoolean:(_Bool)arg4;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getInitialMessagesInFlatGroupWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1 withInt:(int)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getInitialMessagesAroundTimestampInFlatGroupWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1 withLong:(long long)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getInitialMessagesAroundMessageIdInFlatGroupWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1 withDYNSCommonMessageId:(DYNSCommonMessageId *)arg2 withInt:(int)arg3 withInt:(int)arg4;
@end


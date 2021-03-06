//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class DYNSCommonGroupId, DYNSCommonTopicId, DYNSDataModelsTopic;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@protocol DYNSStorageApiTopicStorageController <JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)insertOrUpdateTopicWithDYNSDataModelsTopic:(DYNSDataModelsTopic *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)updateMuteStateIfTopicExistsWithDYNSCommonTopicId:(DYNSCommonTopicId *)arg1 withBoolean:(_Bool)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getTopicWithDYNSCommonTopicId:(DYNSCommonTopicId *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getMuteStateWithDYNSCommonTopicId:(DYNSCommonTopicId *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getMissingReadRepliesCountWithDYNSCommonTopicId:(DYNSCommonTopicId *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getLatestUserStatesUpdateTimeMicrosWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getLastReadTimeMicrosWithDYNSCommonTopicId:(DYNSCommonTopicId *)arg1;
@end


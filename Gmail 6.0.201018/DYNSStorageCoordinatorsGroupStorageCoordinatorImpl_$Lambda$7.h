//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonUtilConcurrentAsyncFunction-Protocol.h"

@class ComGoogleAppsXplatSqlSqlTransaction, ComGoogleCommonBaseStopwatch, ComGoogleCommonCollectImmutableList, DYNSCommonGroupId, DYNSCommonInternalRevision, DYNSStorageCoordinatorsGroupStorageCoordinatorImpl, NSString;

@interface DYNSStorageCoordinatorsGroupStorageCoordinatorImpl_$Lambda$7 : NSObject <ComGoogleCommonUtilConcurrentAsyncFunction>
{
    DYNSStorageCoordinatorsGroupStorageCoordinatorImpl *this$0_;
    ComGoogleAppsXplatSqlSqlTransaction *val$transaction_;
    DYNSCommonGroupId *val$groupId_;
    DYNSCommonInternalRevision *val$groupStreamRevision_;
    ComGoogleCommonCollectImmutableList *val$topicSummaries_;
    _Bool val$containsFirstTopic_;
    _Bool val$containsLastTopic_;
    ComGoogleCommonBaseStopwatch *val$stopwatch_;
}

- (void)dealloc;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


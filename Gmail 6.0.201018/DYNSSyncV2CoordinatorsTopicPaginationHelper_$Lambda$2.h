//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonUtilConcurrentAsyncFunction-Protocol.h"

@class ComGoogleCommonBaseStopwatch, DYNSCommonGroupId, DYNSSyncV2CoordinatorsTopicPaginationHelper, DYNSSyncV2CoordinatorsTopicPaginationHelper_AnchorSortTimeInfo, DYNSSyncV2CoordinatorsTopicPaginationHelper_PaginationType, JavaUtilOptional, NSString;

@interface DYNSSyncV2CoordinatorsTopicPaginationHelper_$Lambda$2 : NSObject <ComGoogleCommonUtilConcurrentAsyncFunction>
{
    DYNSSyncV2CoordinatorsTopicPaginationHelper *this$0_;
    DYNSSyncV2CoordinatorsTopicPaginationHelper_AnchorSortTimeInfo *val$anchorSortTimeInfo_;
    DYNSCommonGroupId *val$groupId_;
    int val$numPreviousTopics_;
    int val$numNextTopics_;
    DYNSSyncV2CoordinatorsTopicPaginationHelper_PaginationType *val$paginationType_;
    JavaUtilOptional *val$groupOptional_;
    _Bool val$isGroupUpToDateBeforeSync_;
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

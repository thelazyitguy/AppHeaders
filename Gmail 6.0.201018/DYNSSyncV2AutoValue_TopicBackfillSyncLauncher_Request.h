//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSSyncV2TopicBackfillSyncLauncher_Request.h"

@class ComGoogleCommonCollectImmutableList, DYNSCommonGroupId, DYNSCommonInternalRequestContext;

@interface DYNSSyncV2AutoValue_TopicBackfillSyncLauncher_Request : DYNSSyncV2TopicBackfillSyncLauncher_Request
{
    DYNSCommonInternalRequestContext *requestContext_;
    DYNSCommonGroupId *groupId_;
    ComGoogleCommonCollectImmutableList *topicIds_;
    int maxReadMessagesPerTopic_;
    int maxUnreadMessagesPerTopic_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (int)getMaxUnreadMessagesPerTopic;
- (int)getMaxReadMessagesPerTopic;
- (id)getTopicIds;
- (id)getGroupId;
- (id)getRequestContext;

@end


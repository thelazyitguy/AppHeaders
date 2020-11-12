//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSSyncV2NextTopicsSyncLauncher_Request.h"

@class DYNSCommonGroupId, DYNSCommonInternalRequestContext;

@interface DYNSSyncV2AutoValue_NextTopicsSyncLauncher_Request : DYNSSyncV2NextTopicsSyncLauncher_Request
{
    DYNSCommonInternalRequestContext *requestContext_;
    DYNSCommonGroupId *groupId_;
    long long afterTimeMicros_;
    int numTopics_;
    int maxReadMessagesPerTopic_;
    int maxUnreadMessagesPerTopic_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (int)getMaxUnreadMessagesPerTopic;
- (int)getMaxReadMessagesPerTopic;
- (int)getNumTopics;
- (long long)getAfterTimeMicros;
- (id)getGroupId;
- (id)getRequestContext;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSSyncV2InitialTopicsSyncLauncher_Request.h"

@class DYNSCommonGroupId, DYNSCommonInternalRequestContext, JavaUtilOptional;

@interface DYNSSyncV2AutoValue_InitialTopicsSyncLauncher_Request : DYNSSyncV2InitialTopicsSyncLauncher_Request
{
    DYNSCommonInternalRequestContext *requestContext_;
    DYNSCommonGroupId *groupId_;
    int numPreviousTopics_;
    int numNextTopics_;
    int maxReadMessagesPerTopic_;
    int maxUnreadMessagesPerTopic_;
    long long referenceTime_;
    JavaUtilOptional *referenceTopic_;
    _Bool abortIfStreamExists_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)getAbortIfStreamExists;
- (id)getReferenceTopic;
- (long long)getReferenceTime;
- (int)getMaxUnreadMessagesPerTopic;
- (int)getMaxReadMessagesPerTopic;
- (int)getNumNextTopics;
- (int)getNumPreviousTopics;
- (id)getGroupId;
- (id)getRequestContext;

@end

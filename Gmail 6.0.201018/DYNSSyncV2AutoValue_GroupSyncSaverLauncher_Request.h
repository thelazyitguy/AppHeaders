//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSSyncV2GroupSyncSaverLauncher_Request.h"

@class DYNSCommonInternalRequestContext, DYNSDataModelsGroup, JavaUtilOptional;

@interface DYNSSyncV2AutoValue_GroupSyncSaverLauncher_Request : DYNSSyncV2GroupSyncSaverLauncher_Request
{
    DYNSCommonInternalRequestContext *requestContext_;
    DYNSDataModelsGroup *group_;
    JavaUtilOptional *joinedUserIds_;
    JavaUtilOptional *invitedMemberIds_;
    JavaUtilOptional *firstTopic_;
    JavaUtilOptional *streamRevision_;
    JavaUtilOptional *userRevision_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)getUserRevision;
- (id)getStreamRevision;
- (id)getFirstTopic;
- (id)getInvitedMemberIds;
- (id)getJoinedUserIds;
- (id)getGroup;
- (id)getRequestContext;

@end

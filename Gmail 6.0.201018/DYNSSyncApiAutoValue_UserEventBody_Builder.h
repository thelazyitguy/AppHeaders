//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSSyncApiUserEventBody_Builder.h"

@class ComGoogleCommonCollectImmutableList, ComGoogleCommonCollectImmutableList_Builder, DYNProtoRevisionedEventBodyType, JavaUtilOptional;

@interface DYNSSyncApiAutoValue_UserEventBody_Builder : DYNSSyncApiUserEventBody_Builder
{
    DYNProtoRevisionedEventBodyType *eventBodyType_;
    ComGoogleCommonCollectImmutableList_Builder *groupIdsBuilder$_;
    ComGoogleCommonCollectImmutableList *groupIds_;
    JavaUtilOptional *blockStateChangedEvent_;
    JavaUtilOptional *clearHistoryEvent_;
    JavaUtilOptional *groupHideChangedEvent_;
    JavaUtilOptional *groupNotificationSettingsUpdatedEvent_;
    JavaUtilOptional *groupStarredEvent_;
    JavaUtilOptional *groupUnreadSubscribedTopicCountUpdatedEvent_;
    JavaUtilOptional *groupViewedEvent_;
    JavaUtilOptional *markAsUnreadEvent_;
    JavaUtilOptional *membershipChangedEvent_;
    JavaUtilOptional *retentionSettingsUpdatedEvent_;
    JavaUtilOptional *topicMuteChangedEvent_;
    JavaUtilOptional *topicViewedEvent_;
    JavaUtilOptional *userSettingsChangedEvent_;
    JavaUtilOptional *userStatusUpdatedEvent_;
    JavaUtilOptional *workingHoursSettingsUpdatedEvent_;
}

- (void)dealloc;
- (id)autoBuild;
- (id)setWorkingHoursSettingsUpdatedEventWithDYNProtoWorkingHoursSettingsUpdatedEvent:(id)arg1;
- (id)setUserStatusUpdatedEventWithDYNProtoUserStatusUpdatedEvent:(id)arg1;
- (id)setUserSettingsChangedEventWithDYNProtoUserSettingsChangedEvent:(id)arg1;
- (id)setTopicViewedEventWithDYNProtoTopicViewedEvent:(id)arg1;
- (id)setTopicMuteChangedEventWithDYNProtoTopicMuteChangedEvent:(id)arg1;
- (id)setRetentionSettingsUpdatedEventWithDYNProtoRetentionSettingsUpdatedEvent:(id)arg1;
- (id)setMembershipChangedEventWithDYNProtoMembershipChangedEvent:(id)arg1;
- (id)setMarkAsUnreadEventWithDYNProtoMarkAsUnreadEvent:(id)arg1;
- (id)setGroupViewedEventWithDYNProtoGroupViewedEvent:(id)arg1;
- (id)setGroupUnreadSubscribedTopicCountUpdatedEventWithDYNProtoGroupUnreadSubscribedTopicCountUpdatedEvent:(id)arg1;
- (id)setGroupStarredEventWithDYNProtoGroupStarredEvent:(id)arg1;
- (id)setGroupNotificationSettingsUpdatedEventWithDYNProtoGroupNotificationSettingsUpdatedEvent:(id)arg1;
- (id)setGroupHideChangedEventWithDYNProtoGroupHideChangedEvent:(id)arg1;
- (id)setClearHistoryEventWithDYNProtoClearHistoryEvent:(id)arg1;
- (id)setBlockStateChangedEventWithDYNProtoBlockStateChangedEvent:(id)arg1;
- (id)groupIdsBuilder;
- (id)setEventBodyTypeWithDYNProtoRevisionedEventBodyType:(id)arg1;

@end

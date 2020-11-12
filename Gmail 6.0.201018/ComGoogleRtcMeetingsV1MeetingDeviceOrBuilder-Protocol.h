//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleRtcMeetingsV1MeetingDevice_ClientType, ComGoogleRtcMeetingsV1MeetingDevice_DisplayNameInfo, ComGoogleRtcMeetingsV1MeetingDevice_Feature, ComGoogleRtcMeetingsV1MeetingDevice_FinalStateReason, ComGoogleRtcMeetingsV1MeetingDevice_JoinState, ComGoogleRtcMeetingsV1MeetingDevice_MediaCaptureType, ComGoogleRtcMeetingsV1MeetingDevice_MediaState, ComGoogleRtcMeetingsV1MeetingDevice_MuteRequest, ComGoogleRtcMeetingsV1MeetingDevice_Privilege, ComGoogleRtcMeetingsV1MeetingDevice_PstnInfo, ComGoogleRtcMeetingsV1MeetingDevice_RecordingAck, ComGoogleRtcMeetingsV1MeetingDevice_RecordingPrivilege, ComGoogleRtcMeetingsV1MeetingDevice_UnmuteRequest, NSString;
@protocol ComGoogleProtobufProtocolStringList, JavaUtilList;

@protocol ComGoogleRtcMeetingsV1MeetingDeviceOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (_Bool)getIsPresentation;
- (_Bool)hasIsPresentation;
- (ComGoogleRtcMeetingsV1MeetingDevice_MediaCaptureType *)getMediaCaptureType;
- (_Bool)hasMediaCaptureType;
- (NSString *)getPrimaryDeviceId;
- (_Bool)hasPrimaryDeviceId;
- (ComGoogleRtcMeetingsV1MeetingDevice_PstnInfo *)getPstnInfo;
- (_Bool)hasPstnInfo;
- (NSString *)getCreatedBy;
- (_Bool)hasCreatedBy;
- (ComGoogleRtcMeetingsV1MeetingDevice_Feature *)getFeaturesWithInt:(int)arg1;
- (id <JavaUtilList>)getFeaturesList;
- (int)getFeaturesCount;
- (ComGoogleRtcMeetingsV1MeetingDevice_RecordingPrivilege *)getRecordingPrivilegesWithInt:(int)arg1;
- (id <JavaUtilList>)getRecordingPrivilegesList;
- (int)getRecordingPrivilegesCount;
- (ComGoogleRtcMeetingsV1MeetingDevice_RecordingAck *)getRecordingAcksWithInt:(int)arg1;
- (id <JavaUtilList>)getRecordingAcksList;
- (int)getRecordingAcksCount;
- (_Bool)getAnonymous;
- (_Bool)hasAnonymous;
- (ComGoogleRtcMeetingsV1MeetingDevice_MediaState *)getAudioState;
- (_Bool)hasAudioState;
- (ComGoogleRtcMeetingsV1MeetingDevice_Privilege *)getPrivilegesWithInt:(int)arg1;
- (id <JavaUtilList>)getPrivilegesList;
- (int)getPrivilegesCount;
- (ComGoogleRtcMeetingsV1MeetingDevice_UnmuteRequest *)getAudioUnmuteRequest;
- (_Bool)hasAudioUnmuteRequest;
- (ComGoogleRtcMeetingsV1MeetingDevice_MuteRequest *)getVideoMuteRequest;
- (_Bool)hasVideoMuteRequest;
- (ComGoogleRtcMeetingsV1MeetingDevice_MuteRequest *)getAudioMuteRequest;
- (_Bool)hasAudioMuteRequest;
- (ComGoogleRtcMeetingsV1MeetingDevice_ClientType *)getClientType;
- (_Bool)hasClientType;
- (NSString *)getDeletedBy;
- (_Bool)hasDeletedBy;
- (_Bool)getDeleted;
- (_Bool)hasDeleted;
- (_Bool)getGuest;
- (_Bool)hasGuest;
- (NSString *)getP2PSessionId;
- (_Bool)hasP2PSessionId;
- (NSString *)getCloudSessionId;
- (_Bool)hasCloudSessionId;
- (NSString *)getMediaSessionIdWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getMediaSessionIdList;
- (int)getMediaSessionIdCount;
- (ComGoogleRtcMeetingsV1MeetingDevice_FinalStateReason *)getFinalStateReason;
- (_Bool)hasFinalStateReason;
- (_Bool)getJoined;
- (_Bool)hasJoined;
- (ComGoogleRtcMeetingsV1MeetingDevice_JoinState *)getJoinState;
- (_Bool)hasJoinState;
- (NSString *)getAvatarUrl;
- (_Bool)hasAvatarUrl;
- (ComGoogleRtcMeetingsV1MeetingDevice_DisplayNameInfo *)getDisplayNameInfo;
- (_Bool)hasDisplayNameInfo;
- (NSString *)getGivenName;
- (_Bool)hasGivenName;
- (NSString *)getDisplayName;
- (_Bool)hasDisplayName;
- (NSString *)getMeetingDeviceId;
- (_Bool)hasMeetingDeviceId;
@end

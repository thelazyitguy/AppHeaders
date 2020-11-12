//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GHMMeetingDevice_DisplayNameInfo, GHMMeetingDevice_MediaState, GHMMeetingDevice_MuteRequest, GHMMeetingDevice_PstnInfo, GHMMeetingDevice_UnmuteRequest, GPBEnumArray, NSMutableArray, NSString;

@interface GHMMeetingDevice : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool anonymous; // @dynamic anonymous;
@property(retain, nonatomic) GHMMeetingDevice_MuteRequest *audioMuteRequest; // @dynamic audioMuteRequest;
@property(retain, nonatomic) GHMMeetingDevice_MediaState *audioState; // @dynamic audioState;
@property(retain, nonatomic) GHMMeetingDevice_UnmuteRequest *audioUnmuteRequest; // @dynamic audioUnmuteRequest;
@property(copy, nonatomic) NSString *avatarURL; // @dynamic avatarURL;
@property(nonatomic) int clientType; // @dynamic clientType;
@property(copy, nonatomic) NSString *cloudSessionId; // @dynamic cloudSessionId;
@property(copy, nonatomic) NSString *createdBy; // @dynamic createdBy;
@property(nonatomic) _Bool deleted; // @dynamic deleted;
@property(copy, nonatomic) NSString *deletedBy; // @dynamic deletedBy;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(retain, nonatomic) GHMMeetingDevice_DisplayNameInfo *displayNameInfo; // @dynamic displayNameInfo;
@property(retain, nonatomic) GPBEnumArray *featuresArray; // @dynamic featuresArray;
@property(readonly, nonatomic) unsigned long long featuresArray_Count; // @dynamic featuresArray_Count;
@property(nonatomic) int finalStateReason; // @dynamic finalStateReason;
@property(copy, nonatomic) NSString *givenName; // @dynamic givenName;
@property(nonatomic) _Bool guest; // @dynamic guest;
@property(nonatomic) _Bool hasAudioMuteRequest; // @dynamic hasAudioMuteRequest;
@property(nonatomic) _Bool hasAudioState; // @dynamic hasAudioState;
@property(nonatomic) _Bool hasAudioUnmuteRequest; // @dynamic hasAudioUnmuteRequest;
@property(nonatomic) _Bool hasDisplayNameInfo; // @dynamic hasDisplayNameInfo;
@property(nonatomic) _Bool hasPstnInfo; // @dynamic hasPstnInfo;
@property(nonatomic) _Bool hasVideoMuteRequest; // @dynamic hasVideoMuteRequest;
@property(nonatomic) _Bool isPresentation; // @dynamic isPresentation;
@property(nonatomic) int joinState; // @dynamic joinState;
@property(nonatomic) _Bool joined; // @dynamic joined;
@property(nonatomic) int mediaCaptureType; // @dynamic mediaCaptureType;
@property(retain, nonatomic) NSMutableArray *mediaSessionIdArray; // @dynamic mediaSessionIdArray;
@property(readonly, nonatomic) unsigned long long mediaSessionIdArray_Count; // @dynamic mediaSessionIdArray_Count;
@property(copy, nonatomic) NSString *meetingDeviceId; // @dynamic meetingDeviceId;
@property(copy, nonatomic) NSString *p2PSessionId; // @dynamic p2PSessionId;
@property(copy, nonatomic) NSString *primaryDeviceId; // @dynamic primaryDeviceId;
@property(retain, nonatomic) GPBEnumArray *privilegesArray; // @dynamic privilegesArray;
@property(readonly, nonatomic) unsigned long long privilegesArray_Count; // @dynamic privilegesArray_Count;
@property(retain, nonatomic) GHMMeetingDevice_PstnInfo *pstnInfo; // @dynamic pstnInfo;
@property(retain, nonatomic) NSMutableArray *recordingAcksArray; // @dynamic recordingAcksArray;
@property(readonly, nonatomic) unsigned long long recordingAcksArray_Count; // @dynamic recordingAcksArray_Count;
@property(retain, nonatomic) NSMutableArray *recordingPrivilegesArray; // @dynamic recordingPrivilegesArray;
@property(readonly, nonatomic) unsigned long long recordingPrivilegesArray_Count; // @dynamic recordingPrivilegesArray_Count;
@property(retain, nonatomic) GHMMeetingDevice_MuteRequest *videoMuteRequest; // @dynamic videoMuteRequest;

@end

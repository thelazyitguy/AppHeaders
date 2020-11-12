//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GHMBreakoutMembersResponse, GHMBreakoutStateResponse, GHMDevicesResponse, GHMHandRaisesResponse, GHMMeetingInvitesResponse, GHMMessagesResponse, GHMPollSeriesMetadataResponse, GHMPollsResponse, GHMQuestionSeriesMetadataResponse, GHMQuestionsResponse, GHMSpaceResponse;

@interface GHMSyncMeetingSpaceCollectionsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GHMBreakoutMembersResponse *breakoutMembers; // @dynamic breakoutMembers;
@property(retain, nonatomic) GHMBreakoutStateResponse *breakoutState; // @dynamic breakoutState;
@property(retain, nonatomic) GHMDevicesResponse *devices; // @dynamic devices;
@property(retain, nonatomic) GHMHandRaisesResponse *handRaises; // @dynamic handRaises;
@property(nonatomic) _Bool hasBreakoutMembers; // @dynamic hasBreakoutMembers;
@property(nonatomic) _Bool hasBreakoutState; // @dynamic hasBreakoutState;
@property(nonatomic) _Bool hasDevices; // @dynamic hasDevices;
@property(nonatomic) _Bool hasHandRaises; // @dynamic hasHandRaises;
@property(nonatomic) _Bool hasMeetingInvitesResponse; // @dynamic hasMeetingInvitesResponse;
@property(nonatomic) _Bool hasMessages; // @dynamic hasMessages;
@property(nonatomic) _Bool hasPollSeriesMetadata; // @dynamic hasPollSeriesMetadata;
@property(nonatomic) _Bool hasPolls; // @dynamic hasPolls;
@property(nonatomic) _Bool hasQuestionSeriesMetadata; // @dynamic hasQuestionSeriesMetadata;
@property(nonatomic) _Bool hasQuestions; // @dynamic hasQuestions;
@property(nonatomic) _Bool hasSpace; // @dynamic hasSpace;
@property(retain, nonatomic) GHMMeetingInvitesResponse *meetingInvitesResponse; // @dynamic meetingInvitesResponse;
@property(retain, nonatomic) GHMMessagesResponse *messages; // @dynamic messages;
@property(retain, nonatomic) GHMPollSeriesMetadataResponse *pollSeriesMetadata; // @dynamic pollSeriesMetadata;
@property(retain, nonatomic) GHMPollsResponse *polls; // @dynamic polls;
@property(retain, nonatomic) GHMQuestionSeriesMetadataResponse *questionSeriesMetadata; // @dynamic questionSeriesMetadata;
@property(retain, nonatomic) GHMQuestionsResponse *questions; // @dynamic questions;
@property(retain, nonatomic) GHMSpaceResponse *space; // @dynamic space;

@end

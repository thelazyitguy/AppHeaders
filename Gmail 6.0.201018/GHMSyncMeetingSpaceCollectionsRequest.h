//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GHMBreakoutMembersRequest, GHMBreakoutStateRequest, GHMDevicesRequest, GHMHandRaisesRequest, GHMMeetingInvitesRequest, GHMMessagesRequest, GHMPollSeriesMetadataRequest, GHMPollsRequest, GHMQuestionSeriesMetadataRequest, GHMQuestionsRequest, GHMSpaceRequest, NSString;

@interface GHMSyncMeetingSpaceCollectionsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GHMBreakoutMembersRequest *breakoutMembersRequest; // @dynamic breakoutMembersRequest;
@property(retain, nonatomic) GHMBreakoutStateRequest *breakoutStateRequest; // @dynamic breakoutStateRequest;
@property(retain, nonatomic) GHMDevicesRequest *devicesRequest; // @dynamic devicesRequest;
@property(retain, nonatomic) GHMHandRaisesRequest *handRaisesRequest; // @dynamic handRaisesRequest;
@property(nonatomic) _Bool hasBreakoutMembersRequest; // @dynamic hasBreakoutMembersRequest;
@property(nonatomic) _Bool hasBreakoutStateRequest; // @dynamic hasBreakoutStateRequest;
@property(nonatomic) _Bool hasDevicesRequest; // @dynamic hasDevicesRequest;
@property(nonatomic) _Bool hasHandRaisesRequest; // @dynamic hasHandRaisesRequest;
@property(nonatomic) _Bool hasMeetingInvitesRequest; // @dynamic hasMeetingInvitesRequest;
@property(nonatomic) _Bool hasMessagesRequest; // @dynamic hasMessagesRequest;
@property(nonatomic) _Bool hasPollSeriesMetadataRequest; // @dynamic hasPollSeriesMetadataRequest;
@property(nonatomic) _Bool hasPollsRequest; // @dynamic hasPollsRequest;
@property(nonatomic) _Bool hasQuestionSeriesMetadataRequest; // @dynamic hasQuestionSeriesMetadataRequest;
@property(nonatomic) _Bool hasQuestionsRequest; // @dynamic hasQuestionsRequest;
@property(nonatomic) _Bool hasSpaceRequest; // @dynamic hasSpaceRequest;
@property(retain, nonatomic) GHMMeetingInvitesRequest *meetingInvitesRequest; // @dynamic meetingInvitesRequest;
@property(copy, nonatomic) NSString *meetingSpaceId; // @dynamic meetingSpaceId;
@property(retain, nonatomic) GHMMessagesRequest *messagesRequest; // @dynamic messagesRequest;
@property(retain, nonatomic) GHMPollSeriesMetadataRequest *pollSeriesMetadataRequest; // @dynamic pollSeriesMetadataRequest;
@property(retain, nonatomic) GHMPollsRequest *pollsRequest; // @dynamic pollsRequest;
@property(retain, nonatomic) GHMQuestionSeriesMetadataRequest *questionSeriesMetadataRequest; // @dynamic questionSeriesMetadataRequest;
@property(retain, nonatomic) GHMQuestionsRequest *questionsRequest; // @dynamic questionsRequest;
@property(retain, nonatomic) GHMSpaceRequest *spaceRequest; // @dynamic spaceRequest;

@end


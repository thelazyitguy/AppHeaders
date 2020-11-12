//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GHMMeetingBreakoutMembersPushNotification, GHMMeetingBreakoutStatePushNotification, GHMMeetingDevicesPushNotification, GHMMeetingHandRaisesPushNotification, GHMMeetingMessagesPushNotification, GHMMeetingPollSeriesPushNotification, GHMMeetingPollsPushNotification, GHMMeetingQuestionSeriesPushNotification, GHMMeetingQuestionsPushNotification, GHMMeetingRecordingsPushNotification, GHMMeetingSpacePushNotification;

@interface GHMMeetingsPushNotification : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GHMMeetingBreakoutMembersPushNotification *breakoutMembersUpdate; // @dynamic breakoutMembersUpdate;
@property(retain, nonatomic) GHMMeetingBreakoutStatePushNotification *breakoutStateUpdate; // @dynamic breakoutStateUpdate;
@property(retain, nonatomic) GHMMeetingDevicesPushNotification *devicesUpdate; // @dynamic devicesUpdate;
@property(retain, nonatomic) GHMMeetingHandRaisesPushNotification *handRaisesUpdate; // @dynamic handRaisesUpdate;
@property(nonatomic) _Bool hasBreakoutMembersUpdate; // @dynamic hasBreakoutMembersUpdate;
@property(nonatomic) _Bool hasBreakoutStateUpdate; // @dynamic hasBreakoutStateUpdate;
@property(nonatomic) _Bool hasDevicesUpdate; // @dynamic hasDevicesUpdate;
@property(nonatomic) _Bool hasHandRaisesUpdate; // @dynamic hasHandRaisesUpdate;
@property(nonatomic) _Bool hasMessagesUpdate; // @dynamic hasMessagesUpdate;
@property(nonatomic) _Bool hasPollSeriesUpdate; // @dynamic hasPollSeriesUpdate;
@property(nonatomic) _Bool hasPollsUpdate; // @dynamic hasPollsUpdate;
@property(nonatomic) _Bool hasQuestionSeriesUpdate; // @dynamic hasQuestionSeriesUpdate;
@property(nonatomic) _Bool hasQuestionsUpdate; // @dynamic hasQuestionsUpdate;
@property(nonatomic) _Bool hasRecordingsUpdate; // @dynamic hasRecordingsUpdate;
@property(nonatomic) _Bool hasSpaceUpdate; // @dynamic hasSpaceUpdate;
@property(retain, nonatomic) GHMMeetingMessagesPushNotification *messagesUpdate; // @dynamic messagesUpdate;
@property(retain, nonatomic) GHMMeetingPollSeriesPushNotification *pollSeriesUpdate; // @dynamic pollSeriesUpdate;
@property(retain, nonatomic) GHMMeetingPollsPushNotification *pollsUpdate; // @dynamic pollsUpdate;
@property(retain, nonatomic) GHMMeetingQuestionSeriesPushNotification *questionSeriesUpdate; // @dynamic questionSeriesUpdate;
@property(retain, nonatomic) GHMMeetingQuestionsPushNotification *questionsUpdate; // @dynamic questionsUpdate;
@property(retain, nonatomic) GHMMeetingRecordingsPushNotification *recordingsUpdate; // @dynamic recordingsUpdate;
@property(retain, nonatomic) GHMMeetingSpacePushNotification *spaceUpdate; // @dynamic spaceUpdate;

@end

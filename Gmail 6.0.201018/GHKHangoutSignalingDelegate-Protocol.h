//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GHMCaptionsEvent, HOPBHangoutMessage, HOPBPushNotification, NSData, NSDictionary, NSNumber, NSString;
@protocol GHKHangoutParticipant;

@protocol GHKHangoutSignalingDelegate <NSObject>
- (void)didLeaveWithSuccess:(_Bool)arg1;
- (void)didDisconnectWithStartupFailureCode:(int)arg1;
- (void)didDisconnectWithEndCause:(int)arg1;
- (void)didReceiveCloudSessionID:(NSString *)arg1;
- (_Bool)didJoin;

@optional
- (void)didReceiveCloudDenoiserEnabledStateUpdate:(int)arg1;
- (void)didReceiveCaptionsLanguageUpdate:(int)arg1 sourceLanguage:(int)arg2 captionsEnabled:(_Bool)arg3;
- (void)didReceiveCaptionsEnabledUpdate:(_Bool)arg1;
- (void)didReceiveCaptionsEvent:(GHMCaptionsEvent *)arg1;
- (void)didReceivePushNotification:(HOPBPushNotification *)arg1;
- (void)didReceiveHangoutMessage:(HOPBHangoutMessage *)arg1;
- (void)didReceiveClientData:(NSData *)arg1 sender:(NSString *)arg2;
- (void)didChangeUpstreamResolution:(struct CGSize)arg1;
- (void)didChangeLoudestParticipantID:(NSString *)arg1;
- (void)didChangeLocalAudioLevel:(NSNumber *)arg1 remoteAudioLevels:(NSDictionary *)arg2;
- (void)didReceiveAudioMuteRequestFromParticipantID:(NSString *)arg1;
- (void)didChangeVideoCroppableStateForParticipantID:(NSString *)arg1 croppable:(_Bool)arg2;
- (void)didChangeMuteStateForParticipantID:(NSString *)arg1 mediaType:(int)arg2 muted:(_Bool)arg3;
- (void)didRemoveParticipant:(id <GHKHangoutParticipant>)arg1;
- (void)didModifyParticipant:(id <GHKHangoutParticipant>)arg1;
- (void)didAddParticipant:(id <GHKHangoutParticipant>)arg1;
- (void)didUpdateLocalParticipantID:(NSString *)arg1;
- (void)didStopKnockingWithReason:(unsigned long long)arg1;
- (void)didStartKnockingRoomWithType:(unsigned long long)arg1;
- (void)didReceiveConversationID:(NSString *)arg1;
- (void)didReceiveHangoutTopic:(NSString *)arg1;
- (void)didReceiveHangoutID:(NSString *)arg1;
@end

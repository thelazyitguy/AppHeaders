//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC5Slack21SLKCallViewController.h"

@interface _TtC5Slack21SLKCallViewController (Slack2)
- (void)activeSpeakersScoreUpdatedFor:(id)arg1;
- (void)videoTileStateChangedFor:(id)arg1;
- (void)videoTileAddRemoveFor:(id)arg1;
- (void)videoDidStopWith:(long long)arg1;
- (void)videoDidStartWith:(long long)arg1;
- (void)callsClientFailedToConnectToCallServers:(id)arg1;
- (void)callsClient:(id)arg1 callerIDDidCancelCall:(id)arg2;
- (void)callsClient:(id)arg1 didRecieveNewActiveSpeakers:(id)arg2;
- (void)callsClient:(id)arg1 didShareCallToChannelNames:(id)arg2;
- (void)callsClient:(id)arg1 participantOutputVolumeChanged:(id)arg2 slackId:(id)arg3 newOutputVolumePercentage:(id)arg4;
- (void)callsClient:(id)arg1 participantCameraStateChanged:(id)arg2 slackId:(id)arg3 isCameraActive:(_Bool)arg4 isScreenShared:(_Bool)arg5;
- (void)callsClient:(id)arg1 participantMuteStateChanged:(id)arg2 slackId:(id)arg3 newMuteState:(_Bool)arg4 fromSource:(long long)arg5;
- (void)callsClient:(id)arg1 participantSignalStrengthChanged:(id)arg2 slackId:(id)arg3 newConnectionState:(long long)arg4;
- (void)callsClient:(id)arg1 participantConnectionChanged:(id)arg2 slackId:(id)arg3 newConnectionState:(long long)arg4;
- (void)callsClient:(id)arg1 participantNeverRespondedToCallInvite:(id)arg2;
- (void)callsClient:(id)arg1 participantLeft:(id)arg2 slackId:(id)arg3 wasConnectedAtEnd:(_Bool)arg4;
- (void)callsClient:(id)arg1 participantJoined:(id)arg2 slackId:(id)arg3 isNewlyJoined:(_Bool)arg4;
- (void)callsClient:(id)arg1 didRecieveNewCallName:(id)arg2;
- (void)callsClientDidResetCallPatricipants:(id)arg1;
- (void)callsClientReceivedCoreTelephonyCall:(id)arg1;
- (void)callsClient:(id)arg1 didJoinCallWithRoomID:(id)arg2 participantId:(id)arg3 slackId:(id)arg4;
- (void)callsClient:(id)arg1 didChange:(long long)arg2 userInfo:(id)arg3;
@end

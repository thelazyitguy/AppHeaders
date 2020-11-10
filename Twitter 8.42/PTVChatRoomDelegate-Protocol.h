//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString, PTVBroadcastViewersAndStats, PTVChatOccupant, PTVChatRoom, PTVMessage;

@protocol PTVChatRoomDelegate <NSObject>
- (void)chatRoomDidReceiveMessage:(PTVMessage *)arg1 isForReplay:(_Bool)arg2;

@optional
- (void)chatRoomDidReceiveBanType:(unsigned long long)arg1 duration:(double)arg2;
- (void)chatRoomDidReceiveModerationSentenceType:(unsigned long long)arg1 duration:(double)arg2;
- (void)chatRoomDidReceiveBroadcastViewersAndStats:(PTVBroadcastViewersAndStats *)arg1;
- (void)chatRoomOccupantDidLeave:(PTVChatOccupant *)arg1;
- (void)chatRoomOccupantDidJoin:(PTVChatOccupant *)arg1 isFollowing:(_Bool)arg2;
- (void)chatRoomDidReceiveAuthenticationError:(NSError *)arg1;
- (void)chatRoomConnectionDidFail;
- (void)chatRoom:(PTVChatRoom *)arg1 didChangeState:(unsigned long long)arg2 error:(NSError *)arg3;
- (void)chatRoomDidSubscribeWithSuccess:(_Bool)arg1;
- (void)chatRoomDidLogEvent:(NSString *)arg1;
- (void)chatRoomDidJoin;
- (void)chatRoomDidReceivePresenceEvent:(NSDictionary *)arg1;
@end


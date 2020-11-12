//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SendBirdSDK/NSObject-Protocol.h>

@class NSData, NSError, NSString, SendBird_SRWebSocket;

@protocol SendBird_SRWebSocketDelegate <NSObject>

@optional
- (_Bool)webSocketShouldConvertTextFrameToString:(SendBird_SRWebSocket *)arg1;
- (void)webSocket:(SendBird_SRWebSocket *)arg1 didReceivePong:(NSData *)arg2;
- (void)webSocket:(SendBird_SRWebSocket *)arg1 didReceivePingWithData:(NSData *)arg2;
- (void)webSocket:(SendBird_SRWebSocket *)arg1 didCloseWithCode:(long long)arg2 reason:(NSString *)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(SendBird_SRWebSocket *)arg1 didFailWithError:(NSError *)arg2;
- (void)webSocketDidOpen:(SendBird_SRWebSocket *)arg1;
- (void)webSocket:(SendBird_SRWebSocket *)arg1 didReceiveMessageWithData:(NSData *)arg2;
- (void)webSocket:(SendBird_SRWebSocket *)arg1 didReceiveMessageWithString:(NSString *)arg2;
- (void)webSocket:(SendBird_SRWebSocket *)arg1 didReceiveMessage:(id)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Leanplum_WebSocket, NSMutableArray, NSMutableDictionary, NSString, NSTimer;
@protocol Leanplum_SocketIODelegate;

@interface Leanplum_SocketIO : NSObject
{
    NSString *_host;
    long long _port;
    NSString *_sid;
    id <Leanplum_SocketIODelegate> _delegate;
    Leanplum_WebSocket *_webSocket;
    _Bool _isConnected;
    _Bool _isConnecting;
    _Bool _useTLS;
    double _heartbeatTimeout;
    NSTimer *_timeout;
    NSMutableArray *_queue;
    NSMutableDictionary *_acks;
    long long _ackCount;
}

+ (id)arrayOfCaptureComponentsOfString:(id)arg1 matchedByRegex:(id)arg2;
+ (id)arrayOfCaptureComponentsOfString:(id)arg1 matchedBy:(id)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)log:(id)arg1;
- (void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocketDidOpen:(id)arg1;
- (void)webSocketDidClose:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)setTimeout;
- (void)onTimeout;
- (void)removeAcknowledgeForKey:(id)arg1;
- (id)addAcknowledge:(SEL)arg1;
- (void)onDisconnect;
- (void)onConnect;
- (void)doQueue;
- (void)handleAck:(id)arg1 regexPieces:(id)arg2;
- (void)onData:(id)arg1;
- (void)send:(id)arg1;
- (void)sendHeartbeat;
- (void)sendDisconnect;
- (void)openSocket;
- (void)sendAcknowledgement:(id)arg1 withArgs:(id)arg2;
- (void)sendEvent:(id)arg1 withData:(id)arg2 andAcknowledge:(SEL)arg3;
- (void)sendEvent:(id)arg1 withData:(id)arg2;
- (void)sendJSON:(id)arg1 withAcknowledge:(SEL)arg2;
- (void)sendJSON:(id)arg1;
- (void)sendMessage:(id)arg1 withAcknowledge:(SEL)arg2;
- (void)sendMessage:(id)arg1;
- (void)disconnect;
- (void)connectWithEngine:(id)arg1 withHost:(id)arg2 onPort:(long long)arg3 secureConnection:(_Bool)arg4;
- (void)connectWithEngine:(id)arg1 withHost:(id)arg2 onPort:(long long)arg3;
- (id)initWithDelegate:(id)arg1;

@end

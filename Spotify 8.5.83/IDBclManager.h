//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDBclBroadcastSender-Protocol.h"
#import "IDConnectionMultiplexerDelegate-Protocol.h"
#import "IDStreamProviderDelegate-Protocol.h"

@class IDConnectionMultiplexer, NSConditionLock, NSString;
@protocol IDBclBroadcastReceiver, IDBclManagerDelegate, IDStreamProvider;

@interface IDBclManager : NSObject <IDStreamProviderDelegate, IDConnectionMultiplexerDelegate, IDBclBroadcastSender>
{
    float _handshakeTimeout;
    id <IDBclManagerDelegate> _delegate;
    id <IDBclBroadcastReceiver> _broadcastReceiver;
    id <IDStreamProvider> _streamProvider;
    NSConditionLock *_stateCondition;
    NSConditionLock *_connectionCondition;
    IDConnectionMultiplexer *_multiplexer;
    CDUnknownBlockType _handshakeTimeoutBlock;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType handshakeTimeoutBlock; // @synthesize handshakeTimeoutBlock=_handshakeTimeoutBlock;
@property float handshakeTimeout; // @synthesize handshakeTimeout=_handshakeTimeout;
@property(retain) IDConnectionMultiplexer *multiplexer; // @synthesize multiplexer=_multiplexer;
@property(retain) NSConditionLock *connectionCondition; // @synthesize connectionCondition=_connectionCondition;
@property(retain) NSConditionLock *stateCondition; // @synthesize stateCondition=_stateCondition;
@property(retain) id <IDStreamProvider> streamProvider; // @synthesize streamProvider=_streamProvider;
@property __weak id <IDBclBroadcastReceiver> broadcastReceiver; // @synthesize broadcastReceiver=_broadcastReceiver;
@property __weak id <IDBclManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)stringFromIDBclConnectionToAccessoryState:(unsigned long long)arg1;
- (id)stringFromIDBclManagerState:(unsigned long long)arg1;
- (id)selectedProtocol;
- (_Bool)connectionSupportsMultisession;
- (_Bool)shouldRegisterForiAPAppLaunch;
- (_Bool)shouldEnqueProtocolInUseNotification;
- (void)stopMultiplexer;
- (_Bool)tryStartHandshakeWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)startConnectionWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)streamProvider:(id)arg1 didFailToStartWithError:(id)arg2;
- (void)streamProvider:(id)arg1 didFailToResolveStreamsWithError:(id)arg2;
- (void)streamProviderWillDiscardStreams:(id)arg1;
- (void)streamProvider:(id)arg1 didResolveInputStream:(id)arg2 outputStream:(id)arg3;
- (void)enqueueRequestApplicationLaunch:(id)arg1;
- (void)enqueueRegisterForApplicationLaunch:(id)arg1 registerPacketType:(unsigned long long)arg2;
- (void)registerApplicationForApplicationLaunch;
- (void)enqueueBroadcastProtocolResponseForRequest:(id)arg1;
- (void)enqueueProtocolInUseNotification;
- (void)forwardBroadcast:(id)arg1;
- (void)processBroadcast:(id)arg1;
- (void)sendBroadcast:(id)arg1;
- (void)connectionMultiplexer:(id)arg1 didReceiveBroadcast:(id)arg2;
- (void)connectionMultiplexerDidReceiveHangup:(id)arg1;
- (void)connectionMultiplexerDidReceiveEndOfStreamFromA4AConnection:(id)arg1;
- (void)connectionMultiplexerDidFinishHandshake:(id)arg1;
- (void)connectionMultiplexer:(id)arg1 errorOccurred:(id)arg2;
- (void)cancelHandshakeTimeout;
- (void)handleHandshakeTimeoutDispatched:(float)arg1;
- (void)waitForHandshakeWithTimeout:(float)arg1;
- (void)stop;
- (void)startWithStreamProvider:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)proxyInfo;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
@property(readonly, nonatomic, getter=isStarted) _Bool started;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


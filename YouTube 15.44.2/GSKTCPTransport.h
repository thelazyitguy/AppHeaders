//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GSKTransport.h>

#import <Module_Framework/NSStreamDelegate-Protocol.h>

@class NSInputStream, NSMutableArray, NSOutputStream, NSString;

@interface GSKTCPTransport : GSKTransport <NSStreamDelegate>
{
    NSMutableArray *_requestDataQueue;
    NSInputStream *_receiveStream;
    NSOutputStream *_sendStream;
    int _state;
}

- (void).cxx_destruct;
- (long long)type;
- (id)name;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)disconnect;
- (id)sendQueuedRequests;
- (id)sendEndOfStream;
- (id)sendData:(id)arg1 forRequest:(id)arg2;
- (id)sendInitialHeader:(id)arg1;
- (void)openStreamsWithHost:(id)arg1 port:(long long)arg2 useSSL:(_Bool)arg3;
- (void)connectToHost:(id)arg1 port:(long long)arg2 useSSL:(_Bool)arg3;
- (void)connectWithSSL:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


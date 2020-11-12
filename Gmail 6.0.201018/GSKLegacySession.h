//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSKSessionInternalProtocol-Protocol.h"
#import "GSKTransportDelegate-Protocol.h"

@class GSKHTTPTransport, GSKSessionConfig, GSKTCPTransport, GSKTransport, NSMutableArray, NSMutableData, NSString, NSTimer;
@protocol GSKSessionDelegate, GSKSessionLogger;

@interface GSKLegacySession : NSObject <GSKTransportDelegate, GSKSessionInternalProtocol>
{
    _Bool _isTcpEnabled;
    _Bool _isHttpEnabled;
    _Bool _useHttpTransport;
    GSKTransport *_transport;
    NSMutableData *_unparsedBuffer;
    NSMutableArray *_requestQueue;
    _Bool _isStarted;
    GSKSessionConfig *_config;
    id <GSKSessionDelegate> _delegate;
    long long _state;
    id <GSKSessionLogger> _logger;
    GSKTCPTransport *_tcpTransport;
    GSKHTTPTransport *_httpTransport;
    NSTimer *_httpStartDelayTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *httpStartDelayTimer; // @synthesize httpStartDelayTimer=_httpStartDelayTimer;
@property(retain, nonatomic) GSKHTTPTransport *httpTransport; // @synthesize httpTransport=_httpTransport;
@property(retain, nonatomic) GSKTCPTransport *tcpTransport; // @synthesize tcpTransport=_tcpTransport;
@property(nonatomic) __weak id <GSKSessionLogger> logger; // @synthesize logger=_logger;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(nonatomic) __weak id <GSKSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GSKSessionConfig *config; // @synthesize config=_config;
- (void)transport:(id)arg1 didReceiveData:(id)arg2;
- (id)initialHeader;
- (id)sendQueuedRequests;
- (id)serializeRequest:(id)arg1;
- (void)transport:(id)arg1 didCloseWithError:(id)arg2;
- (void)transportDidConnect:(id)arg1;
- (id)sendRequest:(id)arg1;
- (void)stopSession;
- (void)startSession;
- (void)disconnectWithError:(id)arg1;
- (void)disconnect;
- (void)disconnectHttpTransport;
- (void)disconnectTcpTransport;
- (void)connect;
- (void)connectViaHttp;
- (void)connectViaTcp;
- (void)cancelHttpFallback;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

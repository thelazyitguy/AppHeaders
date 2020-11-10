//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SocketParser-Protocol.h"
#import "SocketSessionDelegate-Protocol.h"

@class NSString, SocketSession;
@protocol TranscodingUpdateParserDelegate;

@interface TranscodingUpdateParser : NSObject <SocketSessionDelegate, SocketParser>
{
    id <TranscodingUpdateParserDelegate> _delegate;
    SocketSession *_socketSession;
    long long _transcodingState;
}

+ (id)transcodingUpdateSessionWithWebsocketURL:(id)arg1 delegate:(id)arg2 useSystemAPI:(_Bool)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long transcodingState; // @synthesize transcodingState=_transcodingState;
@property(retain, nonatomic) SocketSession *socketSession; // @synthesize socketSession=_socketSession;
@property(nonatomic) __weak id <TranscodingUpdateParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)socketSessionHasClosed:(id)arg1;
- (void)socketSessionDidConnect:(id)arg1;
- (void)socketSession:(id)arg1 didLoseConnectionWithCloseCode:(long long)arg2;
- (void)socketSession:(id)arg1 didLoseConnectionWithError:(id)arg2;
- (void)parseData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


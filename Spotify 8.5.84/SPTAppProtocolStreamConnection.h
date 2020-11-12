//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"
#import "SPTAppProtocolConnection-Protocol.h"

@class NSInputStream, NSMutableData, NSOutputStream, NSString;
@protocol SPTAppProtocolConnectionDelegate, SPTAppProtocolConnectionOutput, SPTExternalIntegrationDebugLog;

@interface SPTAppProtocolStreamConnection : NSObject <NSStreamDelegate, SPTAppProtocolConnection>
{
    _Bool _open;
    unsigned int _curBytesToGo;
    id <SPTAppProtocolConnectionOutput> _messageReceiver;
    id <SPTAppProtocolConnectionDelegate> _connectionDelegate;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    unsigned long long _readPhase;
    NSMutableData *_readBuffer;
    NSMutableData *_writeBuffer;
    id <SPTExternalIntegrationDebugLog> _debugLog;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTExternalIntegrationDebugLog> debugLog; // @synthesize debugLog=_debugLog;
@property(retain, nonatomic) NSMutableData *writeBuffer; // @synthesize writeBuffer=_writeBuffer;
@property(retain, nonatomic) NSMutableData *readBuffer; // @synthesize readBuffer=_readBuffer;
@property(nonatomic) unsigned int curBytesToGo; // @synthesize curBytesToGo=_curBytesToGo;
@property(nonatomic) unsigned long long readPhase; // @synthesize readPhase=_readPhase;
@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(nonatomic) __weak id <SPTAppProtocolConnectionDelegate> connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
@property(nonatomic) __weak id <SPTAppProtocolConnectionOutput> messageReceiver; // @synthesize messageReceiver=_messageReceiver;
@property(readonly, getter=isOpen) _Bool open; // @synthesize open=_open;
- (void)addMessageToOutputBuffer:(id)arg1;
- (void)writeToOutputStream;
- (void)readFromInputStream;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)sendMessage:(id)arg1 userInfo:(id)arg2;
- (void)close;
- (void)closeByRequest:(_Bool)arg1;
- (void)closeDueToSocketError:(_Bool)arg1;
- (void)open;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 debugLog:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

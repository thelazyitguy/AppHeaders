//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MDXChannel-Protocol.h>
#import <Module_Framework/MDXWebSocketServerDelegate-Protocol.h>

@class MDXWebSocketServer, NSString, NSURL;
@protocol MDXChannelObserver;

@interface MDXLocalWebSocketChannel : NSObject <MDXWebSocketServerDelegate, MDXChannel>
{
    MDXWebSocketServer *_webSocketServer;
    _Bool _initialized;
    long long _connectionState;
    id <MDXChannelObserver> _observer;
    NSString *_encryptionKey;
    NSString *_protocolVersion;
}

+ (id)supportedEncryptionOnlyMessageSet;
+ (id)supportedUnencryptedMessageSet;
+ (id)MDXWebSocketServerEventPlayloadWithType:(int)arg1 launchFailure:(id)arg2;
+ (void)logWebSocketServerEventWithType:(int)arg1 launchFailure:(id)arg2;
+ (void)logWebSocketServerEventWithType:(int)arg1;
+ (id)webSocketServerWithError:(id *)arg1;
+ (id)channelWithError:(id *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) NSString *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(nonatomic) __weak id <MDXChannelObserver> observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
- (_Bool)isCryptAllowed;
- (_Bool)messageShouldBeDecrypted:(id)arg1;
- (_Bool)messageShouldBeEncrypted:(id)arg1;
- (_Bool)isSupportedProtocolVersion;
- (id)encodedDataForArrayRepresentedMessage:(id)arg1 error:(id *)arg2;
- (id)decryptedMessageFromMessage:(id)arg1 error:(id *)arg2;
- (id)encryptedMessageFromMessage:(id)arg1 error:(id *)arg2;
- (void)webSocketServer:(id)arg1 didEncounterError:(id)arg2;
- (void)webSocketServer:(id)arg1 didReceiveMessage:(id)arg2;
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1;
- (void)disconnectWithUserAction:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)connectWithUserAction:(_Bool)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isMessageSupported:(id)arg1;
@property(readonly, nonatomic) NSURL *channelURL;
- (id)initWithServer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


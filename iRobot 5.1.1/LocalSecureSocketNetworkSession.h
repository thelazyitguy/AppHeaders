//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePlatform/GCDAsyncSocketDelegate-Protocol.h>
#import <CorePlatform/NetworkAddressSession-Protocol.h>

@class CMRAssetId, CMRNetworkAddress, CMRNetworkSessionCallback, CMRNetworkStatistics, CMRNetworkStatisticsToken, GCDAsyncSocket, NSDictionary, NSMutableData, NSString;
@protocol OS_dispatch_queue;

@interface LocalSecureSocketNetworkSession : NSObject <GCDAsyncSocketDelegate, NetworkAddressSession>
{
    CMRAssetId *_assetId;
    CMRNetworkAddress *_networkAddress;
    int _bSSLUse;
    double _connectionTimeout;
    GCDAsyncSocket *_socket;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    _Bool _isDisconnecting;
    NSDictionary *_attributes;
    CMRNetworkSessionCallback *_callback;
    CMRNetworkStatistics *_networkStats;
    CMRNetworkStatisticsToken *_sslHandshakeToken;
    unsigned long long _kMaxNumberEncodedLengthBytes;
    NSMutableData *_currentMessageBuffer;
}

- (void).cxx_destruct;
@property _Bool isDisconnecting; // @synthesize isDisconnecting=_isDisconnecting;
@property(retain, nonatomic) NSMutableData *currentMessageBuffer; // @synthesize currentMessageBuffer=_currentMessageBuffer;
@property(nonatomic) unsigned long long kMaxNumberEncodedLengthBytes; // @synthesize kMaxNumberEncodedLengthBytes=_kMaxNumberEncodedLengthBytes;
@property(retain, nonatomic) CMRNetworkStatisticsToken *sslHandshakeToken; // @synthesize sslHandshakeToken=_sslHandshakeToken;
@property(readonly, nonatomic) CMRNetworkStatistics *networkStats; // @synthesize networkStats=_networkStats;
@property(readonly, nonatomic) CMRNetworkSessionCallback *callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) CMRNetworkAddress *networkAddress; // @synthesize networkAddress=_networkAddress;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) CMRAssetId *assetId; // @synthesize assetId=_assetId;
- (void)notifySocketDisconnected;
- (void)notifySocketConnected;
- (void)notifyCallbackOnSuccessWithData:(id)arg1;
- (void)notifyCallbackOnFailureWithError:(id)arg1;
- (void)socket:(id)arg1 didReceiveTrust:(struct __SecTrust *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)socketDidCloseReadStream:(id)arg1;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socketDidSecure:(id)arg1;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)invalidate;
- (void)sendRequest:(id)arg1 attributes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)start;
- (id)initWithAttributes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


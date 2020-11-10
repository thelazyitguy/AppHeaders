//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GCKCastChannelMessageSink-Protocol.h>
#import <Module_Framework/GCKCastMessageDesegmenterDelegate-Protocol.h>
#import <Module_Framework/GCKCastMessageSegmenterDelegate-Protocol.h>
#import <Module_Framework/GCKCastSocketDelegate-Protocol.h>
#import <Module_Framework/GCKConnectionControlChannelDelegate-Protocol.h>
#import <Module_Framework/GCKDeviceAuthChannelDelegate-Protocol.h>
#import <Module_Framework/GCKHeartbeatChannelDelegate-Protocol.h>
#import <Module_Framework/GCKProximityInfoChannelDelegate-Protocol.h>

@class GCKCastMessageDesegmenter, GCKCastMessageSegmenter, GCKCastSocket, GCKConnectionControlChannel, GCKDatabase, GCKDevice, GCKDeviceAuthChannel, GCKError, GCKHeartbeatChannel, GCKNNetworkReachability, GCKProximityInfoChannel, GCKReconnectStrategy, NSData, NSMutableDictionary, NSString, NSTimer;
@protocol GCKCastDeviceConnectorDelegate;

@interface GCKCastDeviceConnector : NSObject <GCKProximityInfoChannelDelegate, GCKCastSocketDelegate, GCKConnectionControlChannelDelegate, GCKDeviceAuthChannelDelegate, GCKHeartbeatChannelDelegate, GCKCastChannelMessageSink, GCKCastMessageSegmenterDelegate, GCKCastMessageDesegmenterDelegate>
{
    GCKDatabase *_database;
    GCKNNetworkReachability *_networkReachability;
    NSString *_clientPackageName;
    NSString *_sourceID;
    NSMutableDictionary *_channels;
    GCKCastSocket *_socket;
    GCKCastMessageDesegmenter *_desegmenter;
    GCKCastMessageSegmenter *_segmenter;
    NSData *_nextChunkToSend;
    long long _nextRequestID;
    long long _negotiatedProtocolVersion;
    double _inactivityTimeout;
    _Bool _isRegisteredForAppStateNotifications;
    _Bool _wasConnected;
    _Bool _connectionSuspended;
    _Bool _reconnectAfterDisconnected;
    _Bool _guestMode;
    _Bool _relayCastMode;
    GCKError *_disconnectionError;
    NSTimer *_flushTimer;
    NSTimer *_reconnectTimer;
    GCKReconnectStrategy *_reconnectStrategy;
    NSString *_networkIDWhenConnectionStarted;
    _Bool _isReconnecting;
    long long _connectionState;
    GCKDevice *_device;
    id <GCKCastDeviceConnectorDelegate> _delegate;
    NSString *_currentDestinationID;
    GCKConnectionControlChannel *_connectionControlChannel;
    GCKDeviceAuthChannel *_deviceAuthChannel;
    GCKHeartbeatChannel *_heartbeatChannel;
    GCKProximityInfoChannel *_proximityInfoChannel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCKProximityInfoChannel *proximityInfoChannel; // @synthesize proximityInfoChannel=_proximityInfoChannel;
@property(retain, nonatomic) GCKHeartbeatChannel *heartbeatChannel; // @synthesize heartbeatChannel=_heartbeatChannel;
@property(retain, nonatomic) GCKDeviceAuthChannel *deviceAuthChannel; // @synthesize deviceAuthChannel=_deviceAuthChannel;
@property(retain, nonatomic) GCKConnectionControlChannel *connectionControlChannel; // @synthesize connectionControlChannel=_connectionControlChannel;
@property(copy, nonatomic) NSString *currentDestinationID; // @synthesize currentDestinationID=_currentDestinationID;
@property(nonatomic) __weak id <GCKCastDeviceConnectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GCKDevice *device; // @synthesize device=_device;
@property(nonatomic) _Bool isReconnecting; // @synthesize isReconnecting=_isReconnecting;
@property(nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
- (_Bool)isEndpointDeviceIDValid:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)notifyDidFailToFetchRelayAccessTokenWithError:(id)arg1;
- (void)notifyDidFetchRelayAccessTokenForDevice:(id)arg1;
- (void)notifyDidUpdateDevice;
- (void)notifyDidDisconnectWithError:(id)arg1 willTryToReconnect:(_Bool)arg2;
- (void)notifyDidDisconnect;
- (void)notifyDidFailToConnectWithError:(id)arg1 willTryToReconnect:(_Bool)arg2;
- (void)notifyDidConnect;
- (void)notifyWillConnectWithDeviceConnectionType:(int)arg1;
- (void)proximityInfoChannel:(id)arg1 didFailToReceiveProximityInfoWithError:(id)arg2;
- (void)proximityInfoChannel:(id)arg1 didReceiveProximityInfo:(id)arg2;
- (void)heartbeatChannelDidTimeout:(id)arg1;
- (void)deviceAuthChannel:(id)arg1 didFailToFetchRelayAccessTokenWithError:(id)arg2;
- (void)deviceAuthChannel:(id)arg1 didFetchRelayAccessTokenForDevice:(id)arg2;
- (void)deviceAuthChannel:(id)arg1 didFailToAuthenticateWithError:(id)arg2;
- (void)deviceAuthChannelDidAuthenticate:(id)arg1;
- (void)connectionControlChannel:(id)arg1 didFailToConnectWithError:(id)arg2;
- (void)connectionControlChannel:(id)arg1 didConnectWithNegotiatedProtocolVersion:(long long)arg2;
- (void)handleConnectionError:(id)arg1;
- (void)castSocket:(id)arg1 didDisconnectWithError:(id)arg2;
- (void)castSocket:(id)arg1 canAcceptDataOfLength:(unsigned long long)arg2;
- (void)castSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (void)castSocket:(id)arg1 didFailToConnectWithError:(id)arg2;
- (void)castSocket:(id)arg1 didConnectWithPeerSecurityTrust:(id)arg2;
- (void)castMessageDesegmenter:(id)arg1 didProduceBinaryMessage:(id)arg2 withNamespace:(id)arg3 destinationID:(id)arg4;
- (void)castMessageDesegmenter:(id)arg1 didProduceTextMessage:(id)arg2 withNamespace:(id)arg3 destinationID:(id)arg4;
- (void)castMessageSegmenterDidClear:(id)arg1;
- (void)castMessageSegmenter:(id)arg1 queueFullStatusDidChangeTo:(_Bool)arg2 forNamespace:(id)arg3;
- (long long)generateRequestID;
- (long long)sendBinaryMessage:(id)arg1 withNamespace:(id)arg2;
- (long long)sendBinaryMessage:(id)arg1 withNamespace:(id)arg2 toDestinationID:(id)arg3;
- (long long)sendTextMessage:(id)arg1 withNamespace:(id)arg2;
- (long long)sendTextMessage:(id)arg1 withNamespace:(id)arg2 toDestinationID:(id)arg3;
- (void)clearReconnectState;
- (void)reconnectTimerDidFire:(id)arg1;
- (_Bool)scheduleReconnect;
@property(nonatomic) double reconnectTimeout;
- (void)sendMessages;
- (_Bool)disconnectFromCurrentDestination;
- (_Bool)connectToDestination:(id)arg1 connectionType:(long long)arg2;
- (void)disconnectNonInternalChannels;
- (void)disconnectChannel:(id)arg1;
- (void)connectChannelsForNamespaces:(id)arg1;
- (void)connectChannel:(id)arg1;
- (void)flushTimerDidFire:(id)arg1;
- (void)disconnectWithError:(id)arg1;
- (void)connectInternalUnchecked;
- (int)deviceConnectionType;
- (id)createConnectionControlChannel;
- (id)createDeviceAuthChannelForDevice:(id)arg1 peerTrust:(id)arg2;
- (id)createCastSocketWithAddressType:(long long)arg1;
- (void)finishDisconnecting;
- (void)finishConnecting;
- (void)connectToChannelsAndFinishConnecting;
- (long long)sendMessageWithNamespace:(id)arg1 toDestinationID:(id)arg2 stringPayload:(id)arg3 binaryPayload:(id)arg4;
- (_Bool)removeChannel:(id)arg1;
- (_Bool)addChannel:(id)arg1 autoConnect:(_Bool)arg2;
- (void)disconnect;
- (void)connect;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 clientPackageName:(id)arg2 reconnectStrategy:(id)arg3 database:(id)arg4 networkReachability:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


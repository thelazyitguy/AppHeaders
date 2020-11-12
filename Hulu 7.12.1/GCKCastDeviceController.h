//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GoogleCast/GCKBroadcastKeyExchangeChannelDelegate-Protocol.h>
#import <GoogleCast/GCKCastDeviceConnectorDelegate-Protocol.h>
#import <GoogleCast/GCKDiscoveryChannelDelegate-Protocol.h>
#import <GoogleCast/GCKMultizoneControlChannelDelegate-Protocol.h>
#import <GoogleCast/GCKReceiverControlChannelDelegate-Protocol.h>

@class GCKAnalyticsEventLogger, GCKApplicationMetadata, GCKBroadcastKeyExchangeChannel, GCKCastDeviceConnector, GCKDatabase, GCKDevice, GCKDiscoveryChannel, GCKJoinOptions, GCKLaunchOptions, GCKMultizoneControlChannel, GCKReceiverControlChannel, GCKRequest, GCKRuntimeConfiguration, NSArray, NSMutableDictionary, NSString;
@protocol GCKAppContextInformationProvider, GCKCastDeviceControllerDelegate, GCKCastDeviceControllerInternalDelegate;

@interface GCKCastDeviceController : NSObject <GCKCastDeviceConnectorDelegate, GCKReceiverControlChannelDelegate, GCKMultizoneControlChannelDelegate, GCKDiscoveryChannelDelegate, GCKBroadcastKeyExchangeChannelDelegate>
{
    GCKAnalyticsEventLogger *_analyticsEventLogger;
    GCKDatabase *_database;
    GCKRuntimeConfiguration *_runtimeConfiguration;
    GCKCastDeviceConnector *_connector;
    GCKReceiverControlChannel *_receiverControlChannel;
    GCKMultizoneControlChannel *_multizoneControlChannel;
    GCKDiscoveryChannel *_discoveryChannel;
    GCKBroadcastKeyExchangeChannel *_broadcastKeyExchangeChannel;
    NSString *_applicationIDToLaunch;
    NSString *_applicationIDToJoin;
    NSString *_sessionIDToJoin;
    GCKLaunchOptions *_launchOptionsIfJoinFails;
    GCKJoinOptions *_joinOptions;
    NSString *_pausedAppID;
    NSString *_pausedSessionID;
    long long _statusRequestID;
    long long _loggingSessionID;
    NSMutableDictionary *_requests;
    _Bool _shouldLaunchIfJoinFails;
    long long _stopAppRequestID;
    GCKRequest *_stopRequest;
    long long _joinAppRequestID;
    GCKRequest *_joinRequest;
    long long _launchAppRequestID;
    GCKRequest *_launchRequest;
    long long _lastReceivedReceiverStatusRequestID;
    NSArray *_supportedApplicationTypes;
    _Bool _isReconnecting;
    _Bool _deviceMuted;
    _Bool _deviceSupportsMuting;
    _Bool _castToNativeEnabled;
    float _deviceVolume;
    float _deviceMinimumVolume;
    float _deviceMaximumVolume;
    float _deviceVolumeIncrement;
    long long _applicationConnectionState;
    id <GCKCastDeviceControllerDelegate> _delegate;
    long long _activeInputStatus;
    long long _standbyStatus;
    NSString *_applicationSessionID;
    GCKApplicationMetadata *_applicationMetadata;
    NSString *_applicationStatusText;
    long long _hashedDeviceID;
    id <GCKAppContextInformationProvider> _appContextInformationProvider;
    id <GCKCastDeviceControllerInternalDelegate> _internalDelegate;
}

+ (_Bool)doesSupportedAppTypes:(id)arg1 containsAppType:(id)arg2;
+ (_Bool)canJoinActiveApplicationWithSenderAppID:(id)arg1 applicationStatus:(id)arg2 sessionID:(id)arg3 supportedAppTypes:(id)arg4 isCastToNativeEnabled:(_Bool)arg5 isInvisibleConnectionTypeWhenJoining:(_Bool)arg6;
+ (id)loggingSessionCounter;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isCastToNativeEnabled) _Bool castToNativeEnabled; // @synthesize castToNativeEnabled=_castToNativeEnabled;
@property(nonatomic) __weak id <GCKCastDeviceControllerInternalDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(nonatomic) float deviceVolumeIncrement; // @synthesize deviceVolumeIncrement=_deviceVolumeIncrement;
@property(nonatomic) _Bool deviceSupportsMuting; // @synthesize deviceSupportsMuting=_deviceSupportsMuting;
@property(nonatomic) float deviceMaximumVolume; // @synthesize deviceMaximumVolume=_deviceMaximumVolume;
@property(nonatomic) float deviceMinimumVolume; // @synthesize deviceMinimumVolume=_deviceMinimumVolume;
@property(readonly, nonatomic) id <GCKAppContextInformationProvider> appContextInformationProvider; // @synthesize appContextInformationProvider=_appContextInformationProvider;
@property(readonly, nonatomic) long long hashedDeviceID; // @synthesize hashedDeviceID=_hashedDeviceID;
@property(copy, nonatomic) NSString *applicationStatusText; // @synthesize applicationStatusText=_applicationStatusText;
@property(copy, nonatomic) GCKApplicationMetadata *applicationMetadata; // @synthesize applicationMetadata=_applicationMetadata;
@property(copy, nonatomic) NSString *applicationSessionID; // @synthesize applicationSessionID=_applicationSessionID;
@property(nonatomic) long long standbyStatus; // @synthesize standbyStatus=_standbyStatus;
@property(nonatomic) long long activeInputStatus; // @synthesize activeInputStatus=_activeInputStatus;
@property(nonatomic) _Bool deviceMuted; // @synthesize deviceMuted=_deviceMuted;
@property(nonatomic) float deviceVolume; // @synthesize deviceVolume=_deviceVolume;
@property(nonatomic) __weak id <GCKCastDeviceControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isReconnecting; // @synthesize isReconnecting=_isReconnecting;
@property(nonatomic) long long applicationConnectionState; // @synthesize applicationConnectionState=_applicationConnectionState;
@property(readonly, copy) NSString *description;
- (void)notifyDidUpdateToEndpoint:(id)arg1 withFailedToMoveDeviceIDs:(id)arg2;
- (void)notifyDidUpdateDevice;
- (void)notifyDidFailToReceiveWrappedSenderKeyForSenderKey:(id)arg1 withError:(id)arg2;
- (void)notifyDidReceiveWrappedSenderKey:(id)arg1 forSenderKey:(id)arg2;
- (void)notifyDidRemoveMultizoneDevice:(id)arg1;
- (void)notifyDidUpdateMultizoneDevice:(id)arg1;
- (void)notifyDidAddMultizoneDevice:(id)arg1;
- (void)notifyDidReceiveMultizoneStatus:(id)arg1;
- (void)notifyDidReceiveDeviceInformation:(id)arg1;
- (void)notifyDidUpdateStatus;
- (void)notifyDidReceiveAppAvailability:(id)arg1;
- (void)notifyDidReceiveStandbyStatus:(long long)arg1;
- (void)notifyDidReceiveActiveInputStatus:(long long)arg1;
- (void)notifyVolumeDidChangeToLevel:(float)arg1 isMuted:(_Bool)arg2;
- (void)notifyDidReceiveApplicationStatusText:(id)arg1;
- (void)notifyDidReceiveApplicationMetadata:(id)arg1;
- (void)notifyDidDisconnectFromApplicationWithError:(id)arg1;
- (void)notifyDidFailToConnectToApplicationWithError:(id)arg1;
- (void)notifyDidConnectToApplication:(id)arg1 withSessionID:(id)arg2 launchedApplication:(_Bool)arg3;
- (void)notifyConnectionResumedWithJoinedState:(_Bool)arg1;
- (void)notifyDidDisconnectWithError:(id)arg1 willTryToReconnect:(_Bool)arg2;
- (void)notifyDidFailToConnectWithError:(id)arg1;
- (void)notifyDidConnect;
- (void)broadcastKeyExchangeChannel:(id)arg1 didFailToReceiveWrappedSenderKeyForSenderKey:(id)arg2 withError:(id)arg3;
- (void)broadcastKeyExchangeChannel:(id)arg1 didReceiveWrappedSenderKey:(id)arg2 forSenderKey:(id)arg3;
- (void)multizoneControlChannel:(id)arg1 didUpdateSessionToEndpoint:(id)arg2 failedToMoveEndpointDeviceIDs:(id)arg3 requestID:(long long)arg4;
- (void)multizoneControlChannel:(id)arg1 didUpdateDevice:(id)arg2;
- (void)multizoneControlChannel:(id)arg1 didRemoveDeviceWithEndpointDeviceID:(id)arg2;
- (void)multizoneControlChannel:(id)arg1 didAddDevice:(id)arg2;
- (void)multizoneControlChannel:(id)arg1 requestDidFailWithID:(long long)arg2 error:(id)arg3;
- (void)multizoneControlChannel:(id)arg1 didReceiveMultizoneStatus:(id)arg2 requestID:(long long)arg3;
- (void)deviceDiscoveryChannel:(id)arg1 didFailToReceiveDeviceConfigurationWithID:(long long)arg2 error:(id)arg3;
- (void)deviceDiscoveryChannel:(id)arg1 didReceiveDeviceInformation:(id)arg2 requestID:(long long)arg3;
- (void)receiverControlChannel:(id)arg1 didReplaceRequestWithID:(long long)arg2;
- (void)receiverControlChannel:(id)arg1 requestDidFailWithID:(long long)arg2 error:(id)arg3;
- (void)receiverControlChannel:(id)arg1 didReceiveAppAvailability:(id)arg2 requestID:(long long)arg3;
- (void)receiverControlChannel:(id)arg1 didReceiveActiveInputStatus:(long long)arg2;
- (void)receiverControlChannel:(id)arg1 didReceiveReceiverStatus:(id)arg2 applicationStatus:(id)arg3 requestID:(long long)arg4;
- (void)receiverControlChannelDidStopApplication:(id)arg1;
- (void)receiverControlChannel:(id)arg1 didFailToLaunchApplicationWithError:(id)arg2;
- (void)receiverControlChannel:(id)arg1 didLaunchApplication:(id)arg2;
- (void)deviceConnector:(id)arg1 didFailToFetchRelayAccessTokenWithError:(id)arg2;
- (void)deviceConnector:(id)arg1 didFetchRelayAccessTokenForDevice:(id)arg2;
- (void)deviceConnector:(id)arg1 didUpdateDevice:(id)arg2;
- (void)deviceConnector:(id)arg1 didDisconnectWithError:(id)arg2 willTryToReconnect:(_Bool)arg3;
- (void)deviceConnectorDidDisconnect:(id)arg1;
- (void)deviceConnector:(id)arg1 didFailToConnectWithError:(id)arg2 willTryToReconnect:(_Bool)arg3;
- (void)deviceConnectorDidConnect:(id)arg1;
- (void)deviceConnector:(id)arg1 willConnectWithDeviceConnectionType:(int)arg2;
- (id)createBroadcastKeyExchangeChannel;
- (id)createDiscoveryChannel;
- (id)createMultizoneControlChannel;
- (id)createReceiverControlChannel;
- (void)unpin;
- (void)pin;
- (id)setDeviceMuted:(_Bool)arg1 forMultizoneDevice:(id)arg2;
- (id)setDeviceVolume:(float)arg1 forMultizoneDevice:(id)arg2;
- (id)requestMultizoneStatus;
- (id)updateSession:(id)arg1 addDevices:(id)arg2 removeDevices:(id)arg3 sessionName:(id)arg4;
- (id)updateSession:(id)arg1 toDevices:(id)arg2 sessionName:(id)arg3;
- (id)changeMuted:(_Bool)arg1;
- (id)changeVolume:(float)arg1;
- (id)stopApplicationWithSessionID:(id)arg1;
- (id)stopApplication;
- (_Bool)leaveApplication;
- (id)joinApplicationInternalUnchecked:(id)arg1 sessionID:(id)arg2 joinOptions:(id)arg3;
- (id)joinApplication:(id)arg1 sessionID:(id)arg2 joinOptions:(id)arg3;
- (id)joinApplication:(id)arg1 sessionID:(id)arg2;
- (id)joinApplication:(id)arg1;
- (_Bool)isAlreadyConnectedToDesiredApplicationWithApplicationID:(id)arg1 sessionID:(id)arg2 applicationMetadata:(id)arg3;
- (id)createSupportedApplicationTypesForJoinWithJoinOptions:(id)arg1;
- (id)createSupportedApplicationTypesForLaunch:(id)arg1;
- (id)launchApplication:(id)arg1 withLaunchOptions:(id)arg2;
- (id)launchApplication:(id)arg1;
- (_Bool)updateApplicationMetadata:(id)arg1;
- (void)clearDeviceState;
- (void)disconnectFromApplicationAndNotifyWithError:(id)arg1;
- (void)connectAndNotifyDidConnectToApplication:(id)arg1 launchedApplication:(_Bool)arg2;
- (_Bool)connectToApplication:(id)arg1 connectionType:(long long)arg2;
- (_Bool)clearStopStateWithError:(id)arg1;
- (_Bool)clearStopState;
- (_Bool)clearJoinStateWithError:(id)arg1;
- (_Bool)clearJoinState;
- (_Bool)clearLaunchStateWithError:(id)arg1;
- (_Bool)clearLaunchState;
- (id)startRequestOnChannel:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)startMultizoneControlChannelRequestUsingBlock:(CDUnknownBlockType)arg1;
- (long long)generateRequestID;
- (id)requestWrappedSenderKeyForSenderKey:(id)arg1;
- (id)requestAvailabilityForAppIDs:(id)arg1;
- (id)requestDeviceInformation;
- (id)requestDeviceStatus;
- (_Bool)removeChannel:(id)arg1;
- (_Bool)addCastSetupChannel:(id)arg1;
- (_Bool)addChannel:(id)arg1;
- (void)disconnectWithLeave:(_Bool)arg1;
- (void)disconnect;
- (void)connect;
- (float)clipVolume:(float)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)multizoneStatus;
@property(readonly, nonatomic) GCKDevice *device;
@property(nonatomic) double reconnectTimeout;
@property(readonly, nonatomic) long long connectionState;
- (void)dealloc;
- (id)initWithConnector:(id)arg1 analyticsEventLogger:(id)arg2 database:(id)arg3 runtimeConfiguration:(id)arg4;
- (id)initWithDevice:(id)arg1 clientPackageName:(id)arg2 reconnectStrategy:(id)arg3 analyticsEventLogger:(id)arg4 database:(id)arg5 networkReachability:(id)arg6 runtimeConfiguration:(id)arg7;
- (id)initWithDevice:(id)arg1 clientPackageName:(id)arg2 reconnectStrategy:(id)arg3;
- (id)initWithDevice:(id)arg1 clientPackageName:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MDXScreenDiscoveryManagerObserver-Protocol.h>
#import <Module_Framework/MDXSessionConnectionDelegate-Protocol.h>
#import <Module_Framework/YTReachabilityObserver-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class MDXCTTRevocationController, MDXScreenDiscoveryManager, MDXSession, NSHashTable, NSString, YTIMdxConnectNavigationEndpoint, YTTimedAction;
@protocol MDXClientAppInfoProvider, MDXDeviceConnectivityInfoProtocol, MDXLocationProvider, MDXPlaybackDescriptorConfigProvider;

@interface MDXSessionManager : NSObject <MDXSessionConnectionDelegate, MDXScreenDiscoveryManagerObserver, YTReachabilityObserver, YTSystemNotificationsObserver>
{
    NSHashTable *_sessionManagerObservers;
    MDXScreenDiscoveryManager *_screenDiscoveryManager;
    MDXCTTRevocationController *_CTTController;
    _Bool _retryingConnection;
    _Bool _startingSession;
    int _sessionSource;
    long long _screenNotFoundCount;
    YTTimedAction *_wiFiLostTimer;
    MDXSession *_session;
    id <MDXDeviceConnectivityInfoProtocol> _deviceConnectivityInfoProvider;
    id <MDXLocationProvider> _locationProvider;
    id <MDXClientAppInfoProvider> _clientAppInfoProvider;
    id <MDXPlaybackDescriptorConfigProvider> _playbackDescriptorConfigProvider;
    YTIMdxConnectNavigationEndpoint *_connectionNavEndpoint;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTIMdxConnectNavigationEndpoint *connectionNavEndpoint; // @synthesize connectionNavEndpoint=_connectionNavEndpoint;
@property(nonatomic) __weak id <MDXPlaybackDescriptorConfigProvider> playbackDescriptorConfigProvider; // @synthesize playbackDescriptorConfigProvider=_playbackDescriptorConfigProvider;
@property(retain, nonatomic) id <MDXClientAppInfoProvider> clientAppInfoProvider; // @synthesize clientAppInfoProvider=_clientAppInfoProvider;
@property(retain, nonatomic) id <MDXLocationProvider> locationProvider; // @synthesize locationProvider=_locationProvider;
@property(retain, nonatomic) id <MDXDeviceConnectivityInfoProtocol> deviceConnectivityInfoProvider; // @synthesize deviceConnectivityInfoProvider=_deviceConnectivityInfoProvider;
@property(readonly, nonatomic) MDXSession *session; // @synthesize session=_session;
- (id)connectionAlertViewForError:(id)arg1;
- (void)screenAvailabilityPollCompletedWithStatus:(_Bool)arg1;
- (void)startPollingForConnectedScreenAvailability;
- (void)logNotificationGELEventWithType:(int)arg1 action:(int)arg2;
- (void)showDeviceSelectorWithPlaybackDescriptor:(id)arg1;
- (id)playbackDescriptorForCommandPlaybackDescriptor:(id)arg1 withClickTrackingParams:(id)arg2;
- (void)handleNotificationEndpoint:(id)arg1;
- (void)handleSmartRemoteEndpoint:(id)arg1;
- (void)disconnectFromScreenWithError:(id)arg1;
- (void)notifyDidReceivePlaybackDescriptor:(id)arg1;
- (void)notifyDidEndSessionWithError:(id)arg1;
- (void)notifyWillEndSession;
- (void)notifyDidStartSession;
- (void)notifyDidFailToStartSessionWithError:(id)arg1;
- (void)notifyWillStartSession;
- (id)sessionForScreen:(id)arg1;
- (void)retryAppLaunchWithScreen:(id)arg1 playbackDescriptor:(id)arg2;
- (id)sessionDisconnectedEventPayload;
- (id)sessionConnectedEventPayload;
- (id)sessionStartedEventPayload;
- (_Bool)hasActiveMDXOrAirPlayConnection;
- (void)reachabilityDidChange;
- (void)appDidBecomeActive:(id)arg1;
- (void)connectionStateDidChangeFromState:(long long)arg1 toState:(long long)arg2;
- (void)screenDiscoveryManager:(id)arg1 existingSessionDiscoveredForScreen:(id)arg2;
- (id)remoteClient;
- (void)completeMDXPlaybackEndpointAfterScreenDiscovery:(id)arg1;
- (void)handleMDXPlaybackEndpoint:(id)arg1;
- (void)revokeCredentialsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeSessionManagerObserver:(id)arg1;
- (void)addSessionManagerObserver:(id)arg1;
- (void)disconnectFromScreen;
@property(readonly, nonatomic, getter=isConnectedToScreen) _Bool connectedToScreen;
@property(readonly, nonatomic, getter=isConnectingToScreen) _Bool connectingToScreen;
@property(readonly, nonatomic) _Bool hasActiveSession;
- (void)connectToScreen:(id)arg1;
- (void)performAppLaunchWithScreen:(id)arg1 playbackDescriptor:(id)arg2;
- (void)confirmedConnectToScreen:(id)arg1 withPlaybackDescriptor:(id)arg2;
- (void)confirmSharedWatchHistoryForScreen:(id)arg1 playbackDescriptor:(id)arg2;
- (void)confirmEnableLocalNetworkPermissions;
- (void)connectToScreen:(id)arg1 withPlaybackDescriptor:(id)arg2;
- (void)connectToScreen:(id)arg1 withPlaybackDescriptor:(id)arg2 source:(int)arg3;
- (void)connectWithCommand:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCKAnalyticsLoggingOptions, GCKApplicationLoggingSession, GCKDiscoveryLoggingSession, GCKNNetworkReachability, NSArray, NSDate, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSTimer;

@interface GCKAnalyticsEventLogger : NSObject
{
    GCKNNetworkReachability *_networkReachability;
    NSMutableSet *_eventSinks;
    NSArray *_sortDescriptors;
    NSMutableSet *_detectedAPIUsageFlags;
    NSSet *_reportedAPIUsageFlags;
    NSString *_appBundleID;
    NSString *_appBundleVersion;
    NSDate *_lastAPIUsageReportDate;
    NSTimer *_apiUsageReportTimer;
    NSDate *_lastErrorInfoReportTime;
    NSTimer *_errorInfoReportTimer;
    GCKAnalyticsLoggingOptions *_options;
    GCKDiscoveryLoggingSession *_discoveryLoggingSession;
    GCKApplicationLoggingSession *_applicationLoggingSession;
    NSString *_pseudonymousSenderID;
    NSMutableDictionary *_detectedErrors;
}

+ (long long)hashReceiverSessionID:(id)arg1;
+ (id)hashString:(id)arg1 withSalt:(id)arg2;
+ (int)encodeApplicationID:(id)arg1;
+ (unsigned long long)hashNetworkID:(id)arg1 withSalt:(id)arg2;
+ (unsigned long long)hashConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *detectedErrors; // @synthesize detectedErrors=_detectedErrors;
@property(retain, nonatomic) NSString *pseudonymousSenderID; // @synthesize pseudonymousSenderID=_pseudonymousSenderID;
@property(retain, nonatomic) GCKApplicationLoggingSession *applicationLoggingSession; // @synthesize applicationLoggingSession=_applicationLoggingSession;
@property(retain, nonatomic) GCKDiscoveryLoggingSession *discoveryLoggingSession; // @synthesize discoveryLoggingSession=_discoveryLoggingSession;
@property(retain, nonatomic) GCKAnalyticsLoggingOptions *options; // @synthesize options=_options;
- (void)logDidTapOnLearnMoreButtonForCastPermission;
- (void)logDidTapOnDismissButtonForCastPermission;
- (void)logDidTapOnSettingLink;
- (void)logDidTapOnCastButtonWithPermissionStatus:(_Bool)arg1 isFirstTap:(_Bool)arg2;
- (void)logUserDidSelectPermission:(_Bool)arg1 isProbableCastUser:(_Bool)arg2 wasPermissionAvailable:(_Bool)arg3;
- (int)networkConnectionTypeForStatus:(long long)arg1;
- (int)connectionTypeForDevice:(id)arg1;
- (void)cancelErrorInfoReportTimer;
- (void)resetLastErrorInfoReportTime;
- (void)reportErrorInfos;
- (void)scheduleNextErrorInfoReportIfNecessary;
- (void)initErrorInfoFromUserDefaults;
- (void)logError:(unsigned int)arg1 withUnderlyingErrorDomain:(int)arg2 underlyingErrorCode:(unsigned int)arg3;
- (void)logError:(unsigned int)arg1;
- (void)logAPIUsage:(int)arg1;
- (void)reportPendingAPIUsageFlags;
- (void)scheduleNextAPIUsageReport;
- (void)initAPIUsageReportMonitor;
- (void)resetPseudonymousSenderID;
- (void)initPseudonymousSenderID;
- (id)createAppLoggingSessionWithDevice:(id)arg1 applicationID:(id)arg2 isReconnect:(_Bool)arg3;
- (id)createDiscoveryLoggingSessionWithDiscoveryCriteria:(id)arg1 networkID:(id)arg2 analyticsEnabled:(_Bool)arg3;
- (void)cancelAllReportTimers;
- (id)generateFakeReceiverMetricsIDWithEndpointDeviceID:(id)arg1 asGuestMode:(_Bool)arg2;
- (void)updateReceiverMetricsID:(id)arg1 asGuestMode:(_Bool)arg2;
- (id)createCriterionWithSubtype:(id)arg1;
- (id)convertNetworkIDToLocalNetworkId:(id)arg1;
- (id)createPrecacheActivity:(id)arg1 messageType:(int)arg2 error:(id)arg3 requestTimestamp:(double)arg4;
- (id)createTCPProbingResult:(id)arg1 invocationReason:(int)arg2 probingResult:(int)arg3 discoveryCriteria:(id)arg4 connectionError:(id)arg5;
- (id)createDeviceControllerApplicationEvent:(id)arg1 sessionID:(long long)arg2 requestID:(long long)arg3 applicationID:(id)arg4;
- (id)createDeviceControllerEvent:(id)arg1 sessionID:(long long)arg2;
- (id)deviceControllerEvent:(id)arg1 sessionID:(long long)arg2 deviceConnectionType:(int)arg3;
- (id)createAppSessionEvent;
- (id)createDiscoveryEventWithDeviceInfo:(id)arg1;
- (id)createEventWithLoggingSession:(id)arg1;
- (void)saveApplicationLoggingSessionWithSync:(_Bool)arg1;
- (_Bool)verifySavedApplicationLoggingSessionWithDevice:(id)arg1 applicationID:(id)arg2;
- (id)loadSavedApplicationLoggingSession;
- (int)translateMDNSParseError:(id)arg1;
- (int)translateBroadcastError:(id)arg1;
- (int)translateApplicationConnectionError:(long long)arg1;
- (int)translateDeviceConnectionError:(id)arg1;
- (_Bool)logEvent:(id)arg1 forAction:(int)arg2;
- (void)logKeyExchangeRequestWithResult:(int)arg1 requestTimestamp:(double)arg2 error:(id)arg3;
- (void)logFailedPrecacheActivity:(id)arg1 messageType:(int)arg2 error:(id)arg3 requestTimestamp:(double)arg4;
- (void)logSuccessfulPrecacheActivity:(id)arg1 messageType:(int)arg2 requestTimestamp:(double)arg3;
- (void)logRuntimeConfiguration:(id)arg1;
- (void)logDeviceController:(id)arg1 sessionID:(long long)arg2 requestID:(long long)arg3 applicationLaunched:(id)arg4;
- (void)logDeviceController:(id)arg1 sessionID:(long long)arg2 application:(id)arg3 disconnectedWithError:(long long)arg4;
- (void)logDeviceController:(id)arg1 sessionID:(long long)arg2 requestID:(long long)arg3 applicationConnected:(id)arg4;
- (void)logDeviceController:(id)arg1 sessionID:(long long)arg2 application:(id)arg3 connectionFailedWithError:(long long)arg4;
- (void)logDeviceController:(id)arg1 sessionID:(long long)arg2 joiningApplication:(id)arg3 existingSession:(_Bool)arg4 connectionType:(long long)arg5;
- (void)logDeviceController:(id)arg1 sessionID:(long long)arg2 launchingApplication:(id)arg3 relaunchIfRunning:(_Bool)arg4;
- (void)logDeviceController:(id)arg1 sessionID:(long long)arg2 disconnectedWithError:(long long)arg3 explicit:(_Bool)arg4;
- (void)logDeviceControllerWithSessionID:(long long)arg1 connectionFailedWithError:(id)arg2;
- (void)logDeviceController:(id)arg1 sessionID:(long long)arg2 connectionFailedWithError:(id)arg3;
- (void)logDeviceControllerConnected:(id)arg1 sessionID:(long long)arg2;
- (void)logDeviceControllerConnecting:(id)arg1 sessionID:(long long)arg2 deviceConnectionType:(int)arg3;
- (void)logSessionRunningNetworkChanged;
- (void)logSessionEndWithErrorCode:(long long)arg1;
- (void)logSessionEnd:(int)arg1;
- (void)logSessionResumed;
- (void)logSessionResuming:(id)arg1 applicationID:(id)arg2 reason:(int)arg3;
- (void)logSessionSuspended:(long long)arg1;
- (void)logSessionMediaCommand;
- (void)logSessionPing;
- (void)logSessionRunning;
- (void)logSessionStarting:(id)arg1 applicationID:(id)arg2 isReconnect:(_Bool)arg3;
- (void)logNearbyDevicePublished:(id)arg1;
- (void)logDevicePublishedWithInfo:(id)arg1;
- (void)logAbortedTCPProbingResult:(id)arg1 invocationReason:(int)arg2 discoveryCriteria:(id)arg3;
- (void)logFailedTCPProbingResult:(id)arg1 invocationReason:(int)arg2 discoveryCriteria:(id)arg3 error:(id)arg4;
- (void)logSuccessfulTCPProbingResult:(id)arg1 invocationReason:(int)arg2 discoveryCriteria:(id)arg3;
- (void)logMDNSParseError:(id)arg1 withSequenceNumber:(int)arg2 fromSourceIPAddress:(id)arg3;
- (void)logBLEScannerFailedToStart;
- (void)logMDNSScannerFailedToStart;
- (void)logBLESignalReceived:(id)arg1 deviceIPAddressLowBytes:(short)arg2;
- (void)logMDNSResponseReceived:(id)arg1 subtypes:(id)arg2;
- (void)logDiscoveryStopWithReason:(int)arg1;
- (void)logDiscoveryPing;
- (void)logDiscoveryStartWithDiscoveryCriteria:(id)arg1 networkID:(id)arg2 analyticsEnabled:(_Bool)arg3;
- (void)removeEventSink:(id)arg1;
- (void)addEventSink:(id)arg1;
- (void)unregisterForAppStateNotifications;
- (void)registerForAppStateNotifications;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 networkReachability:(id)arg2;

@end


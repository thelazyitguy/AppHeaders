//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAccessoryStateObserver-Protocol.h"
#import "SPTCarmageddonMotionManagerDelegate-Protocol.h"
#import "SPTNetworkConnectivityControllerObserver-Protocol.h"
#import "SPTService-Protocol.h"
#import "SPTWazeNavigationStateObserver-Protocol.h"

@class NSString, NSTimer, SPTAllocationContext, SPTCarmageddonLogger, SPTCarmageddonMotionManager, SPTCarmageddonMotionRecorderConfigurationFactory, SPTCarmageddonRemoteConfigurationImplementation;
@protocol SPTAccessoryManagerService, SPTEventSenderService, SPTExternalIntegrationDebugLog, SPTExternalIntegrationDebugLogService, SPTNetworkService, SPTRemoteConfigurationService, SPTWazeService;

@interface SPTCarmageddonMotionRecorderService : NSObject <SPTAccessoryStateObserver, SPTCarmageddonMotionManagerDelegate, SPTWazeNavigationStateObserver, SPTNetworkConnectivityControllerObserver, SPTService>
{
    id <SPTAccessoryManagerService> _accessoryManagerService;
    id <SPTEventSenderService> _eventSenderService;
    id <SPTWazeService> _wazeService;
    id <SPTNetworkService> _networkService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTExternalIntegrationDebugLogService> _externalIntegrationDebugLogService;
    SPTCarmageddonMotionManager *_motionManager;
    SPTCarmageddonLogger *_logger;
    SPTCarmageddonRemoteConfigurationImplementation *_remoteConfiguration;
    id <SPTExternalIntegrationDebugLog> _externalIntegrationDebugLog;
    SPTCarmageddonMotionRecorderConfigurationFactory *_recorderConfigurationFactory;
    NSString *_lastSensorLoggingReason;
    NSTimer *_delayedRecordingTimer;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *delayedRecordingTimer; // @synthesize delayedRecordingTimer=_delayedRecordingTimer;
@property(copy, nonatomic) NSString *lastSensorLoggingReason; // @synthesize lastSensorLoggingReason=_lastSensorLoggingReason;
@property(retain, nonatomic) SPTCarmageddonMotionRecorderConfigurationFactory *recorderConfigurationFactory; // @synthesize recorderConfigurationFactory=_recorderConfigurationFactory;
@property(retain, nonatomic) id <SPTExternalIntegrationDebugLog> externalIntegrationDebugLog; // @synthesize externalIntegrationDebugLog=_externalIntegrationDebugLog;
@property(retain, nonatomic) SPTCarmageddonRemoteConfigurationImplementation *remoteConfiguration; // @synthesize remoteConfiguration=_remoteConfiguration;
@property(retain, nonatomic) SPTCarmageddonLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTCarmageddonMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) __weak id <SPTExternalIntegrationDebugLogService> externalIntegrationDebugLogService; // @synthesize externalIntegrationDebugLogService=_externalIntegrationDebugLogService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTWazeService> wazeService; // @synthesize wazeService=_wazeService;
@property(nonatomic) __weak id <SPTEventSenderService> eventSenderService; // @synthesize eventSenderService=_eventSenderService;
@property(nonatomic) __weak id <SPTAccessoryManagerService> accessoryManagerService; // @synthesize accessoryManagerService=_accessoryManagerService;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)motionManagerDidFinishProcessingAllRequestedBatches:(id)arg1;
- (void)motionManager:(id)arg1 didFinishBatchRecordingWithCount:(unsigned long long)arg2 repetitionDelay:(double)arg3 configuration:(id)arg4 result:(id)arg5;
- (void)wazeNavigationDidEnd;
- (void)wazeNavigationDidStart;
- (void)audioRouteChanged:(id)arg1;
- (id)sensorLoggingReasonForAccessory:(id)arg1;
- (void)accessoryStateManager:(id)arg1 accessoryDidDisconnect:(id)arg2;
- (void)accessoryStateManager:(id)arg1 accessoryDidConnect:(id)arg2;
- (double)startDelay;
- (void)cancelOngoingRecording;
- (void)delayedRecordingTimerFired:(id)arg1;
- (void)scheduleRecordingWithLoggingReason:(id)arg1;
- (void)disable;
- (void)enable;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTAccountsServiceListener-Protocol.h"
#import "GBTSystemHealthReporterFakeService-Protocol.h"
#import "HUBAppStateListener-Protocol.h"

@class GBTAppStatus, GBTRecordableAppStatus, GPCPromise, NSDate, NSString, NSTimer;
@protocol GBTSystemHealthReporterServiceImplDeps;

@interface GBTSystemHealthReporterServiceImpl : NSObject <HUBAppStateListener, GBTSystemHealthReporterFakeService, GBTAccountsServiceListener>
{
    id <GBTSystemHealthReporterServiceImplDeps> _deps;
    NSDate *_lastMemoryWarningTimeMetric;
    NSTimer *_memoryMetricPollingTimer;
    NSDate *_timeOfLastStateChange;
    long long _batteryLevelOnLastChange;
    GPCPromise *_currentAccountEventLoggingPromise;
    GBTAppStatus *_appStatus;
    GBTRecordableAppStatus *_startupLastAppStatus;
}

+ (void)logBatteryLevelWithMessage:(id)arg1 appState:(long long)arg2 batteryLevel:(long long)arg3 lastBatteryLevel:(long long)arg4 batteryState:(long long)arg5 lowPowerMode:(_Bool)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) GBTRecordableAppStatus *startupLastAppStatus; // @synthesize startupLastAppStatus=_startupLastAppStatus;
@property(retain, nonatomic) GBTAppStatus *appStatus; // @synthesize appStatus=_appStatus;
- (id)sampleMemory;
- (long long)startupLastAppState;
- (void)authenticatorDidFinishSignInWithAccount:(id)arg1 error:(id)arg2;
- (void)logClientHealthEvent:(id)arg1;
- (id)primesEventNameForClientHealthTrigger:(id)arg1;
- (id)clientHealthBatteryStateForBatteryState:(long long)arg1;
- (id)clientHealthBackgroundWorkStateForAppStatus:(id)arg1;
- (id)clientHealthAppStateForAppState:(long long)arg1;
- (void)appStateManagerAppWillTerminate:(id)arg1;
- (void)appStateManagerAppDidEnterBackground:(id)arg1;
- (void)appStateManagerAppWillResignActive:(id)arg1;
- (void)appStateManagerAppDidBecomeActive:(id)arg1;
- (void)appStateManagerAppDidFinishLaunching:(id)arg1;
- (void)batteryLevelDidChange:(id)arg1;
- (void)batteryStateDidChange:(id)arg1;
- (void)pollMemoryUsage:(id)arg1;
- (void)appDelegateReceivedMemoryWarning;
- (void)disableBatteryMonitoring;
- (void)enableBatteryMonitoring;
- (void)maybeStopRunning;
- (void)writeCurrentStateToUserDefaultsWithMemoryStats:(id)arg1;
- (void)logBatteryLevelWithMessage:(id)arg1;
- (void)logMemoryWithMessage:(id)arg1 fromStatus:(id)arg2;
- (void)logStateWithMessage:(id)arg1;
- (void)willResume;
- (void)willSuspendWithMemoryStats:(id)arg1;
- (double)currentAppUptime;
- (_Bool)isUpgrade;
@property(nonatomic) long long appState;
- (void)stopProcessingOpportunisticBackgroundSync;
- (void)startProcessingOpportunisticBackgroundSync;
- (void)stopProcessingNotification;
- (void)startProcessingNotification;
- (void)appDidFreshUpdate;
- (void)appDidFreshInstall;
- (void)resetStates;
- (void)dealloc;
- (id)initWithDeps:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

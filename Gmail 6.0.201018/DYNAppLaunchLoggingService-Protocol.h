//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DYNAppLaunchData, NSString, UIViewController;
@protocol DYNMessageId;

@protocol DYNAppLaunchLoggingService
- (void)logAppDeviceSettings;
- (unsigned int)appLaunchSource;
- (DYNAppLaunchData *)appLaunchData;
- (void)logAppBecameReadyWithData;
- (void)logFreshDataDisplayedFromViewController:(UIViewController *)arg1;
- (void)logStaleDataDisplayedFromViewController:(UIViewController *)arg1;
- (void)invalidateAppLaunchMetricsForReason:(NSString *)arg1;
- (void)discardTimerEventsAfterSignInFlow;
- (id <DYNMessageId>)appCatchUpPOI;
- (void)setAppCatchUpPOI:(id <DYNMessageId>)arg1;
- (_Bool)needsCatchUpStateUpdate;
- (void)markAppIsCaughtUpToPOI:(_Bool)arg1 isPOIInInitialMessages:(_Bool)arg2;
- (void)navigationOccurredFrom:(UIViewController *)arg1 to:(UIViewController *)arg2;
- (void)markAppLaunchedWithSource:(unsigned int)arg1;
- (void)markAppLaunchedWithUIReady;
- (void)setAppLaunchDestination:(unsigned int)arg1;
- (void)setLoggingGroupType:(unsigned int)arg1;
- (void)setLaunchDestinationViewController:(UIViewController *)arg1;
- (void)markAppWarmLaunchedWithForegroundCount:(unsigned long long)arg1;
- (void)markAppColdLaunched;
@end

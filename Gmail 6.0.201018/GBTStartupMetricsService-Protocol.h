//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol JBTMetrics, JBTSpan;

@protocol GBTStartupMetricsService <NSObject>
- (void)applicationDidFinishInitialLoad;
- (void)applicationDidTriggerBackgroundSync;
- (void)applicationDidReceiveAuthFailure;
- (void)applicationWillSwitchAccountWithReason:(unsigned long long)arg1;
- (void)applicationDidReceiveBackgroundNotification;
- (void)applicationDidLaunch;
- (void)completeOpenFromNotificationSpan:(id <JBTSpan>)arg1;
- (void)completeFirstResultsSpan:(id <JBTSpan>)arg1;
- (void)completeStartSpan:(id <JBTSpan>)arg1;
- (id <JBTSpan>)createOpenFromNotificationSpanInStartSpan:(id <JBTSpan>)arg1 orWithMetrics:(id <JBTMetrics>)arg2;
- (id <JBTSpan>)createFirstResultsSpanInStartSpan:(id <JBTSpan>)arg1;
- (id <JBTSpan>)createStartSpanWithMetrics:(id <JBTMetrics>)arg1;
- (void)applicationDidStart;
- (void)applicationDidProcessOpenNotification;
- (void)applicationDidBlockFromUserInteraction;
@end


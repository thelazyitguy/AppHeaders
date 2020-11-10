//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTDelayedEventConfig-Protocol.h>

@class NSString, YTIDelayedEventConfig, YTIDelayedEventConfigSet;

@interface YTDelayedEventConfigContainer : NSObject <YTDelayedEventConfig>
{
    YTIDelayedEventConfig *_config;
    YTIDelayedEventConfigSet *_eventConfig;
}

- (void).cxx_destruct;
- (double)defaultDispatchIntervalForTier:(int)arg1;
- (int)defaultDispatchPolicyForTier:(int)arg1;
- (id)scheduleConfigForTier:(int)arg1;
- (void)setEventConfigForEventType:(int)arg1;
- (_Bool)shouldEnableLogImmediateAPI;
- (_Bool)shouldEnableImmediateTierWithoutStoring;
- (_Bool)shouldGrabNotificationsLogs;
- (_Bool)shouldUseDebugModeFlush;
- (_Bool)secondsBeforeCleaning;
- (_Bool)shouldFlushDelayedEventsInBackgroundForTier:(int)arg1;
- (int)dispatchPolicyForTier:(int)arg1;
- (double)secondsBetweenDispatchesForTier:(int)arg1;
- (_Bool)isDelayedEventTiersEnabled;
- (_Bool)shouldFlushQueueOnAppToBackground;
- (double)secondsBetweenDispatches;
- (double)maxRetryWindow;
- (unsigned long long)maxNumberOfRetries;
- (unsigned long long)batchSize;
- (id)initWithConfig:(id)arg1 eventType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


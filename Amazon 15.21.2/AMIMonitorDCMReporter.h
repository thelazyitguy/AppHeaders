//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMIMonitor, NSMutableArray, NSMutableDictionary, NSString;
@protocol AMIMonitorDCMBackendDelegate, CMIMetricsFactory;

@interface AMIMonitorDCMReporter : NSObject
{
    NSString *_programName;
    NSString *_defaultSource;
    AMIMonitor *_monitor;
    id <CMIMetricsFactory> _metricsFactory;
    NSMutableDictionary *_defaultParameters;
    NSMutableArray *_observerKeys;
    id <AMIMonitorDCMBackendDelegate> _backendDelegate;
}

+ (id)normalizeStringForPMET:(id)arg1;
+ (void)setIdentityInfoDelegate:(id)arg1;
+ (id)reporterWithMonitor:(id)arg1 metricsFactory:(id)arg2 backendDelegate:(id)arg3;
+ (id)sharedInstance;
@property(readonly, nonatomic) id <AMIMonitorDCMBackendDelegate> backendDelegate; // @synthesize backendDelegate=_backendDelegate;
@property(readonly, nonatomic) NSMutableArray *observerKeys; // @synthesize observerKeys=_observerKeys;
@property(readonly, nonatomic) NSMutableDictionary *defaultParameters; // @synthesize defaultParameters=_defaultParameters;
@property(readonly, nonatomic) id <CMIMetricsFactory> metricsFactory; // @synthesize metricsFactory=_metricsFactory;
@property(retain, nonatomic) AMIMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) NSString *defaultSource; // @synthesize defaultSource=_defaultSource;
@property(retain, nonatomic) NSString *programName; // @synthesize programName=_programName;
- (void).cxx_destruct;
- (id)overrideCMIUsageInfo:(id)arg1 withParameters:(id)arg2;
- (id)replaceString:(id)arg1 atRanges:(id)arg2 withValues:(id)arg3;
- (id)parametersFromMatch:(id)arg1;
- (id)substringsFromString:(id)arg1 withRanges:(id)arg2;
- (id)rangesOfTemplateArgumentsFromTemplate:(id)arg1;
- (void)addRefMarkerWithName:(id)arg1 toEvent:(id)arg2;
- (id)sourceForMatch:(id)arg1;
- (void)populateMetricEvent:(id)arg1 fromMatch:(id)arg2 excludeParameterNames:(id)arg3;
- (void)populateMetricEvent:(id)arg1 fromMatch:(id)arg2;
- (id)metricNameAndTemplateArgumentsFromTemplate:(id)arg1 match:(id)arg2;
- (void)clearAllMetrics;
- (void)addRefMarker:(id)arg1 isTemplate:(_Bool)arg2 includeIdentityInfo:(unsigned long long)arg3 overrideParameters:(id)arg4 trigger:(id)arg5 source:(id)arg6 priority:(int)arg7 includePriorEvents:(_Bool)arg8;
- (void)addRefMarker:(id)arg1 isTemplate:(_Bool)arg2 trigger:(id)arg3 source:(id)arg4 priority:(int)arg5 includePriorEvents:(_Bool)arg6;
- (void)addRefMarkerWithTemplate:(id)arg1 trigger:(id)arg2 source:(id)arg3 priority:(int)arg4 includePriorEvents:(_Bool)arg5;
- (void)addRefMarkerWithTemplate:(id)arg1 trigger:(id)arg2 priority:(int)arg3;
- (void)addRefMarkerWithName:(id)arg1 trigger:(id)arg2 source:(id)arg3 priority:(int)arg4 includePriorEvents:(_Bool)arg5;
- (void)addRefMarkerWithName:(id)arg1 trigger:(id)arg2 priority:(int)arg3;
- (void)addTimer:(id)arg1 isTemplate:(_Bool)arg2 trigger:(id)arg3 source:(id)arg4 timerParameter:(id)arg5 priority:(int)arg6 includePriorEvents:(_Bool)arg7 execute:(CDUnknownBlockType)arg8 callbackWithTimerInfo:(CDUnknownBlockType)arg9;
- (void)addTimer:(id)arg1 isTemplate:(_Bool)arg2 trigger:(id)arg3 source:(id)arg4 timerParameter:(id)arg5 priority:(int)arg6 includePriorEvents:(_Bool)arg7 execute:(CDUnknownBlockType)arg8;
- (void)addTimer:(id)arg1 isTemplate:(_Bool)arg2 spanTrigger:(id)arg3 source:(id)arg4 metricEventType:(int)arg5 priority:(int)arg6 includePriorEvents:(_Bool)arg7 execute:(CDUnknownBlockType)arg8;
- (void)addTimer:(id)arg1 isTemplate:(_Bool)arg2 spanTrigger:(id)arg3 source:(id)arg4 metricEventType:(int)arg5 priority:(int)arg6 includePriorEvents:(_Bool)arg7;
- (void)addTimerWithNameTemplate:(id)arg1 spanTrigger:(id)arg2 source:(id)arg3 metricEventType:(int)arg4 priority:(int)arg5 includePriorEvents:(_Bool)arg6;
- (void)addTimer:(id)arg1 isTemplate:(_Bool)arg2 startTrigger:(id)arg3 endTrigger:(id)arg4 maximumInterval:(double)arg5 source:(id)arg6 metricEventType:(int)arg7 priority:(int)arg8 includePriorEvents:(_Bool)arg9 execute:(CDUnknownBlockType)arg10 callbackWithTimerInfo:(CDUnknownBlockType)arg11;
- (void)addTimer:(id)arg1 isTemplate:(_Bool)arg2 startTrigger:(id)arg3 endTrigger:(id)arg4 maximumInterval:(double)arg5 source:(id)arg6 metricEventType:(int)arg7 priority:(int)arg8 includePriorEvents:(_Bool)arg9 callbackWithTimerInfo:(CDUnknownBlockType)arg10;
- (void)addTimer:(id)arg1 isTemplate:(_Bool)arg2 startTrigger:(id)arg3 endTrigger:(id)arg4 maximumInterval:(double)arg5 source:(id)arg6 metricEventType:(int)arg7 priority:(int)arg8 includePriorEvents:(_Bool)arg9 execute:(CDUnknownBlockType)arg10;
- (void)addTimer:(id)arg1 isTemplate:(_Bool)arg2 startTrigger:(id)arg3 endTrigger:(id)arg4 maximumInterval:(double)arg5 source:(id)arg6 metricEventType:(int)arg7 priority:(int)arg8 includePriorEvents:(_Bool)arg9;
- (void)addTimerWithNameTemplate:(id)arg1 startTrigger:(id)arg2 endTrigger:(id)arg3 maximumInterval:(double)arg4 source:(id)arg5 metricEventType:(int)arg6 priority:(int)arg7 includePriorEvents:(_Bool)arg8;
- (void)addTimerWithNameTemplate:(id)arg1 startTrigger:(id)arg2 endTrigger:(id)arg3 maximumInterval:(double)arg4 metricEventType:(int)arg5 priority:(int)arg6;
- (void)addTimerWithName:(id)arg1 spanTrigger:(id)arg2 source:(id)arg3 metricEventType:(int)arg4 priority:(int)arg5 includePriorEvents:(_Bool)arg6;
- (void)addTimerWithName:(id)arg1 spanTrigger:(id)arg2 metricEventType:(int)arg3 priority:(int)arg4;
- (void)addTimerWithName:(id)arg1 startTrigger:(id)arg2 endTrigger:(id)arg3 maximumInterval:(double)arg4 source:(id)arg5 metricEventType:(int)arg6 priority:(int)arg7 includePriorEvents:(_Bool)arg8;
- (void)addTimerWithName:(id)arg1 startTrigger:(id)arg2 endTrigger:(id)arg3 maximumInterval:(double)arg4 metricEventType:(int)arg5 priority:(int)arg6;
- (void)addCounter:(id)arg1 isTemplate:(_Bool)arg2 trigger:(id)arg3 source:(id)arg4 counterParameter:(id)arg5 priority:(int)arg6 includePriorEvents:(_Bool)arg7;
- (void)addCounterWithNameTemplate:(id)arg1 trigger:(id)arg2 source:(id)arg3 counterParameter:(id)arg4 priority:(int)arg5 includePriorEvents:(_Bool)arg6;
- (void)addCounterWithNameTemplate:(id)arg1 trigger:(id)arg2 priority:(int)arg3;
- (void)addCounterWithName:(id)arg1 trigger:(id)arg2 source:(id)arg3 counterParameter:(id)arg4 priority:(int)arg5 includePriorEvents:(_Bool)arg6;
- (void)addCounterWithName:(id)arg1 trigger:(id)arg2 priority:(int)arg3;
- (void)clearDefaultParameters;
- (void)setDefaultParameter:(id)arg1 toValue:(id)arg2;
- (id)defaultSourceWithAppVersion;
- (id)initWithMonitor:(id)arg1 metricsFactory:(id)arg2 backendDelegate:(id)arg3;
- (void)addCounter:(id)arg1 withtriggerName:(id)arg2 andPriority:(int)arg3;
- (void)sunsetting_addCounterWithName:(id)arg1 triggerName:(id)arg2;
- (void)addCounterWithName:(id)arg1 triggerName:(id)arg2;

@end

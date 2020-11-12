//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ALXMetricsProviderProtocol, OS_dispatch_queue;

@interface ALXPLWakewordService : NSObject
{
    _Bool _isWakewordEngineRunning;
    int _wakewordDetectionThreshold;
    id <ALXMetricsProviderProtocol> _metricsProviderDelegate;
    CDUnknownBlockType _detectionCallback;
    NSObject<OS_dispatch_queue> *_synchronousQueue;
    NSObject<OS_dispatch_queue> *_syncronousBufferQueue;
}

@property(nonatomic) int wakewordDetectionThreshold; // @synthesize wakewordDetectionThreshold=_wakewordDetectionThreshold;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncronousBufferQueue; // @synthesize syncronousBufferQueue=_syncronousBufferQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronousQueue; // @synthesize synchronousQueue=_synchronousQueue;
@property(copy, nonatomic) CDUnknownBlockType detectionCallback; // @synthesize detectionCallback=_detectionCallback;
@property(nonatomic) __weak id <ALXMetricsProviderProtocol> metricsProviderDelegate; // @synthesize metricsProviderDelegate=_metricsProviderDelegate;
- (void).cxx_destruct;
@property(nonatomic) _Bool isWakewordEngineRunning; // @synthesize isWakewordEngineRunning=_isWakewordEngineRunning;
- (void)registerForNotificationsWithNotificationCenter:(id)arg1;
- (void)verifyWakewordDetectedEventWithSuccessCallback:(CDUnknownBlockType)arg1 withUserInfo:(id)arg2;
- (void)logMetricWithTriggerNameIfAvailable:(id)arg1;
- (void)registerMetricsIfAvailable;
- (id)extractDetectedEventFromDictionary:(id)arg1;
- (void)pushAudioSamples:(void *)arg1 withSampleCount:(int)arg2;
- (void)pryonWakewordDetected:(id)arg1;
- (_Bool)stopEngineWithError:(id *)arg1;
- (_Bool)startEngineWithError:(id *)arg1;
- (id)initWithThreshold:(int)arg1 metricsProvider:(id)arg2 wakewordDetectedCallback:(CDUnknownBlockType)arg3;

@end

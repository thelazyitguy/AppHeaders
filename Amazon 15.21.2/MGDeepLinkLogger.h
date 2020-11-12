//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface MGDeepLinkLogger : NSObject
{
    NSString *_requestedUrl;
    NSString *_outcome;
    NSString *_outcomeReason;
    NSString *_outcomeReasonId;
    NSString *_resultingUrl;
    double _telemetryStartupLatency;
    double _telemetryServiceCallLatency;
    double _telemetryUrlLaunchLatency;
    double _telemetryTotalLatency;
    NSDate *_telemetryStartupLatencyStartTime;
    NSDate *_telemetryServiceCallLatencyStartTime;
    NSDate *_telemetryUrlLaunchLatencyStartTime;
    NSDate *_telemetryTotalLatencyStartTime;
}

@property(retain, nonatomic) NSDate *telemetryTotalLatencyStartTime; // @synthesize telemetryTotalLatencyStartTime=_telemetryTotalLatencyStartTime;
@property(retain, nonatomic) NSDate *telemetryUrlLaunchLatencyStartTime; // @synthesize telemetryUrlLaunchLatencyStartTime=_telemetryUrlLaunchLatencyStartTime;
@property(retain, nonatomic) NSDate *telemetryServiceCallLatencyStartTime; // @synthesize telemetryServiceCallLatencyStartTime=_telemetryServiceCallLatencyStartTime;
@property(retain, nonatomic) NSDate *telemetryStartupLatencyStartTime; // @synthesize telemetryStartupLatencyStartTime=_telemetryStartupLatencyStartTime;
@property(nonatomic) double telemetryTotalLatency; // @synthesize telemetryTotalLatency=_telemetryTotalLatency;
@property(nonatomic) double telemetryUrlLaunchLatency; // @synthesize telemetryUrlLaunchLatency=_telemetryUrlLaunchLatency;
@property(nonatomic) double telemetryServiceCallLatency; // @synthesize telemetryServiceCallLatency=_telemetryServiceCallLatency;
@property(nonatomic) double telemetryStartupLatency; // @synthesize telemetryStartupLatency=_telemetryStartupLatency;
@property(retain, nonatomic) NSString *resultingUrl; // @synthesize resultingUrl=_resultingUrl;
@property(retain, nonatomic) NSString *outcomeReasonId; // @synthesize outcomeReasonId=_outcomeReasonId;
@property(retain, nonatomic) NSString *outcomeReason; // @synthesize outcomeReason=_outcomeReason;
@property(retain, nonatomic) NSString *outcome; // @synthesize outcome=_outcome;
@property(retain, nonatomic) NSString *requestedUrl; // @synthesize requestedUrl=_requestedUrl;
- (void).cxx_destruct;
- (long long)getTimeIntervalSinceDateInMillisecond:(id)arg1;
- (void)logEvent:(id)arg1 withProducerId:(id)arg2;
- (void)recordDeepLinkAttempt;
- (void)stopTelemetryTotalLatency;
- (void)startTelemetryTotalLatency;
- (void)stopTelemetryUrlLaunchLatency;
- (void)startTelemetryUrlLaunchLatency;
- (void)stopTelemetryServiceCallLatency;
- (void)startTelemetryServiceCallLatency;
- (void)stopTelemetryStartupLatency;
- (void)startTelemetryStartupLatency;
- (void)setDeepLinkCallCompletedWithResultingUrl:(id)arg1 withOutcome:(id)arg2 withOutcomeReason:(id)arg3 withOutcomeReasonId:(id)arg4;
- (void)setDeepLinkCallInitiatedWithRequestedUrl:(id)arg1;

@end

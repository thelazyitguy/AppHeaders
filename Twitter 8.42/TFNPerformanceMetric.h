//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFNPerformanceMeasurement, TFNPerformanceMetricDirectory, TFSTimer;
@protocol TFNPerformanceMetricReporter;

@interface TFNPerformanceMetric : NSObject
{
    NSString *_metricIdentifier;
    NSString *_componentIdentifier;
    unsigned long long _metricType;
    Class _measurementClass;
    TFNPerformanceMeasurement *_measurement;
    id <TFNPerformanceMetricReporter> _reporter;
    double _reportingInterval;
    double _cachingInterval;
    double _previouslyCachedTimestamp;
    TFSTimer *_cachingTimer;
    NSString *_accountIdentifier;
    TFNPerformanceMetricDirectory *_directory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNPerformanceMetricDirectory *directory; // @synthesize directory=_directory;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(retain, nonatomic) TFSTimer *cachingTimer; // @synthesize cachingTimer=_cachingTimer;
@property(nonatomic) double previouslyCachedTimestamp; // @synthesize previouslyCachedTimestamp=_previouslyCachedTimestamp;
@property(readonly, nonatomic) double cachingInterval; // @synthesize cachingInterval=_cachingInterval;
@property(readonly, nonatomic) double reportingInterval; // @synthesize reportingInterval=_reportingInterval;
@property(readonly, nonatomic) __weak id <TFNPerformanceMetricReporter> reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) TFNPerformanceMeasurement *measurement; // @synthesize measurement=_measurement;
@property(readonly, nonatomic) Class measurementClass; // @synthesize measurementClass=_measurementClass;
@property(readonly, nonatomic) unsigned long long metricType; // @synthesize metricType=_metricType;
@property(readonly, copy, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
@property(readonly, copy, nonatomic) NSString *metricIdentifier; // @synthesize metricIdentifier=_metricIdentifier;
- (void)_tfn_cachingTimerDidFireOnMainThread;
- (void)_tfn_persistMeasurement;
- (void)_tfn_persistMeasurementIfNeeded;
- (_Bool)_tfn_canReportCurrentValue;
- (void)_tfn_reportCurrentValue;
- (void)_tfn_reportCurrentValueIfNeeded;
- (void)_tfn_resetMeasurement;
- (void)_tfn_registerSampleWithValue:(double)arg1;
- (void)resetMeasurement;
- (void)registerSampleWithValue:(double)arg1;
@property(readonly, nonatomic) double currentValue;
@property(readonly, copy, nonatomic) TFNPerformanceMeasurement *currentMeasurement;
- (id)description;
- (id)init;
- (id)initWithMetricIdentifier:(id)arg1 componentIdentifier:(id)arg2 accountIdentifier:(id)arg3 metricType:(unsigned long long)arg4 measurementClass:(Class)arg5 reporter:(id)arg6 reportingInterval:(double)arg7 cachingInterval:(double)arg8 directory:(id)arg9;

@end

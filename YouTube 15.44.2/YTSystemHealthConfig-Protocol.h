//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSString, YTIBatteryCapturerSettings, YTIDroppedFramesSettings, YTIStackTraceProfilerSettings, YTIStallDetectorSettings;

@protocol YTSystemHealthConfig <NSObject>
- (_Bool)isSimplifiedMddLockEnabled;
- (NSString *)innerTubeNetworkConnectivityBaselineGen204URL;
- (double)innerTubeNetworkConnectivityBaselineTimeout;
- (float)innerTubeNetworkConnectivityBaselineFractionOfRunsToSample;
- (_Bool)isInnerTubeNetworkConnectivityMeasurementEnabled;
- (int)networkCaptureBatchSizeAllErrors;
- (_Bool)enableNetworkCaptureAllErrors;
- (_Bool)enablePrecriticalMonitoring;
- (float)memoryWarningLoggingSampleRate;
- (YTIStallDetectorSettings *)stallSettings;
- (YTIStackTraceProfilerSettings *)stackTraceProfilerSettings;
- (YTIDroppedFramesSettings *)droppedFramesConfig;
- (double)delayedEventMetricCaptureInterval;
- (_Bool)isDelayedEventMetricsEnabled;
- (_Bool)isEventLoggingEnabled;
- (YTIBatteryCapturerSettings *)batteryConfig;
- (int)networkCaptureBatchSize;
- (_Bool)networkCaptureInstrumentPageVE;
- (_Bool)networkCaptureInstrumentInnertube;
- (_Bool)networkCaptureUseYtSanitizer;
- (_Bool)isNetworkCaptureEnabled;
- (_Bool)isPrimesCpuCaptureEnabled;
- (_Bool)isPrimesMemoryCaptureEnabled;
- (float)primesFractionOfRunsToSample;
- (_Bool)isPrimesEnabled;
- (double)backgroundActiveHeartbeatCutoffDuration;
- (double)backgroundActiveHeartbeatDecayFactor;
- (double)backgroundActiveHeartbeatBaseFrequency;
- (double)backgroundIdleHeartbeatCutoffDuration;
- (double)backgroundIdleHeartbeatDecayFactor;
- (double)backgroundIdleHeartbeatBaseFrequency;
- (double)foregroundHeartbeatCutoffDuration;
- (double)foregroundHeartbeatDecayFactor;
- (double)foregroundHeartbeatBaseFrequency;
- (void)disableSystemHealthMonitoring;
- (_Bool)isSystemHealthMonitoringEnabled;
@end


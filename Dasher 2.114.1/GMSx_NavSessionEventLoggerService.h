//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSx_AZCAudioSessionManager, GMSx_NavSessionEventLoggerDeviceStateTracker, GMSx_NavSessionEventLoggerGuiderStateTracker, GMSx_NavSessionEventLoggerLocationSampleEncoder, GMSx_NavSessionEventLoggerParameters, GMSx_NavSessionEventLoggerStepPointerEncoder, NSMutableArray;
@protocol GMSDASHConnection, GMSTimingClock, NavSessionEventLoggerSequenceNumberProvider;

@interface GMSx_NavSessionEventLoggerService : NSObject
{
    id <GMSDASHConnection> _connection;
    id <GMSTimingClock> _clock;
    NSMutableArray *_pendingClientEvents;
    GMSx_NavSessionEventLoggerLocationSampleEncoder *_locationSampleEncoder;
    GMSx_NavSessionEventLoggerStepPointerEncoder *_stepPointerEncoder;
    GMSx_NavSessionEventLoggerParameters *_sessionParameters;
    GMSx_NavSessionEventLoggerDeviceStateTracker *_deviceStateTracker;
    long long _startSessionRelativeTimeMs;
    long long _lastEventRelativeTimeMs;
    long long _lastSampledLocationRelativeTimeMs;
    int _totalClientEventCount;
    GMSx_AZCAudioSessionManager *_audioSessionManager;
    _Bool _reduceSamplingPeriod;
    long long _reducedSamplePeriodMs;
    long long _defaultSamplePeriodMs;
    _Bool _shouldAddNextLocationSampleToLoggedEvent;
    _Bool _stoppedRecording;
    long long _startSessionTimestampMs;
    id <NavSessionEventLoggerSequenceNumberProvider> _sequenceNumberProvider;
    GMSx_NavSessionEventLoggerGuiderStateTracker *_guiderStateTracker;
}

+ (id)reportNavSessionRequestWithEvents:(id)arg1 parameters:(id)arg2 travelMode:(int)arg3 startSessionTimeStamp:(long long)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) GMSx_NavSessionEventLoggerGuiderStateTracker *guiderStateTracker; // @synthesize guiderStateTracker=_guiderStateTracker;
@property(nonatomic) __weak id <NavSessionEventLoggerSequenceNumberProvider> sequenceNumberProvider; // @synthesize sequenceNumberProvider=_sequenceNumberProvider;
@property(readonly, nonatomic) long long startSessionTimestampMs; // @synthesize startSessionTimestampMs=_startSessionTimestampMs;
- (long long)samplingPeriodMs;
- (unsigned long long)pendingLocationSampleCount;
- (unsigned long long)pendingClientEventCount;
- (void)setStepPointerEncoder:(id)arg1;
- (id)stepPointerEncoder;
- (void)setLocationSampleEncoder:(id)arg1;
@property(readonly, nonatomic) GMSx_NavSessionEventLoggerLocationSampleEncoder *locationSampleEncoder;
- (void)startRecordingSessionWithParameters:(id)arg1 forwardingTripAndTrafficVersions:(id)arg2 loggingTripAndTrafficVersions:(id)arg3 guiderStateTracker:(id)arg4;
- (long long)sessionLength;
- (_Bool)shouldUseLowConfidenceLocationSamplingRate:(id)arg1 onRoute:(_Bool)arg2;
- (long long)absoluteTimestampFromRelativeTimeMs:(long long)arg1;
- (void)addClientEvent:(id)arg1 relativeTimeMs:(long long)arg2 inScrubbingZone:(_Bool)arg3;
- (void)addLocationSample:(id)arg1 relativeTimeMs:(long long)arg2;
- (void)addStopRecordingEvent;
- (void)maybeStartRecording;
- (void)sendPendingEventsWithStopRecording:(_Bool)arg1;
- (id)buildSessionInformationForGWSRequest;
- (void)ensureCloseLocationSampleAtRelativeTimeMs:(long long)arg1;
- (id)maybeBuildCustomClientEvents;
- (void)sendViaULRNavigationSessionLocations:(id)arg1;
- (id)maybeBuildUlrMetadata;
- (void)sendViaGWSNavigationSessionEvents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)maybeBuildGWSLocationSamplesEvent;
- (void)stopRecordingSession;
- (void)maybeSendPendingEventsWithForce:(_Bool)arg1;
- (void)maybeAddLocationSample:(id)arg1 onRoute:(_Bool)arg2;
- (void)maybeAddClientEvent:(id)arg1;
- (void)maybeAddClientEvent:(id)arg1 scrubbingStatusOverride:(id)arg2 routeOverride:(id)arg3 tripIndexOverride:(id)arg4 stepIdOverride:(id)arg5;
- (void)startTempRecordingSessionWithParameters:(id)arg1 forwardingTripAndTrafficVersions:(id)arg2 loggingTripAndTrafficVersions:(id)arg3 guiderStateTracker:(id)arg4;
- (id)initWithConnection:(id)arg1 clock:(id)arg2 audioSessionManager:(id)arg3;

@end

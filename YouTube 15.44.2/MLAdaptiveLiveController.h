//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/HAMBaseComponent.h>

#import <Module_Framework/HAMLiveController-Protocol.h>

@class HAMSlidingPercentile, NSMutableArray, NSString, YTIHamplayerLive;
@protocol HAMClock, MLAdaptiveLiveControllerDelegate;

@interface MLAdaptiveLiveController : HAMBaseComponent <HAMLiveController>
{
    id <HAMClock> _clock;
    YTIHamplayerLive *_config;
    id <MLAdaptiveLiveControllerDelegate> _delegate;
    HAMSlidingPercentile *_bufferHealthSlidingPercentile;
    double _defaultLiveReadaheadSeconds;
    _Bool _hasRebuffer;
    double _lastBufferHealthUpdateTime;
    double _lastChangeTime;
    NSMutableArray *_rebufferTimes;
    double _targetDurationSeconds;
    double _liveReadaheadSeconds;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double liveReadaheadSeconds; // @synthesize liveReadaheadSeconds=_liveReadaheadSeconds;
- (double)endToEndLatencyForMediaTime:(CDStruct_d60ef703)arg1;
- (void)maybePegToLiveWithCurrentTime:(CDStruct_d60ef703)arg1;
- (void)addRebufferMeasurement;
- (void)currentTimeDidChange:(CDStruct_d60ef703)arg1 bufferedMediaTime:(double)arg2;
- (void)stateDidChangeFromState:(long long)arg1 toState:(long long)arg2;
- (id)initWithContext:(id)arg1 config:(id)arg2 liveReadaheadSeconds:(double)arg3 targetDurationSeconds:(double)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


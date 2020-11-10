//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MLPlayerStateObserver-Protocol.h>
#import <Module_Framework/YTAudioSessionRouteChangeObserver-Protocol.h>
#import <Module_Framework/YTHotConfigObserver-Protocol.h>
#import <Module_Framework/YTReachabilityNetworkPropertiesObserver-Protocol.h>
#import <Module_Framework/YTReachabilityObserver-Protocol.h>

@class MLPlayerEventCenter, NSString, YTHotConfig, YTReachabilityNetworkProperties;
@protocol HAMClock, MLUserFeatures, OS_dispatch_queue, YTAudioSession, YTReachabilityController;

@interface MLClientABRStateFiller : NSObject <MLPlayerStateObserver, YTAudioSessionRouteChangeObserver, YTHotConfigObserver, YTReachabilityNetworkPropertiesObserver, YTReachabilityObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    MLPlayerEventCenter *_eventCenter;
    id <HAMClock> _clock;
    id <MLUserFeatures> _userFeatures;
    YTHotConfig *_hotConfig;
    id <YTReachabilityController> _reachabilityController;
    id <YTAudioSession> _audioSession;
    struct optional<youtube::api::innertube::VideoQualitySetting> _videoQualitySettingOverride;
    double _absoluteTimeOfLastSeekOrJoin;
    // Error parsing type: {atomic<youtube::api::innertube::PlaybackAudioRouteOutputType>="__a_"{__cxx_atomic_impl<youtube::api::innertube::PlaybackAudioRouteOutputType, std::__1::__cxx_atomic_base_impl<youtube::api::innertube::PlaybackAudioRouteOutputType> >="__a_value"Ai}}, name: _audioRoute
    // Error parsing type: {atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> >="__a_value"AB}}, name: _enablePersistentVideoQualitySettings
    _Bool _useReachabilityNetworkProperties;
    // Error parsing type: {atomic<youtube::api::innertube::DetailedNetworkType>="__a_"{__cxx_atomic_impl<youtube::api::innertube::DetailedNetworkType, std::__1::__cxx_atomic_base_impl<youtube::api::innertube::DetailedNetworkType> >="__a_value"Ai}}, name: _detailedNetworkType
    YTReachabilityNetworkProperties *_networkProperties;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)hotConfigDidChange:(id)arg1;
- (void)reachabilityDidChange;
- (void)reachabilityNetworkPropertiesDidChange:(id)arg1;
- (void)outputRouteDidChange;
- (void)player:(id)arg1 didChangeStateWithEvent:(id)arg2;
- (void)setVideoQualitySettingOverride:(int)arg1;
-     // Error parsing type: v64@0:8^{ClientAbrState=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}iiiiqBBiiiqqqqiiiiiB}16@24q32@40@48d56, name: fillClientABRState:viewportSize:bitrateCapBitsPerSecond:networkStats:audioQualityConfig:currentMediaTime:
- (id)initWithQueue:(id)arg1 playerEventCenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


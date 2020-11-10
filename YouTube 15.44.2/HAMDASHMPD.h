//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/HAMBuildableObject.h>

@class NSArray, NSURL;

@interface HAMDASHMPD : HAMBuildableObject
{
    _Bool _isLive;
    NSArray *_periods;
    long long _type;
    double _minUpdatePeriod;
    NSURL *_location;
    double _absoluteTimeOfFetch;
    CDStruct_1b6d18a9 _duration;
}

+ (id)emptyMPD;
+ (id)MPDWithRepresentation:(id)arg1 duration:(CDStruct_1b6d18a9)arg2;
+ (id)MPDWithAdaptationSets:(id)arg1 duration:(CDStruct_1b6d18a9)arg2;
+ (id)builder;
+ (id)MPDWithStreamingData:(id)arg1 videoDetails:(id)arg2 additionalURLParameters:(id)arg3 hamplayerConfig:(id)arg4 livePlayerConfig:(id)arg5 windowedLiveConfig:(id)arg6 playbackStartConfig:(id)arg7 chunkFactoryProvider:(id)arg8 onesieVideoData:(id)arg9 offlineStreams:(id)arg10 offlineOnly:(_Bool)arg11 cuepointRelay:(id)arg12 playerQueue:(id)arg13;
- (void).cxx_destruct;
@property(readonly, nonatomic) double absoluteTimeOfFetch; // @synthesize absoluteTimeOfFetch=_absoluteTimeOfFetch;
@property(readonly, nonatomic) NSURL *location; // @synthesize location=_location;
@property(readonly, nonatomic) double minUpdatePeriod; // @synthesize minUpdatePeriod=_minUpdatePeriod;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *periods; // @synthesize periods=_periods;
- (id)representationsMatchingFilter:(id)arg1;
- (id)builder;
- (id)init;
- (id)initWithBuilder:(id)arg1;
- (id)mediaFormats;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface SCORStreamingConfigurationBuilder : NSObject
{
    struct Builder {
        struct CriticalSection;
        struct streamingConfigurationParams;
    } *_cppBuilder;
    long long _customStartMinimumPlayback;
}

@property(nonatomic) long long customStartMinimumPlayback; // @synthesize customStartMinimumPlayback=_customStartMinimumPlayback;
@property(nonatomic) _Bool autoResumeStateOnAssetChange;
@property(copy) NSDictionary *labels;
- (void)setcustomStartMinimumPlayback:(long long)arg1;
@property(nonatomic) long long playbackIntervalMergeTolerance;
@property(nonatomic) _Bool heartbeatMeasurement;
@property(copy) NSArray *heartbeatIntervals;
@property(nonatomic) _Bool keepAliveMeasurement;
@property(nonatomic) long long keepAliveInterval;
@property(nonatomic) long long pauseOnBufferingInterval;
@property(nonatomic) _Bool pauseOnBuffering;
@property(copy) NSArray *includedPublishers;
- (struct Builder *)getCppBuilder;
- (void)setCppBuilder:(struct Builder *)arg1;
- (id)build;
- (void)dealloc;
- (id)init;

@end


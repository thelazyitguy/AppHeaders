//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTYLowLightCalculator-Protocol.h"

@class NSMutableArray, NSString;

@interface GTYDefaultLowLightCalculator : NSObject <GTYLowLightCalculator>
{
    _Bool _allowPostProcessing;
    float _lastAutoISO;
    float _maximumISO;
    double _thresholdOne;
    double _thresholdTwo;
    double _thresholdThree;
    double _thresholdHysteresis;
    double _maxExposureDurationMs;
    double _maxExposureAdjustment;
    long long _adjustmentLevel;
    NSMutableArray *_movingAverage;
    unsigned long long _movingAverageWindowSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) float maximumISO; // @synthesize maximumISO=_maximumISO;
@property(nonatomic) float lastAutoISO; // @synthesize lastAutoISO=_lastAutoISO;
@property(readonly, nonatomic) unsigned long long movingAverageWindowSize; // @synthesize movingAverageWindowSize=_movingAverageWindowSize;
@property(readonly, nonatomic) NSMutableArray *movingAverage; // @synthesize movingAverage=_movingAverage;
@property(readonly, nonatomic) _Bool allowPostProcessing; // @synthesize allowPostProcessing=_allowPostProcessing;
@property(nonatomic) long long adjustmentLevel; // @synthesize adjustmentLevel=_adjustmentLevel;
@property(readonly, nonatomic) double maxExposureAdjustment; // @synthesize maxExposureAdjustment=_maxExposureAdjustment;
@property(readonly, nonatomic) double maxExposureDurationMs; // @synthesize maxExposureDurationMs=_maxExposureDurationMs;
@property(readonly, nonatomic) double thresholdHysteresis; // @synthesize thresholdHysteresis=_thresholdHysteresis;
@property(readonly, nonatomic) double thresholdThree; // @synthesize thresholdThree=_thresholdThree;
@property(readonly, nonatomic) double thresholdTwo; // @synthesize thresholdTwo=_thresholdTwo;
@property(readonly, nonatomic) double thresholdOne; // @synthesize thresholdOne=_thresholdOne;
- (void)reset;
- (double)brightness;
- (double)thresholdTwoWithPreviousLevel:(long long)arg1;
- (double)thresholdOneWithPreviousLevel:(long long)arg1;
- (id)adjustmentForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithThresholdOne:(double)arg1 thresholdTwo:(double)arg2 thresholdThree:(double)arg3 thresholdHysteresis:(double)arg4 minimumISO:(double)arg5 maximumISO:(double)arg6 maxExposureDuration:(double)arg7 maximumExposureAdjustment:(double)arg8 allowPostProcessing:(_Bool)arg9 movingAverageWindowSize:(unsigned long long)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIIosAvPlayerBandwidthModel, YTISlidingPercentileBandwidthModel, YTITFLiteBandwidthModelConfig;

@interface YTIBandwidthModelConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIosAvPlayerModel; // @dynamic hasIosAvPlayerModel;
@property(nonatomic) _Bool hasSlidingPercentileModel; // @dynamic hasSlidingPercentileModel;
@property(nonatomic) _Bool hasTfliteModelConfig; // @dynamic hasTfliteModelConfig;
@property(retain, nonatomic) YTIIosAvPlayerBandwidthModel *iosAvPlayerModel; // @dynamic iosAvPlayerModel;
@property(retain, nonatomic) YTISlidingPercentileBandwidthModel *slidingPercentileModel; // @dynamic slidingPercentileModel;
@property(retain, nonatomic) YTITFLiteBandwidthModelConfig *tfliteModelConfig; // @dynamic tfliteModelConfig;

@end

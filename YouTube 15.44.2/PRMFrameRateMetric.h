//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray;

@interface PRMFrameRateMetric : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float average; // @dynamic average;
@property(nonatomic) float durationMs; // @dynamic durationMs;
@property(retain, nonatomic) NSMutableArray *frameCountsPerBucketArray; // @dynamic frameCountsPerBucketArray;
@property(readonly, nonatomic) unsigned long long frameCountsPerBucketArray_Count; // @dynamic frameCountsPerBucketArray_Count;
@property(nonatomic) _Bool hasAverage; // @dynamic hasAverage;
@property(nonatomic) _Bool hasDurationMs; // @dynamic hasDurationMs;
@property(nonatomic) _Bool hasJankDurationMs; // @dynamic hasJankDurationMs;
@property(nonatomic) _Bool hasJankyFrameCount; // @dynamic hasJankyFrameCount;
@property(nonatomic) _Bool hasMaxFrameRenderTimeMs; // @dynamic hasMaxFrameRenderTimeMs;
@property(nonatomic) _Bool hasMeanFrameRenderTimeMs; // @dynamic hasMeanFrameRenderTimeMs;
@property(nonatomic) _Bool hasMinFrameRenderTimeMs; // @dynamic hasMinFrameRenderTimeMs;
@property(nonatomic) _Bool hasMinimum; // @dynamic hasMinimum;
@property(nonatomic) _Bool hasRenderedFrameCount; // @dynamic hasRenderedFrameCount;
@property(nonatomic) _Bool hasStdFrameRenderTimeMicros; // @dynamic hasStdFrameRenderTimeMicros;
@property(nonatomic) int jankDurationMs; // @dynamic jankDurationMs;
@property(nonatomic) int jankyFrameCount; // @dynamic jankyFrameCount;
@property(nonatomic) int maxFrameRenderTimeMs; // @dynamic maxFrameRenderTimeMs;
@property(nonatomic) int meanFrameRenderTimeMs; // @dynamic meanFrameRenderTimeMs;
@property(nonatomic) int minFrameRenderTimeMs; // @dynamic minFrameRenderTimeMs;
@property(nonatomic) float minimum; // @dynamic minimum;
@property(nonatomic) int renderedFrameCount; // @dynamic renderedFrameCount;
@property(nonatomic) float stdFrameRenderTimeMicros; // @dynamic stdFrameRenderTimeMicros;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIAutoplayRenderer_AutoplayReplaySupportedRenderers, YTIFormattedString;

@interface YTIAutoplayRenderer : GPBMessage
{
}

+ (id)descriptor;
- (_Bool)hasLoopMode;
- (_Bool)hasShuffleMode;
- (id)autonavEndpoint;
- (id)maybeHistoryEndpointForNextVideo;
- (id)maybeHistoryEndpointForPreviousVideo;
- (id)previousButtonEndpointWithMode:(int)arg1;
- (id)nextButtonEndpointWithMode:(int)arg1;
- (id)autoplayEndpointWithMode:(int)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *backgroundSetsArray; // @dynamic backgroundSetsArray;
@property(readonly, nonatomic) unsigned long long backgroundSetsArray_Count; // @dynamic backgroundSetsArray_Count;
@property(nonatomic) int countDownSecs; // @dynamic countDownSecs;
@property(nonatomic) _Bool hasCountDownSecs; // @dynamic hasCountDownSecs;
@property(nonatomic) _Bool hasLeadTimeToDisplayInMillis; // @dynamic hasLeadTimeToDisplayInMillis;
@property(nonatomic) _Bool hasReplayVideoRenderer; // @dynamic hasReplayVideoRenderer;
@property(nonatomic) _Bool hasStartCountDownSecs; // @dynamic hasStartCountDownSecs;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) long long leadTimeToDisplayInMillis; // @dynamic leadTimeToDisplayInMillis;
@property(retain, nonatomic) NSMutableArray *modifiedSetsArray; // @dynamic modifiedSetsArray;
@property(readonly, nonatomic) unsigned long long modifiedSetsArray_Count; // @dynamic modifiedSetsArray_Count;
@property(retain, nonatomic) YTIAutoplayRenderer_AutoplayReplaySupportedRenderers *replayVideoRenderer; // @dynamic replayVideoRenderer;
@property(retain, nonatomic) NSMutableArray *setsArray; // @dynamic setsArray;
@property(readonly, nonatomic) unsigned long long setsArray_Count; // @dynamic setsArray_Count;
@property(nonatomic) int startCountDownSecs; // @dynamic startCountDownSecs;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

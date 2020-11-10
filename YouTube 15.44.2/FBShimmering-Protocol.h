//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@protocol FBShimmering <NSObject>
@property(nonatomic) double shimmeringBeginTime;
@property(readonly, nonatomic) double shimmeringFadeTime;
@property(nonatomic) double shimmeringEndFadeDuration;
@property(nonatomic) double shimmeringBeginFadeDuration;
@property(nonatomic) long long shimmeringDirection;
@property(nonatomic, getter=shimmeringHighlightLength, setter=setShimmeringHighlightLength:) double shimmeringHighlightWidth;
@property(nonatomic) double shimmeringSpeed;
@property(nonatomic) double shimmeringOpacity;
@property(nonatomic) double shimmeringAnimationOpacity;
@property(nonatomic) double shimmeringPauseDuration;
@property(nonatomic, getter=isShimmering) _Bool shimmering;

// Remaining properties
@property(nonatomic) double shimmeringHighlightLength;
@end


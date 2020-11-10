//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTAdjustableAccessibilityProtocol-Protocol.h>
#import <Module_Framework/YTEditTrimViewProtocol-Protocol.h>

@class AVAsset, NSString, YTEditTrimHandleView, YTEditTrimThumbnailsView, YTEditTrimTimeCalloutView;
@protocol YTEditTrimAccessibility;

@interface YTEditTrimView : UIView <YTAdjustableAccessibilityProtocol, YTEditTrimViewProtocol>
{
    AVAsset *_asset;
    YTEditTrimThumbnailsView *_thumbnailStrip;
    double _leftPercentage;
    double _rightPercentage;
    YTEditTrimTimeCalloutView *_leftCallout;
    YTEditTrimTimeCalloutView *_rightCallout;
    UIView *_topBorder;
    UIView *_bottomBorder;
    UIView *_leftShadeView;
    UIView *_rightShadeView;
    id <YTEditTrimAccessibility> _accessibilityDelegate;
    double _zoomFactor;
    YTEditTrimHandleView *_leftTrimHandle;
    YTEditTrimHandleView *_rightTrimHandle;
}

+ (double)desiredHeight;
- (void).cxx_destruct;
@property(readonly, nonatomic) double rightPercentage; // @synthesize rightPercentage=_rightPercentage;
@property(readonly, nonatomic) double leftPercentage; // @synthesize leftPercentage=_leftPercentage;
@property(retain, nonatomic) YTEditTrimHandleView *rightTrimHandle; // @synthesize rightTrimHandle=_rightTrimHandle;
@property(retain, nonatomic) YTEditTrimHandleView *leftTrimHandle; // @synthesize leftTrimHandle=_leftTrimHandle;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) __weak id <YTEditTrimAccessibility> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
- (void)adjustableDecrementForView:(id)arg1;
- (void)adjustableIncrementForView:(id)arg1;
- (void)didUpdateTimeRange:(CDStruct_e83c9415)arg1;
- (void)didEndInteractionWithTrimHandle:(id)arg1;
- (void)didBeginInteractionWithTrimHandle:(id)arg1;
- (void)positionTrimHandlesWithLeftTrimPercentage:(double)arg1 rightTrimPercentage:(double)arg2 zoomSide:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)animateToStart:(double)arg1 end:(double)arg2 animationFocusPoint:(struct CGPoint)arg3 zoom:(_Bool)arg4;
- (double)maximumRightTrimHandlePosition;
- (double)minimumLeftTrimHandlePosition;
- (double)trimHandleWidth;
- (void)trimHandle:(id)arg1 isLongPressing:(_Bool)arg2;
- (void)trimHandle:(id)arg1 isPanning:(_Bool)arg2;
- (void)positionCalloutViews;
- (void)positionDecorationViews;
- (id)createShadeView;
- (id)createBorderView;
- (id)fullDurationCalloutView;
- (void)setAsset:(id)arg1 slomoData:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)createCalloutViews;
- (void)createDecorationViews;
- (void)createTrimHandles;
- (void)animateAppearance;
- (void)setTrimHandleColor:(id)arg1;
- (struct UIEdgeInsets)thumbnailInsets;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


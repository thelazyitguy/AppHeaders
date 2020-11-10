//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyling-Protocol.h"

@class MDCActivityIndicator, NSString, YTClipTrimAdjustableView, YTClipTrimHandleView, YTClipTrimRulerView, YTLabel;

@interface YTClipTrimView : UIView <YTPageStyling>
{
    YTClipTrimRulerView *_rulerView;
    UIView *_topBorder;
    UIView *_bottomBorder;
    UIView *_leftShadeView;
    UIView *_rightShadeView;
    double _leftPercentage;
    double _rightPercentage;
    YTLabel *_clipLengthLabel;
    UIView *_playHeadView;
    YTLabel *_playHeadTimeLabel;
    MDCActivityIndicator *_loadingView;
    YTClipTrimHandleView *_leftTrimHandle;
    YTClipTrimHandleView *_rightTrimHandle;
    YTClipTrimAdjustableView *_trimHandleWindow;
    NSString *_clipLengthTemplate;
    NSString *_leftTrimHandleAccessibilityTemplate;
    NSString *_rightTrimHandleAccessibilityTemplate;
    NSString *_rulerAccessibilityTemplate;
    NSString *_windowAccessibilityTemplate;
    double _defaultClipLength;
    double _mediaTime;
    double _totalTime;
    double _trimRulerDuration;
    double _minimumSeekableTime;
    double _maxClipLength;
}

+ (double)desiredHeight;
- (void).cxx_destruct;
@property(nonatomic) double maxClipLength; // @synthesize maxClipLength=_maxClipLength;
@property(nonatomic) double minimumSeekableTime; // @synthesize minimumSeekableTime=_minimumSeekableTime;
@property(nonatomic) double trimRulerDuration; // @synthesize trimRulerDuration=_trimRulerDuration;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) double mediaTime; // @synthesize mediaTime=_mediaTime;
@property(nonatomic) double defaultClipLength; // @synthesize defaultClipLength=_defaultClipLength;
@property(copy, nonatomic) NSString *windowAccessibilityTemplate; // @synthesize windowAccessibilityTemplate=_windowAccessibilityTemplate;
@property(copy, nonatomic) NSString *rulerAccessibilityTemplate; // @synthesize rulerAccessibilityTemplate=_rulerAccessibilityTemplate;
@property(copy, nonatomic) NSString *rightTrimHandleAccessibilityTemplate; // @synthesize rightTrimHandleAccessibilityTemplate=_rightTrimHandleAccessibilityTemplate;
@property(copy, nonatomic) NSString *leftTrimHandleAccessibilityTemplate; // @synthesize leftTrimHandleAccessibilityTemplate=_leftTrimHandleAccessibilityTemplate;
@property(copy, nonatomic) NSString *clipLengthTemplate; // @synthesize clipLengthTemplate=_clipLengthTemplate;
@property(readonly, nonatomic) YTClipTrimAdjustableView *trimHandleWindow; // @synthesize trimHandleWindow=_trimHandleWindow;
@property(readonly, nonatomic) YTClipTrimHandleView *rightTrimHandle; // @synthesize rightTrimHandle=_rightTrimHandle;
@property(readonly, nonatomic) YTClipTrimHandleView *leftTrimHandle; // @synthesize leftTrimHandle=_leftTrimHandle;
- (void)updateAccessibilityValues;
- (double)clipDuration;
- (double)clipEndSeconds;
- (double)clipStartSeconds;
- (void)hideTrimSubviews:(_Bool)arg1;
- (void)updateRulerContentWidth;
- (void)updateLengthLabel:(double)arg1;
- (void)positionDecorationViews;
- (id)createBorderView;
- (id)createShadeView;
- (void)setTrimHandleColor:(id)arg1;
- (id)accessibilityElements;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)setStoryboardFrame:(id)arg1 xPosition:(double)arg2;
- (void)setAdjustableViewDelegate:(id)arg1;
- (void)stopLoadingView;
- (void)startLoadingView;
- (void)removeAllStoryboards;
- (double)trimHandlePositionWidth;
- (id)rulerView;
- (void)updatePlayHead;
- (void)updateClipDuration:(double)arg1;
- (void)positionTrimHandlesWithLeftTrimPercentage:(double)arg1 rightTrimPercentage:(double)arg2;
- (double)trimHandleWidth;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


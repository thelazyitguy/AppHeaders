//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "MDCInkTouchControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "YTPageStyling-Protocol.h"

@class NSString, UITapGestureRecognizer, YTBadge, YTLabel, YTNGWatchMiniBarButtonView, YTNGWatchMiniBarCircularProgressView, YTNGWatchMiniBarPlayPauseButtonView;
@protocol GA11YMixinImpl, YTNGWatchMiniBarControlsViewDelegate, YTNGWatchMiniBarViewSizeProvider;

@interface YTNGWatchMiniBarControlsView : UIView <MDCInkTouchControllerDelegate, UIGestureRecognizerDelegate, YTPageStyling, GA11YMixinEmbedder>
{
    id <YTNGWatchMiniBarControlsViewDelegate> _delegate;
    UITapGestureRecognizer *_playPauseButtonTapRecognizer;
    UITapGestureRecognizer *_replayNextButtonTapRecognizer;
    UITapGestureRecognizer *_dismissMDXAutoplayButtonTapRecognizer;
    UITapGestureRecognizer *_closeButtonTapRecognizer;
    YTNGWatchMiniBarCircularProgressView *_circularProgressView;
    long long _miniBarState;
    id <YTNGWatchMiniBarViewSizeProvider> _miniBarViewSizeProvider;
    long long _adPlaybackState;
    long long _pageStyle;
    NSString *_dismissMDXAutoplayButtonAccessibilityString;
    YTNGWatchMiniBarButtonView *_dismissMDXAutoplayButton;
    _Bool _isAutoplayingOnMDX;
    _Bool _hasNextVideo;
    _Bool _isAutonavEnabled;
    id <GA11YMixinImpl> _accessibilityMixin;
    UIView *_playerControls;
    YTNGWatchMiniBarPlayPauseButtonView *_playPauseButton;
    YTNGWatchMiniBarButtonView *_replayNextButton;
    YTNGWatchMiniBarButtonView *_closeButton;
    YTLabel *_titleLabel;
    YTLabel *_bylineLabel;
    long long _replayNextButtonState;
    YTBadge *_adBadge;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTBadge *adBadge; // @synthesize adBadge=_adBadge;
@property(nonatomic) long long replayNextButtonState; // @synthesize replayNextButtonState=_replayNextButtonState;
@property(readonly, nonatomic) YTLabel *bylineLabel; // @synthesize bylineLabel=_bylineLabel;
@property(readonly, nonatomic) YTLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) YTNGWatchMiniBarButtonView *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) YTNGWatchMiniBarButtonView *replayNextButton; // @synthesize replayNextButton=_replayNextButton;
@property(readonly, nonatomic) YTNGWatchMiniBarPlayPauseButtonView *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(readonly, nonatomic) UIView *playerControls; // @synthesize playerControls=_playerControls;
- (void)didTapDismissMDXAutoplayButton;
- (void)didTapCloseButton;
- (void)didTapReplayNextButton;
- (void)didTapPlayPauseButton;
- (void)addTapTargets;
- (void)setAdPlaying:(_Bool)arg1;
- (id)accessibilityCustomActions;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)setAdPlaybackState:(long long)arg1;
- (void)setMiniBarViewSizeProvider:(id)arg1;
- (void)updateAdCountdownWithSecondsRemaining:(double)arg1 totalSeconds:(double)arg2;
- (void)stopCountdown:(_Bool)arg1;
- (void)startAutonavCountdownWithSeconds:(double)arg1;
- (void)maybeCreateDismissMDXAutoplayButtonWithImage:(id)arg1 accessibilityId:(id)arg2 accessibilityLabel:(id)arg3;
- (void)setByline:(id)arg1 animated:(_Bool)arg2;
- (void)setTitle:(id)arg1 byline:(id)arg2 showingPaidPromotion:(_Bool)arg3;
- (void)setMiniBarState:(long long)arg1 hasNextVideo:(_Bool)arg2 isAutonavEnabled:(_Bool)arg3 isAutoplayingOnMDX:(_Bool)arg4 forceUpdate:(_Bool)arg5;
- (void)setMiniBarState:(long long)arg1 hasNextVideo:(_Bool)arg2 isAutonavEnabled:(_Bool)arg3 isAutoplayingOnMDX:(_Bool)arg4;
- (struct CGRect)touchTargetFrame;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 minibarViewSizeProvider:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


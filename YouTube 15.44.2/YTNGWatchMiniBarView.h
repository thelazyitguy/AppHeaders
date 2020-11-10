//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GA11YMixinEmbedder-Protocol.h"
#import "MDXAutoplayViewProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "YTNGWatchMiniBarControlsViewDelegate-Protocol.h"
#import "YTPageStyleProvider-Protocol.h"
#import "YTPageStyling-Protocol.h"

@class NSString, UIPanGestureRecognizer, UITapGestureRecognizer, YTNGWatchMiniBarControlsView, YTNGWatchMiniBarVideoView, YTProgressView;
@protocol GA11YMixinImpl, MDXAutoplayViewDelegate, YTNGWatchMiniBarViewDelegate, YTNGWatchMiniBarViewSizeProvider, YTPageStyleProvider;

@interface YTNGWatchMiniBarView : UIView <GA11YMixinEmbedder, UIGestureRecognizerDelegate, YTNGWatchMiniBarControlsViewDelegate, YTPageStyling, YTPageStyleProvider, MDXAutoplayViewProtocol>
{
    id <YTNGWatchMiniBarViewDelegate> _delegate;
    UITapGestureRecognizer *_expandWatchTapRecognizer;
    UIPanGestureRecognizer *_panRecognizer;
    YTProgressView *_progressBarView;
    _Bool _adPlaying;
    _Bool _isAutoplayingOnMDX;
    _Bool _animating;
    _Bool _enableProgressBarView;
    id <MDXAutoplayViewDelegate> _autoplayDelegate;
    id <GA11YMixinImpl> _accessibilityMixin;
    YTNGWatchMiniBarVideoView *_miniBarVideo;
    long long _miniBarState;
    double _toastOffsetY;
    long long _adPlaybackState;
    id <YTNGWatchMiniBarViewSizeProvider> _miniBarViewSizeProvider;
    long long _watchMiniPlayerLayout;
    id <YTPageStyleProvider> _pageStyleProviderDelegate;
    YTNGWatchMiniBarControlsView *_controlsView;
    struct CGSize _animationOverrideSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableProgressBarView; // @synthesize enableProgressBarView=_enableProgressBarView;
@property(readonly, nonatomic) YTNGWatchMiniBarControlsView *controlsView; // @synthesize controlsView=_controlsView;
@property(nonatomic) __weak id <YTPageStyleProvider> pageStyleProviderDelegate; // @synthesize pageStyleProviderDelegate=_pageStyleProviderDelegate;
@property(nonatomic) long long watchMiniPlayerLayout; // @synthesize watchMiniPlayerLayout=_watchMiniPlayerLayout;
@property(readonly, nonatomic) __weak id <YTNGWatchMiniBarViewSizeProvider> miniBarViewSizeProvider; // @synthesize miniBarViewSizeProvider=_miniBarViewSizeProvider;
@property(nonatomic) long long adPlaybackState; // @synthesize adPlaybackState=_adPlaybackState;
@property(nonatomic) struct CGSize animationOverrideSize; // @synthesize animationOverrideSize=_animationOverrideSize;
@property(nonatomic) double toastOffsetY; // @synthesize toastOffsetY=_toastOffsetY;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) long long miniBarState; // @synthesize miniBarState=_miniBarState;
@property(readonly, nonatomic) YTNGWatchMiniBarVideoView *miniBarVideo; // @synthesize miniBarVideo=_miniBarVideo;
@property(nonatomic) __weak id <MDXAutoplayViewDelegate> autoplayDelegate; // @synthesize autoplayDelegate=_autoplayDelegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)didTapDismissMDXAutoplay;
- (void)didTapClose;
- (void)didTapReplay;
- (void)didTapPlay;
- (void)didTapPause;
- (void)didTapNext;
- (void)setPercentDurationWatched:(double)arg1;
- (void)setMiniBarAspectRatio:(long long)arg1 animated:(_Bool)arg2;
- (struct CGSize)appSize;
- (_Bool)isWide;
- (void)didPan:(id)arg1;
- (void)didTapExpandView;
- (void)addTapTargets;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) long long pageStyle;
- (void)setAdPlaying:(_Bool)arg1 animated:(_Bool)arg2;
- (id)accessibilityCustomActions;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (id)thumbnailMappings;
- (void)setNowAutoplaying:(_Bool)arg1;
- (void)updateViewWithDismissAutoplayButtonImage:(id)arg1 accessibilityId:(id)arg2 accessibilityLabel:(id)arg3;
- (void)setControlsOpacity:(double)arg1;
- (void)updateAdCountdownWithSecondsRemaining:(double)arg1 totalSeconds:(double)arg2;
- (void)stopCountdown:(_Bool)arg1;
- (void)startAutonavCountdownWithSeconds:(double)arg1;
- (void)setByline:(id)arg1 animated:(_Bool)arg2;
- (void)setTitle:(id)arg1 byline:(id)arg2 showingPaidPromotion:(_Bool)arg3;
- (void)setPlayerView:(id)arg1;
- (void)setMiniBarViewSizeProvider:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 minibarViewSizeProvider:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


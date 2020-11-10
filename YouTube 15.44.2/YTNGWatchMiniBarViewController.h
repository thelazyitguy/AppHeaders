//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTMultiSizeViewController.h>

#import "MDXWatchMiniBarViewControllerProtocol-Protocol.h"
#import "YTAutonavCountdownObserver-Protocol.h"
#import "YTNGWatchFlexyControllerDelegate-Protocol.h"
#import "YTNGWatchMiniBarViewDelegate-Protocol.h"
#import "YTNGWatchMiniBarViewSizeProvider-Protocol.h"
#import "YTNGWatchQueueObserver-Protocol.h"
#import "YTPageStyleProvider-Protocol.h"
#import "YTPaidContentControllerDelegate-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, GOOOverlayObserver, NSError, NSString, UIViewController, YTIVideoDetails, YTInteractionLoggingProxyButton, YTNGWatchFlexyController, YTNGWatchMiniBarView, YTPaidContentController;
@protocol YTAutonavControllerProtocol, YTNGWatchMiniBarViewControllerDelegate, YTNGWatchQueue, YTResponder, YTServices, YTWatchPlayerViewControllerDelegate;

@interface YTNGWatchMiniBarViewController : YTMultiSizeViewController <YTNGWatchFlexyControllerDelegate, YTNGWatchMiniBarViewDelegate, YTPaidContentControllerDelegate, YTPageStyleProvider, YTAutonavCountdownObserver, YTNGWatchMiniBarViewSizeProvider, YTNGWatchQueueObserver, YTResponder, MDXWatchMiniBarViewControllerProtocol>
{
    id <YTNGWatchQueue> _watchQueue;
    UIViewController<YTWatchPlayerViewControllerDelegate> *_playerViewController;
    id <YTAutonavControllerProtocol> _autonavController;
    NSError *_lastPlaybackError;
    GOOOverlayObserver *_overlayObserver;
    struct CGRect _initialMiniBarFrame;
    double _initialToastOffsetY;
    double _lastDeltaY;
    _Bool _isDraggingMiniBar;
    _Bool _shouldDismissMiniBar;
    _Bool _isRotating;
    _Bool _isDismissalInProgress;
    YTInteractionLoggingProxyButton *_playLoggingButton;
    YTInteractionLoggingProxyButton *_pauseLoggingButton;
    YTInteractionLoggingProxyButton *_skipAdLoggingButton;
    _Bool _needsLoggingButtonsAttachedOnActivation;
    YTPaidContentController *_paidContentController;
    _Bool _showingPaidPromotion;
    NSString *_storedByline;
    NSString *_storedMDXByline;
    YTIVideoDetails *_videoDetails;
    _Bool _activated;
    _Bool _visible;
    _Bool _adPlaying;
    id <YTResponder> _parentResponder;
    CDUnknownBlockType _verifyDismissMiniBarWhileCasting;
    GIMMe *_gimme;
    id <YTNGWatchMiniBarViewControllerDelegate> _delegate;
    id <YTServices> _services;
    YTNGWatchFlexyController *_flexyWatchController;
    YTNGWatchMiniBarView *_watchMiniBarView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool adPlaying; // @synthesize adPlaying=_adPlaying;
@property(retain, nonatomic) YTNGWatchMiniBarView *watchMiniBarView; // @synthesize watchMiniBarView=_watchMiniBarView;
@property(retain, nonatomic) YTNGWatchFlexyController *flexyWatchController; // @synthesize flexyWatchController=_flexyWatchController;
@property(readonly, nonatomic) __weak id <YTServices> services; // @synthesize services=_services;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <YTNGWatchMiniBarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isActivated) _Bool activated; // @synthesize activated=_activated;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(copy, nonatomic) CDUnknownBlockType verifyDismissMiniBarWhileCasting; // @synthesize verifyDismissMiniBarWhileCasting=_verifyDismissMiniBarWhileCasting;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)updateMiniBarLayout;
- (void)resetMiniBarAfterPan;
- (void)resetMiniBar;
- (void)dismissMiniBarWithVelocity:(double)arg1 gestureType:(int)arg2;
- (void)handleOverlayChange:(id)arg1;
- (void)setPlayerViewController:(id)arg1;
- (void)updateMiniBarPlayerState;
- (void)setVideoDetails:(id)arg1;
- (void)updateMiniBarSkipAdStatus;
- (_Bool)isSkipAdEnabled;
- (void)attachLoggingButtons;
- (id)miniplayerRenderer;
- (void)performKeyCommandAction:(unsigned long long)arg1;
@property(readonly, nonatomic) long long pageStyle;
- (_Bool)isPlayerAlignmentNonStandard;
- (long long)defaultAspectRatio;
- (double)userEducationViewWidth;
- (void)hidePaidContentRenderer;
- (void)showPaidContentRenderer:(id)arg1;
- (void)updateThumbnailViewCustomFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)updateRenderingViewCustomFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)updateFlexiblePlayerHeight:(double)arg1 animated:(_Bool)arg2;
- (void)autonavCountdownDidStopWithEndscreenCancelled:(_Bool)arg1;
- (void)autonavCountdownDidUpdateWithRemainingInterval:(long long)arg1;
- (void)autonavCountdownDidStartWithSeconds:(double)arg1;
- (void)cancelDismissalAnimationIfInProgress;
- (void)setAutonavController:(id)arg1;
- (void)playbackControllerDidReceivePlayerResponse:(id)arg1;
- (void)playbackControllerDidLoadPlayerWithPlaybackData:(id)arg1;
- (void)playbackControllerStateDidChange;
- (void)playbackControllerCurrentVideoAspectRatioDidChange:(double)arg1;
- (void)playbackControllerWillFailWithError:(id)arg1;
- (void)playbackControllerPlayerStateDidChange;
- (void)playbackControllerCurrentVideoMediaTimeDidChange:(double)arg1;
- (void)didSetPlayerViewController:(id)arg1 forIndex:(long long)arg2;
- (void)didSetCurrentIndexFromIndex:(long long)arg1 toIndex:(long long)arg2 withInPlaceUpdate:(_Bool)arg3;
- (void)setMinibarVisibleFraction:(double)arg1;
- (void)didPanMinibarWithState:(long long)arg1 delta:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)isAutonavEnabled;
- (_Bool)hasNextVideo;
- (void)didUpdateAspectRatio;
- (void)didTapNext;
- (void)didTapReplay;
- (void)didTapExpand;
- (void)didTapClose;
- (void)didTapPause;
- (void)resumePlaybackOrRetryOnError;
- (void)didTapPlay;
- (void)didTransitionFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (void)willTransitionFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (void)updateViewWithDismissAutoplayButtonImage:(id)arg1 accessibilityId:(id)arg2 accessibilityLabel:(id)arg3;
- (void)resetMiniBarForMDX;
- (void)updateVideoDetailsWithMDXByline:(id)arg1;
- (void)updateMiniBarPlayerStateFromRenderer;
- (void)updateVideoDetails;
- (void)maybeAttachLoggingButtonsOnWatchTransition;
- (void)setPercentDurationWatched:(double)arg1;
- (void)updateAdStatus;
- (void)setSnapshotViewForPlayer:(id)arg1;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1 watchQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


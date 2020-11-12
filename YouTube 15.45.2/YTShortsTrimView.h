//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyling-Protocol.h"
#import "YTShortsTrimToShortsToggleViewDelegate-Protocol.h"

@class NSArray, NSString, UITapGestureRecognizer, YTPlaybackButton, YTShortsNavigationHeaderView, YTShortsScrimView, YTShortsTrimToShortsToggleView;
@protocol YTInteractionLoggingButtonProtocol, YTShortsLoggingProxy, YTShortsTrimViewDelegate, YTShortsTrimViewModel;

@interface YTShortsTrimView : UIView <YTPageStyling, YTShortsTrimToShortsToggleViewDelegate>
{
    id <YTShortsTrimViewModel> _model;
    YTShortsTrimToShortsToggleView *_trimToggleView;
    UIView<YTShortsLoggingProxy> *_trimToolView;
    YTShortsNavigationHeaderView *_navigationHeaderView;
    UIView *_playerView;
    UIView<YTShortsLoggingProxy> *_scrubberView;
    YTPlaybackButton *_playbackButton;
    UIView *_safeAreaContainerView;
    UITapGestureRecognizer *_playerTapGesture;
    YTShortsScrimView *_scrimView;
    id <YTShortsTrimViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTShortsTrimViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)shortsTrimToShortsToggleDidChange:(id)arg1;
- (void)finishPlaybackButtonTransitionFromModel:(id)arg1;
- (void)finishTrimViewTransitionFromModel:(id)arg1;
- (void)finishScrubberViewTransitionFromModel:(id)arg1;
- (void)performPlaybackButtonTransitionFromModel:(id)arg1;
- (void)performTrimViewTransitionFromModel:(id)arg1;
- (void)performScrubberViewTransitionFromModel:(id)arg1;
- (void)preparePlaybackButtonForTransitionFromModel:(id)arg1;
- (void)prepareTrimViewForTransitionFromModel:(id)arg1;
- (void)prepareScrubberViewForTransitionFromModel:(id)arg1;
- (_Bool)shouldAnimateChangesFromModel:(id)arg1;
- (void)modelDidChange:(id)arg1 animated:(_Bool)arg2;
- (void)handlePlayerTap:(id)arg1;
- (void)playbackButtonTouchUpInside:(id)arg1;
- (void)setupNavigationHeaderView;
@property(readonly, nonatomic) id <YTInteractionLoggingButtonProtocol> playbackButtonLoggingProxy;
@property(readonly, nonatomic) id <YTInteractionLoggingButtonProtocol> trimToggleLoggingProxy;
@property(readonly, nonatomic) NSArray *loggingElements;
- (void)hideScrimView;
- (void)showScrimView;
- (void)showConfirmDismissPromptWithVisualElement:(id)arg1;
- (void)setScrubberView:(id)arg1;
- (void)setTrimToolView:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setModel:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)playerRectForModel:(id)arg1;
- (void)layoutPlayerView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

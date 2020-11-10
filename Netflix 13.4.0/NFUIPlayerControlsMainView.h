//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIPlayerControlsViewRefresh.h"

@class NFUIAnimatedPlayButton, NFUIAnimatedSeekButton, NSBlockOperation, NSLayoutConstraint, UIStackView;

@interface NFUIPlayerControlsMainView : NFUIPlayerControlsViewRefresh
{
    NFUIAnimatedSeekButton *_rewindButton;
    NFUIAnimatedPlayButton *_playPauseButton;
    NFUIAnimatedSeekButton *_forwardButton;
    NSLayoutConstraint *_transportControlsContainerWidth;
    UIStackView *_transportControlsStackView;
    NSLayoutConstraint *_forwardButtonWidth;
    NSLayoutConstraint *_rewindButtonWidth;
    NSLayoutConstraint *_playButtonWidth;
    NSBlockOperation *_buttonAnimationCompletion;
}

+ (id)fullPlayerMainView;
- (void).cxx_destruct;
@property(retain, nonatomic) NSBlockOperation *buttonAnimationCompletion; // @synthesize buttonAnimationCompletion=_buttonAnimationCompletion;
@property(nonatomic) __weak NSLayoutConstraint *playButtonWidth; // @synthesize playButtonWidth=_playButtonWidth;
@property(nonatomic) __weak NSLayoutConstraint *rewindButtonWidth; // @synthesize rewindButtonWidth=_rewindButtonWidth;
@property(nonatomic) __weak NSLayoutConstraint *forwardButtonWidth; // @synthesize forwardButtonWidth=_forwardButtonWidth;
@property(nonatomic) __weak UIStackView *transportControlsStackView; // @synthesize transportControlsStackView=_transportControlsStackView;
@property(nonatomic) __weak NSLayoutConstraint *transportControlsContainerWidth; // @synthesize transportControlsContainerWidth=_transportControlsContainerWidth;
@property(nonatomic) __weak NFUIAnimatedSeekButton *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(nonatomic) __weak NFUIAnimatedPlayButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(nonatomic) __weak NFUIAnimatedSeekButton *rewindButton; // @synthesize rewindButton=_rewindButton;
- (void)resetViewState;
- (void)performButtonAnimationForRewind:(_Bool)arg1 standAlone:(_Bool)arg2 withSkipInterval:(double)arg3;
- (void)adjustTransportControlsPosition;
- (double)calculatedTransportSpacing;
- (void)animateTransportControlsAppearance;
- (void)enableSeekButtons;
- (void)disableSeekButtons;
- (void)setSeekControlsEnabled:(_Bool)arg1;
- (void)configureForwardRewindAccessibilityWithSeconds:(int)arg1;
- (void)configureAccessibility;
- (void)updatePauseButton:(_Bool)arg1;
- (void)showControls;
- (void)hideControls;
- (void)hideControlsWithAnimation:(_Bool)arg1;
- (void)showControlsWithAnimation:(_Bool)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)configureView;

@end


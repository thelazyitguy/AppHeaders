//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MDCActivityIndicator, UIButton, UITapGestureRecognizer, YTPlaybackButton;
@protocol YTPlayerPlaybackButtonViewDelegate;

@interface YTPlayerPlaybackButtonView : UIView
{
    id <YTPlayerPlaybackButtonViewDelegate> _delegate;
    int _playbackButtonState;
    YTPlaybackButton *_playPauseButton;
    UIButton *_replayButton;
    MDCActivityIndicator *_spinner;
    UITapGestureRecognizer *_spinnerTapRecognizer;
}

- (void).cxx_destruct;
- (double)playbackButtonSize;
- (void)didPressSpinner;
- (void)didPressReplayButton;
- (void)didPressPlayPauseButton;
- (void)setPlaybackButtonState:(int)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (id)initWithDelegate:(id)arg1;

@end


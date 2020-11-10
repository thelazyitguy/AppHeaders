//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIButton;
@protocol SPTNowPlayingPlayButton, SPTNowPlayingPlaybackActionsHandlerObserver;

@protocol SPTNowPlayingPlaybackActionsHandler <NSObject>
- (void)toggleRepeat:(UIButton *)arg1;
- (void)toggleShuffle:(UIButton *)arg1;
- (void)skip15SecondsForward:(UIButton *)arg1;
- (void)skip15SecondsBackward:(UIButton *)arg1;
- (void)skipToPrevious:(UIButton *)arg1;
- (void)skipToNext:(UIButton *)arg1;
- (void)playPause:(UIButton<SPTNowPlayingPlayButton> *)arg1;
@property(nonatomic, readonly) unsigned long long repeatMode;
@property(nonatomic, readonly) _Bool isSkippingToNextTrackAllowedWithoutUpsell;
@property(nonatomic, readonly) _Bool isSkippingToNextTrackAllowed;
@property(nonatomic, readonly) _Bool isSkippingToPreviousTrackAllowed;
@property(nonatomic, readonly) _Bool isSeekingAllowed;
@property(nonatomic, readonly) _Bool isShufflingAllowed;
@property(nonatomic, readonly) _Bool isResumingAllowed;
@property(nonatomic, readonly) _Bool isPausingAllowed;
@property(nonatomic, readonly) _Bool isShuffling;
@property(nonatomic, readonly) _Bool isPaused;
- (void)removeObserver:(id <SPTNowPlayingPlaybackActionsHandlerObserver>)arg1;
- (void)addObserver:(id <SPTNowPlayingPlaybackActionsHandlerObserver>)arg1;
@end


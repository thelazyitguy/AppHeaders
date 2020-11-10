//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class YTPlaybackConfig, YTPlaybackData, YTPlayerStatus, YTPlayerTransition, YTSingleVideoController;
@protocol YTSingleVideoSequencer;

@protocol YTSingleVideoSequencerDelegate <NSObject>
- (void)didTransitionToContentSequenceForVideoSequencer:(id <YTSingleVideoSequencer>)arg1;
- (void)videoSequencer:(id <YTSingleVideoSequencer>)arg1 willTransitionToNextContentSequenceWithPlayerTransition:(YTPlayerTransition *)arg2 playbackConfig:(YTPlaybackConfig *)arg3 playbackData:(YTPlaybackData *)arg4;
- (void)didFinishContentSequenceForVideoSequencer:(id <YTSingleVideoSequencer>)arg1;
- (void)videoSequencer:(id <YTSingleVideoSequencer>)arg1 didActivateVideoController:(YTSingleVideoController *)arg2;
- (void)videoSequencer:(id <YTSingleVideoSequencer>)arg1 willActivateVideoController:(YTSingleVideoController *)arg2;
- (YTPlayerStatus *)playerStatusForVideoSequencer:(id <YTSingleVideoSequencer>)arg1;
@end


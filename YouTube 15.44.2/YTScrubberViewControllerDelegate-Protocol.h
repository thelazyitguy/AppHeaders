//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTInlineMutedPlaybackScrubberViewController;

@protocol YTScrubberViewControllerDelegate <NSObject>
- (void)scrubberViewControllerDidEndScrubbing:(YTInlineMutedPlaybackScrubberViewController *)arg1;
- (void)scrubberViewController:(YTInlineMutedPlaybackScrubberViewController *)arg1 didScrubToTime:(double)arg2;
- (void)scrubberViewControllerDidStartScrubbing:(YTInlineMutedPlaybackScrubberViewController *)arg1;
- (void)scrubberViewControllerDidPressToggleFullscreen:(YTInlineMutedPlaybackScrubberViewController *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@protocol YTPlayerBarViewDelegate <NSObject>
- (void)didSeekToProductionTime:(double)arg1;
- (void)didSeekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)didScrubToProductionTime:(double)arg1;
- (void)didEndScrubbing;
- (void)didScrubToTime:(double)arg1;
- (void)didStartScrubbing;
- (void)didPressPlayerBarNext;
- (void)didTogglePlayPause;
- (void)didPressLiveSync;
- (void)didPressToggleFullscreen;

@optional
- (_Bool)isCurrentVideoVerticallyCropped;
- (_Bool)isCurrentVideoVertical;
- (void)didPressCardboardButton;
- (void)didPressPlayerBarReplay;
@end


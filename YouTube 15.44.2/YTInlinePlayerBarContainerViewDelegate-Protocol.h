//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YTInlinePlayerBarContainerView;

@protocol YTInlinePlayerBarContainerViewDelegate <NSObject>
- (void)didTapCurrentChapterTitle;
- (void)inlinePlayerBarContainerView:(YTInlinePlayerBarContainerView *)arg1 didScrubToChapteredTime:(double)arg2 shouldSnap:(_Bool)arg3;
- (void)didPressCardboardButton;
- (void)didPressPlayerBarReplay;
- (void)didPressPlayerBarNext;
- (void)didTogglePlayPause;
- (void)didPressLiveSync;
- (void)didPressToggleFullscreen;

@optional
- (NSString *)chapterTitleForTime:(double)arg1;
- (void)didPressTimestamps:(_Bool)arg1;
@end


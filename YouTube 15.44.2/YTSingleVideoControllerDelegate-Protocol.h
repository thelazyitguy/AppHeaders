//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTSingleVideoLoggingControllerDelegate-Protocol.h>

@class YTSingleVideoController;

@protocol YTSingleVideoControllerDelegate <YTSingleVideoLoggingControllerDelegate>
- (void)singleVideoController:(YTSingleVideoController *)arg1 externalPlaybackActiveStateDidChange:(_Bool)arg2;
- (void)singleVideoController:(YTSingleVideoController *)arg1 requiresReloadAndStartPlayback:(_Bool)arg2;
- (void)singleVideoController:(YTSingleVideoController *)arg1 requiresStreamingDataRefreshAndStartPlayback:(_Bool)arg2;
@end


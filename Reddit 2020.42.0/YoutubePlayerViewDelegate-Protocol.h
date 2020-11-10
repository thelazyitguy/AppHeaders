//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, UIColor, UIView, YoutubePlayerView;

@protocol YoutubePlayerViewDelegate <NSObject>
- (_Bool)playerView:(YoutubePlayerView *)arg1 handleNavigationToUrl:(NSURL *)arg2;

@optional
- (UIView *)playerViewPreferredInitialLoadingView:(YoutubePlayerView *)arg1;
- (UIColor *)playerViewPreferredWebViewBackgroundColor:(YoutubePlayerView *)arg1;
- (void)playerView:(YoutubePlayerView *)arg1 didPlayTime:(float)arg2;
- (void)playerView:(YoutubePlayerView *)arg1 receivedError:(long long)arg2;
- (void)playerView:(YoutubePlayerView *)arg1 didChangeToQuality:(long long)arg2;
- (void)playerView:(YoutubePlayerView *)arg1 didChangeToState:(long long)arg2;
- (void)playerViewDidBecomeReady:(YoutubePlayerView *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TheatreFeedPostView, _TtC11RedditVideo21RedditVideoPlayerView, _TtC6Reddit22CallToActionIdentifier;

@protocol TheatreFeedPostViewDelegate <NSObject>
- (void)theatreFeedPostView:(TheatreFeedPostView *)arg1 didTapFullscreenFromRedditVideoPlayerView:(_TtC11RedditVideo21RedditVideoPlayerView *)arg2;
- (void)theatreFeedPostView:(TheatreFeedPostView *)arg1 didTapViewFromRedditVideoPlayerView:(_TtC11RedditVideo21RedditVideoPlayerView *)arg2;
- (void)theatreFeedPostView:(TheatreFeedPostView *)arg1 didTapCallToActionFromRedditVideoPlayerView:(_TtC11RedditVideo21RedditVideoPlayerView *)arg2 callToAction:(_TtC6Reddit22CallToActionIdentifier *)arg3;
- (_Bool)theatreIsDisplayingTitle;
- (double)offsetControlBarHeight:(TheatreFeedPostView *)arg1;
- (void)theatreImageViewDidZoom:(_Bool)arg1;
- (void)theatreFeedPostViewDidTap:(TheatreFeedPostView *)arg1;
@end


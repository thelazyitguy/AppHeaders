//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

@class _TtC11RedditVideo15RedditVideoView, _TtC11RedditVideo21RedditVideoPlayerView;

@interface _TtC6Reddit21RedditCinemaVideoNode : BaseFeedDisplayNode
{
    // Error parsing type: , name: node
    // Error parsing type: , name: isFocusedMedia
    // Error parsing type: , name: isInPlayableVisiblilty
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithVisibilityTracker:(id)arg1 visibilityOptions:(id)arg2;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)didExitVisibleThresholdStateWithVisibilityContext:(id)arg1;
- (void)didEnterFullyVisibleStateWithVisibilityContext:(id)arg1;
- (void)didEnterDisplayState;
- (void)resignFocusedMedia;
- (void)becomeFocusedMediaWithIsMuted:(_Bool)arg1;
- (id)initWithRedditVideoViewBlock:(CDUnknownBlockType)arg1;
@property(nonatomic, readonly) _TtC11RedditVideo21RedditVideoPlayerView *redditVideoPlayerView;
@property(nonatomic, readonly) _TtC11RedditVideo15RedditVideoView *redditVideoView;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@protocol SPTNowPlayingPlaybackActionsHandler;

@interface SPTNowPlayingViewRepeatAction : SPAction
{
    id <SPTNowPlayingPlaybackActionsHandler> _playbackActionHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SPTNowPlayingPlaybackActionsHandler> playbackActionHandler; // @synthesize playbackActionHandler=_playbackActionHandler;
- (id)execute:(id)arg1;
- (id)logEventName;
- (id)iconColor;
- (long long)icon;
- (id)title;
- (id)initWithPlaybackActionsHandler:(id)arg1 logContext:(id)arg2;

@end

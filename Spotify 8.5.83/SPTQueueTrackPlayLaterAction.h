//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@class SPTPlayerTrack;
@protocol SPTAlertController, SPTPlayer, SPTPlayerQueue;

@interface SPTQueueTrackPlayLaterAction : SPAction
{
    _Bool _trackIsAvailable;
    SPTPlayerTrack *_track;
    id <SPTPlayer> _player;
    id <SPTPlayerQueue> _playerQueue;
    id <SPTAlertController> _alertController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool trackIsAvailable; // @synthesize trackIsAvailable=_trackIsAvailable;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) id <SPTPlayerQueue> playerQueue; // @synthesize playerQueue=_playerQueue;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
- (void)startAddToQueueTask;
- (void)startPlayContextWithTheCurrentTrack;
- (id)execute:(id)arg1;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithTrack:(id)arg1 player:(id)arg2 playerQueue:(id)arg3 logContext:(id)arg4 alertController:(id)arg5;

@end


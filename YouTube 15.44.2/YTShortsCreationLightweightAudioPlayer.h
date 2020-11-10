//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTShortsCreationPlayer-Protocol.h"
#import "YTShortsCreationPlayerSeekable-Protocol.h"

@class GIMMe, NSString, YTLightweightPlayerViewController;
@protocol YTShortsCreationLightweightAudioPlayerObserver;

@interface YTShortsCreationLightweightAudioPlayer : NSObject <YTShortsCreationPlayer, YTShortsCreationPlayerSeekable>
{
    YTLightweightPlayerViewController *_playerViewController;
    float _playbackRate;
    id <YTShortsCreationLightweightAudioPlayerObserver> _playerControllerObserver;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTShortsCreationLightweightAudioPlayerObserver> playerControllerObserver; // @synthesize playerControllerObserver=_playerControllerObserver;
@property(nonatomic, getter=isActivePlayback) _Bool activePlayback;
@property(readonly, nonatomic) _Bool isPlaying;
@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) CDStruct_1b6d18a9 loopSeekPrecision;
@property(nonatomic, getter=isLooping) _Bool looping;
- (void)invalidate;
- (void)rewind;
- (void)replay;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completion:(CDUnknownBlockType)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) _Bool isPlayerLoaded;
- (id)createPlayerTransitionWithVideoID:(id)arg1 playerParams:(id)arg2;
- (void)startLightWeightPlaybackWithVideoID:(id)arg1 playerParams:(id)arg2;
- (void)loadPlayerWithVideoID:(id)arg1 playerParams:(id)arg2 parentResponder:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


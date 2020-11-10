//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NFUIPlayerStateMachine : NSObject
{
    _Bool _needsUpdateState;
    _Bool _stopped;
    _Bool _failed;
    _Bool _ended;
    _Bool _loading;
    _Bool _ready;
    _Bool _paused;
    _Bool _playing;
    _Bool _stalled;
    _Bool _seeking;
    unsigned long long _state;
    unsigned long long _previousState;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property(nonatomic, getter=isSeeking) _Bool seeking; // @synthesize seeking=_seeking;
@property(nonatomic, getter=isStalled) _Bool stalled; // @synthesize stalled=_stalled;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(readonly, nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic, getter=isReady) _Bool ready; // @synthesize ready=_ready;
@property(readonly, nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic, getter=isEnded) _Bool ended; // @synthesize ended=_ended;
@property(readonly, nonatomic, getter=isFailed) _Bool failed; // @synthesize failed=_failed;
@property(readonly, nonatomic, getter=isStopped) _Bool stopped; // @synthesize stopped=_stopped;
@property(nonatomic) unsigned long long previousState; // @synthesize previousState=_previousState;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)setPlaying;
- (void)setPaused;
- (void)setReady;
- (void)setLoading;
- (void)setEnded;
- (void)setStopped;
- (void)setFailed;
- (void)setNeedsUpdateState;
- (void)updateStateIfNeeded;
- (unsigned long long)derivedState;

@end

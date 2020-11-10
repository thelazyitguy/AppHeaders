//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeUIPromoV2Player-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSString, NSURL;
@protocol SPTPlayer;

@interface SPTHomeUIPromoV2PlayerImplementation : NSObject <SPTPlayerObserver, SPTHomeUIPromoV2Player>
{
    id <SPTPlayer> _player;
    NSURL *_currentPlayingContextURI;
    CDUnknownBlockType _playerStateDidUpdateBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType playerStateDidUpdateBlock; // @synthesize playerStateDidUpdateBlock=_playerStateDidUpdateBlock;
@property(copy, nonatomic) NSURL *currentPlayingContextURI; // @synthesize currentPlayingContextURI=_currentPlayingContextURI;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)updatePlayButtonUIForPlayerState:(id)arg1;
- (id)obtainPlayerDataWithKey:(id)arg1 fromCommand:(id)arg2;
- (id)obtainPlayOptionsFromCommand:(id)arg1;
- (id)obtainPlayerContextFromCommand:(id)arg1;
- (void)resetPromoV2PlayerToDefaultState;
- (id)logPlayerAction:(unsigned long long)arg1 withModel:(id)arg2 loggingData:(id)arg3 logger:(id)arg4;
- (_Bool)isPlaying;
- (void)resume;
- (void)pause;
- (void)playContext:(id)arg1 withOptions:(id)arg2 loggingParams:(id)arg3 stateDidUpdate:(CDUnknownBlockType)arg4;
- (void)togglePlayingInModel:(id)arg1 logger:(id)arg2 loggingData:(id)arg3 playerStateDidUpdate:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

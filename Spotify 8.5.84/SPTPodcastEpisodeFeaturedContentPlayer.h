//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"

@class NSString, SPTPlayerState;
@protocol SPTEpisodeSegmentsModel, SPTPlayer, SPTPodcastEpisodeFeaturedContentPlayerPlayerDelegate;

@interface SPTPodcastEpisodeFeaturedContentPlayer : NSObject <SPTPlayerObserver>
{
    id <SPTPodcastEpisodeFeaturedContentPlayerPlayerDelegate> _delegate;
    id <SPTPlayer> _player;
    SPTPlayerState *_currentState;
    id <SPTEpisodeSegmentsModel> _entitiesModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTEpisodeSegmentsModel> entitiesModel; // @synthesize entitiesModel=_entitiesModel;
@property(retain, nonatomic) SPTPlayerState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTPodcastEpisodeFeaturedContentPlayerPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (_Bool)isCurrentEpisodePlaying;
- (id)currentlyPlayingSegment;
- (unsigned long long)currentlyPlayingSegmentIndex:(id)arg1;
- (void)playNewEpisodeWithSegment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resume;
- (void)userDidSelectEntity:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshPlayerWithEntities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

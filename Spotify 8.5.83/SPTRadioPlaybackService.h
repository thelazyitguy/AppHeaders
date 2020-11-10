//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"
#import "SPTRadioStationsObserver-Protocol.h"

@class NSHashTable, NSString, NSURL, SPTRadioStation, SPTRadioStationsService;
@protocol SPTPlayer, SPTRadioRemoteConfigService, SPTRadioTestManager;

@interface SPTRadioPlaybackService : NSObject <SPTPlayerObserver, SPTRadioStationsObserver>
{
    SPTRadioStation *_currentStation;
    NSURL *_currentContextURI;
    unsigned long long _playbackState;
    id <SPTRadioTestManager> _radioTestManager;
    id <SPTRadioRemoteConfigService> _radioRemoteConfigService;
    id <SPTPlayer> _player;
    SPTRadioStationsService *_stationService;
    NSHashTable *_delegates;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(nonatomic) __weak SPTRadioStationsService *stationService; // @synthesize stationService=_stationService;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) __weak id <SPTRadioRemoteConfigService> radioRemoteConfigService; // @synthesize radioRemoteConfigService=_radioRemoteConfigService;
@property(retain, nonatomic) id <SPTRadioTestManager> radioTestManager; // @synthesize radioTestManager=_radioTestManager;
@property(nonatomic) unsigned long long playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) NSURL *currentContextURI; // @synthesize currentContextURI=_currentContextURI;
@property(retain, nonatomic) SPTRadioStation *currentStation; // @synthesize currentStation=_currentStation;
- (id)convertToGDPRSafeURIIfNeeded:(id)arg1;
- (void)removeRadioPlaybackDelegate:(id)arg1;
- (void)addRadioPlaybackDelegate:(id)arg1;
- (id)playbackDescriptionForURL:(id)arg1;
- (_Bool)isStationPlaying:(id)arg1;
- (void)radioStationService:(id)arg1 loadedTracksForStation:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)broadcastCurrentTrackChanged;
- (void)broadcastPlaybackError:(id)arg1;
- (void)broadcastPlaybackStateChanged:(unsigned long long)arg1;
- (void)forceRebroadcastCurrentPlaybackState;
- (id)contextForStation:(id)arg1;
- (void)pauseRadioPlayback;
- (_Bool)wouldPlaySameTrackWithoutShuffleRules:(id)arg1;
- (void)startEntityPagelessRadioStationWithSeedURL:(id)arg1 player:(id)arg2 startedFromElement:(id)arg3 referrerIdentifier:(id)arg4 interactionId:(id)arg5 pageInstanceId:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)startEntityPagedRadioStationWithSeedURL:(id)arg1 startedFromElement:(id)arg2 player:(id)arg3 createStation:(_Bool)arg4 previousTracks:(id)arg5 referrerIdentifier:(id)arg6 interactionId:(id)arg7 pageInstanceId:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)startRadioStationWithSeedURL:(id)arg1 startedFromElement:(id)arg2 player:(id)arg3 createStation:(_Bool)arg4 previousTracks:(id)arg5 referrerIdentifier:(id)arg6 interactionId:(id)arg7 pageInstanceId:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)startRadioStationWithSeedURL:(id)arg1 startedFromElement:(id)arg2 player:(id)arg3 createStation:(_Bool)arg4 previousTracks:(id)arg5 referrerIdentifier:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)startRadioStationWithSeedURL:(id)arg1 startedFromElement:(id)arg2 referrerIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startRadioStationWithURL:(id)arg1 startedFromElement:(id)arg2 referrerIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)playStation:(id)arg1 context:(id)arg2 options:(id)arg3 loggingParams:(id)arg4 origin:(id)arg5 player:(id)arg6 retries:(long long)arg7;
- (void)startDecoratedRadioStation:(id)arg1 player:(id)arg2 startedFromElement:(id)arg3 atIndex:(long long)arg4 referrerIdentifier:(id)arg5 interactionId:(id)arg6 pageInstanceId:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)startDecoratedRadioStation:(id)arg1 startedFromElement:(id)arg2 atIndex:(long long)arg3 referrerIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (long long)sanitizeStartIndex:(long long)arg1 forStation:(id)arg2;
- (_Bool)shouldSetSkipToForIndex:(long long)arg1 inStation:(id)arg2;
- (id)restrictionsForRadioPlayer;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 stationsService:(id)arg2 radioTestManager:(id)arg3 radioRemoteConfigService:(id)arg4;
- (void)startEntityPagelessPlaylistRadioFromStationURI:(id)arg1 startedFromElement:(id)arg2 referrerIdentifier:(id)arg3;
- (void)startEntityPagelessPlaylistRadioFromStationURI:(id)arg1 startedFromElement:(id)arg2 referrerIdentifier:(id)arg3 interactionId:(id)arg4 pageInstanceId:(id)arg5 player:(id)arg6;
- (void)startEntityPagelessPlaylistRadioFromStationURI:(id)arg1 startedFromElement:(id)arg2 referrerIdentifier:(id)arg3 player:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


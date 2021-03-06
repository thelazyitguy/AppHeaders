//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastEpisodeEntityProviderDelegate-Protocol.h"
#import "SPTPodcastPlayerDelegate-Protocol.h"

@class NSString, NSURL;
@protocol SPTCollectionLogger, SPTCollectionPlatform, SPTExplicitContentAccessManager, SPTPodcast, SPTPodcastEpisode, SPTPodcastEpisodeActionRowViewModelDelegate, SPTPodcastEpisodeEntityProvider, SPTPodcastEpisodePlayerContextParameters, SPTPodcastOffliningManager, SPTPodcastPlayer, SPTProductState, SPTShareEntityData, SPTShareEntityDataFactory, SPTUBIPageInstanceIdentifierProvider, _TtP19YourEpisodesFeature26SPTYourEpisodesSaveManager_;

@interface SPTPodcastEpisodeActionRowViewModel : NSObject <SPTPodcastPlayerDelegate, SPTPodcastEpisodeEntityProviderDelegate>
{
    _Bool _isPlaying;
    id <SPTPodcastEpisodeActionRowViewModelDelegate> _delegate;
    NSURL *_URL;
    id <SPTPodcastEpisode> _episode;
    id <SPTPodcast> _podcast;
    id <SPTPodcastPlayer> _player;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    CDUnknownBlockType _loadPodcastCompletion;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTShareEntityDataFactory> _shareEntityDataFactory;
    id <SPTCollectionLogger> _collectionLogger;
    id <SPTPodcastEpisodePlayerContextParameters> _playerContextParameters;
    id <SPTPodcastOffliningManager> _podcastOffliningManager;
    id <SPTUBIPageInstanceIdentifierProvider> _pageInstanceProvider;
    id <SPTProductState> _productState;
    id <_TtP19YourEpisodesFeature26SPTYourEpisodesSaveManager_> _yourEpisodesSaveManager;
    id <SPTPodcastEpisodeEntityProvider> _entityProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTPodcastEpisodeEntityProvider> entityProvider; // @synthesize entityProvider=_entityProvider;
@property(retain, nonatomic) id <_TtP19YourEpisodesFeature26SPTYourEpisodesSaveManager_> yourEpisodesSaveManager; // @synthesize yourEpisodesSaveManager=_yourEpisodesSaveManager;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <SPTUBIPageInstanceIdentifierProvider> pageInstanceProvider; // @synthesize pageInstanceProvider=_pageInstanceProvider;
@property(retain, nonatomic) id <SPTPodcastOffliningManager> podcastOffliningManager; // @synthesize podcastOffliningManager=_podcastOffliningManager;
@property(retain, nonatomic) id <SPTPodcastEpisodePlayerContextParameters> playerContextParameters; // @synthesize playerContextParameters=_playerContextParameters;
@property(retain, nonatomic) id <SPTCollectionLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(retain, nonatomic) id <SPTShareEntityDataFactory> shareEntityDataFactory; // @synthesize shareEntityDataFactory=_shareEntityDataFactory;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(copy, nonatomic) CDUnknownBlockType loadPodcastCompletion; // @synthesize loadPodcastCompletion=_loadPodcastCompletion;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTPodcastPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTPodcast> podcast; // @synthesize podcast=_podcast;
@property(retain, nonatomic) id <SPTPodcastEpisode> episode; // @synthesize episode=_episode;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <SPTPodcastEpisodeActionRowViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)toggleSaveEpisode;
- (void)entityProvider:(id)arg1 didLoadShow:(id)arg2 withError:(id)arg3;
- (void)entityProvider:(id)arg1 didLoadEpisode:(id)arg2 withError:(id)arg3;
@property(readonly, nonatomic) id <SPTShareEntityData> shareEntityData;
@property(readonly, nonatomic) double syncProgress;
@property(readonly, nonatomic) long long offlineSyncStatus;
- (void)toggleOfflineSync;
- (void)podcastPlayerStateDidChange:(id)arg1;
- (void)podcastPlayer:(id)arg1 didChangePlayingTrackURL:(id)arg2 fromTrackURL:(id)arg3;
- (void)updateIsPlayingTrackURL:(id)arg1;
- (void)pauseCurrentlyPlaying;
- (_Bool)resumePlayback;
- (id)playerLoggingParamsWithInteractionId:(id)arg1;
- (void)startPlaybackAtPosition:(id)arg1 interactionId:(id)arg2;
- (void)playEpisodeWithInteractionId:(id)arg1;
@property(readonly, nonatomic) _Bool isInYourEpisodes;
@property(readonly, nonatomic) _Bool isDownloadAllowed;
- (void)loadShowDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)unsubscribe;
- (void)loadWithSubscription:(_Bool)arg1;
- (id)initWithEpisodeURL:(id)arg1 episode:(id)arg2 entityProvider:(id)arg3 player:(id)arg4 explicitContentAccessManager:(id)arg5 podcastOffliningManager:(id)arg6 collectionPlatform:(id)arg7 shareEntityDataFactory:(id)arg8 collectionLogger:(id)arg9 playerContextParameters:(id)arg10 pageInstanceProvider:(id)arg11 productState:(id)arg12 yourEpisodesSaveManager:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


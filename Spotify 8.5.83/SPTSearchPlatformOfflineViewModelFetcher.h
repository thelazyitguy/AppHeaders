//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchPlatformViewModelFetcher-Protocol.h"

@class HUBViewModelBuilderFactory, NSString;
@protocol SPTExplicitContentAccessManager, SPTSearch2EmptyStatePropertiesProvider, SPTSearchOfflineAlbumDataLoader, SPTSearchOfflineEpisodeDataLoader, SPTSearchOfflinePlaylistDataLoader, SPTSearchOfflineTrackDataLoader, SPTSearchUBILocationSerializer, _TtP22AgeVerificationFeature26SPTAgeVerificationProvider_;

@interface SPTSearchPlatformOfflineViewModelFetcher : NSObject <SPTSearchPlatformViewModelFetcher>
{
    NSString *_query;
    id <SPTSearchOfflineTrackDataLoader> _offlineTrackDataLoader;
    id <SPTSearchOfflinePlaylistDataLoader> _playlistDataLoader;
    id <SPTSearchOfflineAlbumDataLoader> _albumDataLoader;
    id <SPTSearchOfflineEpisodeDataLoader> _episodeDataLoader;
    HUBViewModelBuilderFactory *_viewModelBuilderFactory;
    id <SPTSearch2EmptyStatePropertiesProvider> _emptyStatePropertiesProvider;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <_TtP22AgeVerificationFeature26SPTAgeVerificationProvider_> _ageVerificationProvider;
    id <SPTSearchUBILocationSerializer> _ubiLocationSerializer;
    NSString *_referrerIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(readonly, nonatomic) id <SPTSearchUBILocationSerializer> ubiLocationSerializer; // @synthesize ubiLocationSerializer=_ubiLocationSerializer;
@property(readonly, nonatomic) id <_TtP22AgeVerificationFeature26SPTAgeVerificationProvider_> ageVerificationProvider; // @synthesize ageVerificationProvider=_ageVerificationProvider;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) id <SPTSearch2EmptyStatePropertiesProvider> emptyStatePropertiesProvider; // @synthesize emptyStatePropertiesProvider=_emptyStatePropertiesProvider;
@property(readonly, nonatomic) HUBViewModelBuilderFactory *viewModelBuilderFactory; // @synthesize viewModelBuilderFactory=_viewModelBuilderFactory;
@property(readonly, nonatomic) id <SPTSearchOfflineEpisodeDataLoader> episodeDataLoader; // @synthesize episodeDataLoader=_episodeDataLoader;
@property(readonly, nonatomic) id <SPTSearchOfflineAlbumDataLoader> albumDataLoader; // @synthesize albumDataLoader=_albumDataLoader;
@property(readonly, nonatomic) id <SPTSearchOfflinePlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(readonly, nonatomic) id <SPTSearchOfflineTrackDataLoader> offlineTrackDataLoader; // @synthesize offlineTrackDataLoader=_offlineTrackDataLoader;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (id)hubsKitNavigateCommandWithURI:(id)arg1;
- (id)rowLoggingDataWithPosition:(unsigned long long)arg1 uri:(id)arg2;
- (_Bool)displayItemAsDisabledIsExplicit:(_Bool)arg1 mogef19:(_Bool)arg2;
- (id)customDataSubtitleAccessoryLabelWithExplicit:(_Bool)arg1 premium:(_Bool)arg2 mogef19:(_Bool)arg3;
- (void)addSectionHeaderWithTitle:(id)arg1 identifier:(id)arg2 toViewModelBuilder:(id)arg3;
- (void)configureComponentModelBuilder:(id)arg1 withEpisode:(id)arg2 position:(unsigned long long)arg3;
- (void)configureViewModelBuilder:(id)arg1 withEpisodes:(id)arg2;
- (void)fetchEpisodesWithCompletion:(CDUnknownBlockType)arg1;
- (id)subtitleForTrack:(id)arg1;
- (void)addAgeVerificationCommandToComponentModelBuilder:(id)arg1 withTrack:(id)arg2;
- (void)addExplicitContentCommandToComponentModelBuilder:(id)arg1 withTrack:(id)arg2;
- (void)addPlayCommandToComponentModelBuilder:(id)arg1 withTrack:(id)arg2;
- (void)configureComponentModelBuilder:(id)arg1 withTrack:(id)arg2 position:(unsigned long long)arg3;
- (void)configureViewModelBuilder:(id)arg1 withTracks:(id)arg2;
- (void)fetchTracksWithCompletion:(CDUnknownBlockType)arg1;
- (id)joinedArtistNames:(id)arg1;
- (void)configureComponentModelBuilder:(id)arg1 withAlbum:(id)arg2 position:(unsigned long long)arg3;
- (void)configureViewModelBuilder:(id)arg1 withAlbums:(id)arg2;
- (void)fetchAlbumsWithCompletion:(CDUnknownBlockType)arg1;
- (void)configureComponentModelBuilder:(id)arg1 withPlaylist:(id)arg2 position:(long long)arg3;
- (void)configureViewModelBuilder:(id)arg1 withPlaylists:(id)arg2;
- (void)fetchPlaylistsWithCompletion:(CDUnknownBlockType)arg1;
- (void)addNoResultsOverlayComponentToViewModelBuilder:(id)arg1;
- (id)fetchViewModelWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithQuery:(id)arg1 offlineTrackDataLoader:(id)arg2 playlistDataLoader:(id)arg3 albumDataLoader:(id)arg4 episodeDataLoder:(id)arg5 emptyStatePropertiesProvider:(id)arg6 viewModelBuilderFactory:(id)arg7 explicitContentAccessManager:(id)arg8 ageVerificationProvider:(id)arg9 ubiLocationSerializer:(id)arg10 referrerIdentifier:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


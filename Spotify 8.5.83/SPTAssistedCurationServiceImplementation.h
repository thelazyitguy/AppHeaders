//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationService-Protocol.h"

@class NSArray, NSDictionary, NSString, SPTAllocationContext;
@protocol CosmosFeature, SPTAssistedCurationContextHandler, SPTCollectionPlatformService, SPTCosmosDataLoaderService, SPTFreeTierRecommendationsService, SPTNetworkService, SPTPlayer, SPTPlayerFeature, SPTPlaylistPlatformService, SPTSessionService, _TtP17OfflineMixFeature20SPTOfflineMixService_;

@interface SPTAssistedCurationServiceImplementation : NSObject <SPTAssistedCurationService>
{
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTSessionService> _sessionService;
    id <CosmosFeature> _cosmosFeature;
    id <SPTCosmosDataLoaderService> _cosmosDataLoaderService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTNetworkService> _networkService;
    id <SPTFreeTierRecommendationsService> _recommendationsService;
    id <SPTPlayerFeature> _playerFeature;
    id <_TtP17OfflineMixFeature20SPTOfflineMixService_> _offlineMixService;
    id <SPTPlayer> _player;
    NSArray *_contextHandlers;
    id <SPTAssistedCurationContextHandler> _contextHandlerFallback;
    NSDictionary *_providersFactory;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *providersFactory; // @synthesize providersFactory=_providersFactory;
@property(retain, nonatomic) id <SPTAssistedCurationContextHandler> contextHandlerFallback; // @synthesize contextHandlerFallback=_contextHandlerFallback;
@property(copy, nonatomic) NSArray *contextHandlers; // @synthesize contextHandlers=_contextHandlers;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <_TtP17OfflineMixFeature20SPTOfflineMixService_> offlineMixService; // @synthesize offlineMixService=_offlineMixService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTFreeTierRecommendationsService> recommendationsService; // @synthesize recommendationsService=_recommendationsService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTCosmosDataLoaderService> cosmosDataLoaderService; // @synthesize cosmosDataLoaderService=_cosmosDataLoaderService;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
- (id)mostPlayedCardProviderWithContextManager:(id)arg1 andURI:(id)arg2;
- (id)recentlyPlayedCardProvider;
- (id)topGenresCardProviderWithContextManager:(id)arg1;
- (id)likedSongsCardProvider;
- (id)similarToCardProvider;
- (id)recommendedTracksCardProvider:(id)arg1;
- (id)cardProvidersForURI:(id)arg1;
- (id)contextHandlerForURI:(id)arg1;
- (void)setupProvidersFactory;
- (void)setupContextHandlers;
- (id)queueContextHandler;
- (id)offlineMixContextHandler;
- (id)likedSongsContextHandler;
- (id)playlistContextHandler;
- (id)providerCardsSortMechanismForURI:(id)arg1 shouldPrioRecentlyPlayed:(_Bool)arg2;
- (id)provideAddTrackHandlerForURI:(id)arg1;
- (id)provideAssistedCurationModelForURI:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


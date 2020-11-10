//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SPTSortingFilteringFilterableModel-Protocol.h"
#import "SPTSortingFilteringSortableModel-Protocol.h"

@class NSURL, SPTLoggingParams, SPTPlayOrigin;
@protocol SPTPlayer, SPTYourLibraryMusicModelItemEntity, SPTYourLibraryMusicSongEntity, SPTYourLibraryMusicSongsModelDelegate;

@protocol SPTYourLibraryMusicSongsModel <NSObject, SPTSortingFilteringFilterableModel, SPTSortingFilteringSortableModel>
@property(readonly, nonatomic) NSURL *collectionURL;
@property(readonly, nonatomic) unsigned long long offlineAvailability;
@property(readonly, nonatomic) unsigned long long numberRecommendedItems;
@property(readonly, nonatomic) unsigned long long numberSections;
@property(readonly, nonatomic) unsigned long long numberItems;
@property(readonly, nonatomic, getter=isOfflineSyncAvailable) _Bool offlineSyncAvailable;
@property(readonly, nonatomic, getter=isPreviewsAvailable) _Bool previewsAvailable;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(nonatomic) __weak id <SPTYourLibraryMusicSongsModelDelegate> delegate;
- (void)removeObserverForTrackStateWithTrackURL:(NSURL *)arg1;
- (void)addObserverForTrackStateWithTrackURL:(NSURL *)arg1 inCollection:(_Bool)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)changeTrackURL:(NSURL *)arg1 likeState:(_Bool)arg2;
- (void)changeTrackURL:(NSURL *)arg1 banState:(_Bool)arg2;
- (void)setAvailableOffline:(_Bool)arg1;
- (void)deleteRecommendedItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)globalIndexFromIndex:(unsigned long long)arg1 inSection:(unsigned long long)arg2;
- (id <SPTYourLibraryMusicSongEntity>)recommendedItemAtIndex:(unsigned long long)arg1;
- (id <SPTYourLibraryMusicModelItemEntity>)itemAtIndex:(unsigned long long)arg1 inSection:(unsigned long long)arg2;
- (unsigned long long)numberItemsInSection:(unsigned long long)arg1;
- (void)playTrackEntity:(id <SPTYourLibraryMusicModelItemEntity>)arg1 playOrigin:(SPTPlayOrigin *)arg2 loggingParams:(SPTLoggingParams *)arg3 fallbackPlayer:(id <SPTPlayer>)arg4;
- (void)shufflePlayWithPlayOrigin:(SPTPlayOrigin *)arg1 loggingParams:(SPTLoggingParams *)arg2 fallbackPlayer:(id <SPTPlayer>)arg3;
- (void)loadModel;
@end


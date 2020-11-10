//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTOfflineDefaultPlaylistEntityGenerator.h"

@class GIMMe, NSMutableDictionary;
@protocol YTEntityStore, YTOfflineEntityGeneratorDelegate;

@interface YTOfflineMainPlaylistVideoEntityGenerator : YTOfflineDefaultPlaylistEntityGenerator
{
    id <YTOfflineEntityGeneratorDelegate> _delegate;
    id <YTEntityStore> _entityStore;
    NSMutableDictionary *_generatedVideoEntityKeys;
    GIMMe *_gimme;
}

+ (id)entityKeyForVideoID:(id)arg1 inPlaylistWithID:(id)arg2;
+ (id)entityType;
- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)didDeleteAllOfflinePlaylistsWithIDs:(id)arg1;
- (void)didDeleteOfflinePlaylistsForUserID:(id)arg1 deletedPlaylistIDs:(id)arg2;
- (void)didDeleteOfflinePlaylistWithPlaylistID:(id)arg1;
- (void)downloadDidCompleteWithPlaylist:(id)arg1;
- (void)downloadDidStartWithPlaylist:(id)arg1;
- (void)didSaveMetadataWithPlaylist:(id)arg1;
- (void)deleteVideoEntitiesForPlaylistsWithIDs:(id)arg1;
- (void)updateEntitiesForVideosInPlaylist:(id)arg1;
- (id)updatesForDidDeleteAllOfflinePlaylistsWithIDs:(id)arg1;
- (id)updatesForDidDeleteOfflinePlaylistsForUserID:(id)arg1 deletedPlaylistIDs:(id)arg2;
- (id)updatesForDidDeleteOfflinePlaylistWithPlaylistID:(id)arg1;
- (id)updatesForDownloadDidCompleteWithPlaylist:(id)arg1;
- (id)updatesForDownloadDidStartWithPlaylist:(id)arg1;
- (id)updatesForDidSaveMetadataWithPlaylist:(id)arg1;
- (id)updatesForDeleteVideosInPlaylistsWithIDs:(id)arg1;
- (id)updatesForVideosInPlaylist:(id)arg1;
- (id)entityForVideo:(id)arg1 inPlaylist:(id)arg2;
- (id)generateInitialEntitiesForPlaylists:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end


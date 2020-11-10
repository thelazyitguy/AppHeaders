//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTOfflinePlaylistEntityGeneratorProtocol-Protocol.h"

@class NSString;

@interface YTOfflineDefaultPlaylistEntityGenerator : NSObject <YTOfflinePlaylistEntityGeneratorProtocol>
{
}

- (void)didDeleteAllOfflinePlaylistsWithIDs:(id)arg1;
- (void)didDeleteOfflinePlaylistsForUserID:(id)arg1 deletedPlaylistIDs:(id)arg2;
- (void)downloadDidPauseWithPlaylistID:(id)arg1;
- (void)downloadDidCompleteWithPlaylist:(id)arg1;
- (void)downloadDidProgressWithPlaylistID:(id)arg1 downloadingProgress:(float)arg2;
- (void)downloadDidStartWithPlaylist:(id)arg1;
- (void)didDeleteOfflinePlaylistWithPlaylistID:(id)arg1;
- (void)didFailToSaveOfflinePlaylistWithID:(id)arg1;
- (void)didSaveMetadataWithPlaylist:(id)arg1;
- (id)updatesForDidDeleteAllOfflinePlaylistsWithIDs:(id)arg1;
- (id)updatesForDidDeleteOfflinePlaylistsForUserID:(id)arg1 deletedPlaylistIDs:(id)arg2;
- (id)updatesForDownloadDidPauseWithPlaylistID:(id)arg1;
- (id)updatesForDownloadDidCompleteWithPlaylist:(id)arg1;
- (id)updatesForDownloadDidProgressWithPlaylistID:(id)arg1 downloadingProgress:(float)arg2;
- (id)updatesForDownloadDidStartWithPlaylist:(id)arg1;
- (id)updatesForDidDeleteOfflinePlaylistWithPlaylistID:(id)arg1;
- (id)updatesForDidFailToSaveOfflinePlaylistWithID:(id)arg1;
- (id)updatesForDidSaveMetadataWithPlaylist:(id)arg1;
- (id)generateInitialEntitiesForPlaylists:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTFreeTierEntityOfflineViewModel-Protocol.h"
#import "SPTFreeTierPlaylistDefaultHeaderViewModel-Protocol.h"
#import "SPTFreeTierPlaylistFollowViewModel-Protocol.h"
#import "SPTFreeTierPlaylistFullbleedHeaderViewModel-Protocol.h"
#import "SPTFreeTierPlaylistVISREFHeaderViewModel-Protocol.h"

@class NSIndexPath, NSString, NSURL;
@protocol SPTFreeTierPlaylistSortingFiltering, SPTFreeTierPlaylistViewModelDelegate;

@protocol SPTFreeTierPlaylistViewModel <SPTFreeTierPlaylistFollowViewModel, SPTFreeTierPlaylistFullbleedHeaderViewModel, SPTFreeTierPlaylistDefaultHeaderViewModel, SPTFreeTierEntityOfflineViewModel, SPTFreeTierPlaylistVISREFHeaderViewModel>
@property(readonly, nonatomic) _Bool contentSupportsRadio;
@property(readonly, nonatomic) _Bool containsOnlyTracks;
@property(readonly, nonatomic) unsigned long long onDemandType;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistSortingFiltering> sortingFiltering;
@property(copy, nonatomic) NSString *textFilter;
@property(readonly, nonatomic) unsigned long long offlineAvailability;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isExtendedContextMenuActionSet) _Bool extendedContextMenuActionSet;
@property(readonly, nonatomic, getter=isEditModeEnabled) _Bool editModeEnabled;
@property(readonly, nonatomic, getter=isOfflineSyncAvailable) _Bool offlineSyncAvailable;
@property(readonly, nonatomic, getter=isReportAbuseEnabled) _Bool reportAbuseEnabled;
@property(readonly, nonatomic, getter=isLikeActionPlacedInsideHeader) _Bool likeActionPlacedInsideHeader;
@property(readonly, nonatomic) _Bool isPublished;
@property(readonly, nonatomic, getter=isCollaborative) _Bool collaborative;
@property(readonly, nonatomic, getter=isOwnedBySelf) _Bool ownedBySelf;
@property(readonly, copy, nonatomic) NSString *playlistName;
@property(readonly, copy, nonatomic) NSURL *playlistURL;
@property(nonatomic) __weak id <SPTFreeTierPlaylistViewModelDelegate> delegate;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (void)viewWillForeground;
- (void)playTrackURL:(NSURL *)arg1 interactionId:(NSString *)arg2;
- (void)deletePlaylist;
- (void)load;
- (void)changeOffline:(_Bool)arg1;
- (void)toggleTrackBanAtIndexPath:(NSIndexPath *)arg1;
- (void)toggleTrackLikeAtIndexPath:(NSIndexPath *)arg1;
- (void)trackSelectedAtIndexPath:(NSIndexPath *)arg1 interactionId:(NSString *)arg2;
- (void)loadMoreTracks;
- (_Bool)isApproachingEndIndexPath:(NSIndexPath *)arg1 countOfItemsInSection:(long long)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeSectionController.h>

#import "YTAppOfflineVideoControllerObserver-Protocol.h"
#import "YTConnectionStatusControllerObserver-Protocol.h"
#import "YTEntityStoreObserver-Protocol.h"
#import "YTMainVideoEntityShimControllerObserver-Protocol.h"
#import "YTOfflinePlaylistControllerObserver-Protocol.h"
#import "YTOfflineVideoControllerObserver-Protocol.h"
#import "YTSemanticColorDelegate-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"
#import "YTVideoListPlaylistIDResponderProvider-Protocol.h"

@class GPBInt32Int32Dictionary, NSString, UICollectionReusableView, YTAppOfflinePlaylistController, YTConnectionStatusController, YTOfflinePlaylistController;
@protocol YTIdentityProvider, YTIdentityScopedPersistentEntityStoreProvider;

@interface YTOfflineItemSectionController : YTInnerTubeSectionController <YTConnectionStatusControllerObserver, YTOfflinePlaylistControllerObserver, YTAppOfflineVideoControllerObserver, YTEntityStoreObserver, YTOfflineVideoControllerObserver, YTSemanticColorDelegate, YTVideoListPlaylistIDResponderProvider, YTMainVideoEntityShimControllerObserver, YTUserChangedObserver>
{
    NSString *_videoListPlaylistID;
    _Bool _isRecommendationsSection;
    _Bool _containsExpiringContent;
    GPBInt32Int32Dictionary *_childOfflineabilityVECounters;
    UICollectionReusableView *_header;
    YTAppOfflinePlaylistController *_appOfflinePlaylistController;
    YTOfflinePlaylistController *_offlinePlaylistController;
    YTConnectionStatusController *_connectionStatusController;
    id <YTIdentityProvider> _identityProvider;
    id <YTIdentityScopedPersistentEntityStoreProvider> _identityScopedPersistentEntityStoreProvider;
}

- (void).cxx_destruct;
- (_Bool)maybeSendReparentedCommandEvent:(id)arg1 cellController:(id)arg2;
- (void)maybeRecordAttachedChildrenForEvent:(id)arg1;
- (_Bool)maybeHandleElementOriginatedEvent:(id)arg1;
- (void)simulateVELoggingForCommandEventsFromElements;
- (_Bool)maybeHandleRefreshUsingInsertWithEntries:(id)arg1 totalResults:(unsigned long long)arg2;
- (void)queueOfflineRefreshIfConnected;
- (void)removeEntriesWithVideoID:(id)arg1;
- (void)refreshSectionWithID:(id)arg1;
- (id)behaviorResponderProvider;
- (id)backgroundColorFromPalette:(id)arg1 forView:(id)arg2 entry:(id)arg3;
- (void)connectionStatusDidChange:(_Bool)arg1;
- (void)didUpdateKey:(id)arg1 inEntityStore:(id)arg2 withUpdateType:(unsigned long long)arg3 previousEntity:(id)arg4 entity:(id)arg5;
- (void)didCancelDeferredRemoveWithVideoID:(id)arg1;
- (void)didScheduleDeferredRemoveWithVideoID:(id)arg1;
- (void)didSaveVideoFromRecommendedDownloadWithID:(id)arg1;
- (void)didDeleteOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2;
- (void)didDeleteAllOfflineVideosWithIDs:(id)arg1;
- (void)didUpdateFromStatus:(int)arg1 toStatus:(int)arg2 forOfflineVideoWithID:(id)arg3;
- (void)didSaveOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2;
- (void)didDeleteAllOfflinePlaylistsWithIDs:(id)arg1;
- (void)didDeleteOfflinePlaylistWithPlaylistID:(id)arg1;
- (void)didSaveMetadataWithPlaylistID:(id)arg1;
- (void)userDidChange;
- (id)videoListPlaylistID;
- (void)innerTubeFeedControllerDataSource:(id)arg1 didReceiveContinuationResponse:(id)arg2;
- (void)clearAndHandleEntries:(id)arg1 totalResults:(unsigned long long)arg2;
- (void)collectionViewControllerWillAskForRefresh;
- (void)updateCell:(id)arg1 forEntry:(id)arg2;
- (void)updateHeader:(id)arg1;
- (_Bool)hasBottomSeparator;
- (void)loadWithModel:(id)arg1;
- (id)initWithCellFactory:(id)arg1 service:(id)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

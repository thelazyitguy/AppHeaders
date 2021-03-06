//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/GMSTileObserver-Protocol.h>

@class GMSLRUCache, GMSStyleTableService, GMSTileCoordsTombstoneTracker, GMSTileRequestCoordinator, GMSTileType, NSMutableDictionary, NSMutableSet, NSString;
@protocol GMSTileService, GMSTileServiceRegistry, OS_dispatch_queue;

@interface GMSTileFetchingTileObserver : NSObject <GMSTileObserver>
{
    id <GMSTileServiceRegistry> _tileServiceRegistry;
    GMSTileRequestCoordinator *_requestCoordinator;
    id <GMSTileService> _tileService;
    NSMutableDictionary *_coordsNeeded;
    GMSTileCoordsTombstoneTracker *_coordTombstones;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    GMSLRUCache *_tileCache;
    NSMutableSet *_visibleTileCoords;
    NSMutableSet *_pendingAdds;
    NSMutableSet *_pendingRemoves;
    int _startingZoomLevel;
    GMSStyleTableService *_styleTableService;
    _Bool _blockNetworkFetches;
    _Bool _onlyWantsBaseTiles;
    _Bool _pauseUpdates;
    GMSTileType *_tileTypeHandled;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool pauseUpdates; // @synthesize pauseUpdates=_pauseUpdates;
@property(readonly, nonatomic) GMSTileType *tileTypeHandled; // @synthesize tileTypeHandled=_tileTypeHandled;
@property(readonly, nonatomic) _Bool onlyWantsBaseTiles; // @synthesize onlyWantsBaseTiles=_onlyWantsBaseTiles;
- (void)addRemoveFinished:(_Bool)arg1;
- (void)removedTileCoords:(id)arg1;
- (void)addedTileCoords:(id)arg1 metadata:(id)arg2;
- (id)metadataFromTile:(id)arg1;
- (void)tileService:(id)arg1 requestedCoords:(id)arg2 status:(int)arg3 tile:(id)arg4;
- (void)tileService:(id)arg1 cachedCoords:(id)arg2 status:(int)arg3 tile:(id)arg4;
- (void)tileServiceCachesWereInvalidated:(id)arg1;
- (void)mergePendingAdds:(id)arg1 removes:(id)arg2;
- (void)processAndAddTileToCache:(id)arg1 forCoords:(id)arg2;
- (void)requestTile:(id)arg1 skipCacheCheck:(_Bool)arg2;
- (id)cachedTileForCoords:(id)arg1 dataVersionMismatch:(_Bool *)arg2 perTileExpired:(_Bool *)arg3;
- (void)clearState;
- (void)clearCaches;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)updateBlockNetworkFetches:(id)arg1;
- (void)didSwitchToBaseTileType:(id)arg1;
- (void)didRemoveTileObserver;
- (void)viewportTilesAdded:(id)arg1 removed:(id)arg2 tileType:(id)arg3 frustum:(const struct WrappedFrustum2D *)arg4;
- (id)dispatchQueue;
- (id)initWithStartingZoomLevel:(int)arg1 tileCacheCapacity:(unsigned long long)arg2 onlyWantsBaseTiles:(_Bool)arg3 tileTypeHandled:(id)arg4 tileServiceRegistry:(id)arg5 styleTableService:(id)arg6 requestCoordinator:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


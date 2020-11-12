//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSRenderTileProvider, NSArray, NSMutableArray, NSSet;
@protocol GMSEntityResources;

@interface GMSRenderTileProviderState : NSObject
{
    id <GMSEntityResources> _entityResources;
    struct unique_ptr<gmscore::vector::MutableStateTracker, std::__1::default_delete<gmscore::vector::MutableStateTracker>> _cameraStateTracker;
    struct vector<gmscore::vector::MutableStateTracker *, std::__1::allocator<gmscore::vector::MutableStateTracker *>> _stateTrackers;
    _Bool _lastWasNavigation;
    _Bool _lastWasBaseOnly;
    NSMutableArray *_visibleTiles;
    NSMutableArray *_visibleTilesJustAdded;
    NSMutableArray *_visibleTilesJustRemoved;
    NSMutableArray *_missingTileCoordinates;
    _Bool _isBaseProvider;
    _Bool _useFallback;
    _Bool _prefetchParentTiles;
    NSSet *_copyrights;
    NSSet *_imageryCopyrights;
    int _copyrightYear;
    long long _lastTileUpdateTimeMs;
    long long _lastTileExpirationTestTimeMs;
    GMSRenderTileProvider *_tileProvider;
    NSArray *_fallbackTiles;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) int copyrightYear; // @synthesize copyrightYear=_copyrightYear;
@property(readonly, nonatomic) NSSet *imageryCopyrights; // @synthesize imageryCopyrights=_imageryCopyrights;
@property(readonly, nonatomic) NSSet *copyrights; // @synthesize copyrights=_copyrights;
@property(readonly, nonatomic) NSArray *missingTileCoordinates; // @synthesize missingTileCoordinates=_missingTileCoordinates;
@property(readonly, nonatomic) NSArray *fallbackTiles; // @synthesize fallbackTiles=_fallbackTiles;
@property(readonly, nonatomic) NSArray *visibleTilesJustRemoved; // @synthesize visibleTilesJustRemoved=_visibleTilesJustRemoved;
@property(readonly, nonatomic) NSArray *visibleTilesJustAdded; // @synthesize visibleTilesJustAdded=_visibleTilesJustAdded;
@property(readonly, nonatomic) NSArray *visibleTiles; // @synthesize visibleTiles=_visibleTiles;
@property(readonly, nonatomic) GMSRenderTileProvider *tileProvider; // @synthesize tileProvider=_tileProvider;
- (_Bool)isBaseProvider;
- (unsigned long long)updateTilesForCamera:(const reffed_ptr_329922e5 *)arg1 isNavigation:(_Bool)arg2 baseTilesOnlyPerfMode:(_Bool)arg3;
- (_Bool)tilesHaveExpired;
- (void)willDestroyRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1;
- (void)didCreateRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1 entityResources:(id)arg2 behaviorCamera:(const reffed_ptr_329922e5 *)arg3;
- (id)description;
- (void)dealloc;
- (id)initWithTileProvider:(id)arg1 isBaseProvider:(_Bool)arg2 useFallback:(_Bool)arg3 prefetchParentTiles:(_Bool)arg4 statesToTrack:(vector_4b334fea)arg5;

@end

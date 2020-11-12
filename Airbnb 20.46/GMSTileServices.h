//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSTileServiceRegistry-Protocol.h"

@class GMSAnalytics, GMSCacheStorageDescriptor, GMSCoreClientParameters, GMSDASHConnection, GMSStyleTableService, NSMutableDictionary, NSMutableIndexSet, NSString;
@protocol GMSOfflineTileDataCache, GMSTimingClock;

@interface GMSTileServices : NSObject <GMSTileServiceRegistry>
{
    NSMutableIndexSet *_tileDataCacheTypes;
    _Bool _isDeletingResidualTypes;
    unsigned long long _maxTileDataCacheSizeVectorBase;
    GMSCoreClientParameters *_clientParameters;
    GMSDASHConnection *_connection;
    GMSStyleTableService *_styleTableService;
    id <GMSOfflineTileDataCache> _offlineTileDataCache;
    id <GMSTimingClock> _timingClock;
    GMSAnalytics *_analytics;
    NSMutableDictionary *_tileServices;
    GMSCacheStorageDescriptor *_cacheStorageDescriptor;
}

+ (unsigned int)serviceFlagsForTileType:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) GMSCacheStorageDescriptor *cacheStorageDescriptor; // @synthesize cacheStorageDescriptor=_cacheStorageDescriptor;
@property(retain, nonatomic) NSMutableDictionary *tileServices; // @synthesize tileServices=_tileServices;
@property(retain, nonatomic) GMSAnalytics *analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) id <GMSTimingClock> timingClock; // @synthesize timingClock=_timingClock;
@property(retain, nonatomic) id <GMSOfflineTileDataCache> offlineTileDataCache; // @synthesize offlineTileDataCache=_offlineTileDataCache;
@property(retain, nonatomic) GMSStyleTableService *styleTableService; // @synthesize styleTableService=_styleTableService;
@property(retain, nonatomic) GMSDASHConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) GMSCoreClientParameters *clientParameters; // @synthesize clientParameters=_clientParameters;
- (id)configuredTileDataCacheForTileType:(id)arg1;
- (CDStruct_4bcfbbae)cacheSizeForTileType:(id)arg1;
- (unsigned long long)memCacheSizeForTileType:(id)arg1;
- (id)configuredTileServiceForTileType:(id)arg1 configuredTileDataCache:(id)arg2;
- (void)vectorCacheMaxSize:(unsigned long long *)arg1 maxEntries:(unsigned long long *)arg2;
- (void)recordTileDataCacheType:(id)arg1;
- (id)startTileServiceForTileType:(id)arg1;
- (void)invalidateTileEpochsInCachesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteOnlineTileCaches;
- (void)deleteTileCaches;
- (id)activeTileServices;
- (unsigned long long)cacheSpaceAvailable;
- (id)tileServiceForTileType:(id)arg1;
- (id)initWithConnection:(id)arg1 clientParameters:(id)arg2 cacheStorageDescriptor:(id)arg3 styleTableService:(id)arg4 timingClock:(id)arg5 analytics:(id)arg6 offlineTileDataCache:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


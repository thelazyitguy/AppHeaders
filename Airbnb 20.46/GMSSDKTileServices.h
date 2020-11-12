//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSTileServices.h"

@class GMSAPIClientParameters, GMSMapStyle;

@interface GMSSDKTileServices : GMSTileServices
{
    GMSMapStyle *_mapStyle;
}

- (void).cxx_destruct;
- (id)configuredTileDataCacheForTileType:(id)arg1;
- (CDStruct_4bcfbbae)cacheSizeForTileType:(id)arg1;
- (id)configuredTileServiceForTileType:(id)arg1 configuredTileDataCache:(id)arg2;
- (id)customTileServiceWithLayer:(id)arg1;
@property(readonly, nonatomic) GMSAPIClientParameters *apiClientParameters;
- (id)initWithConnection:(id)arg1 clientParameters:(id)arg2 cacheStorageDescriptor:(id)arg3 styleTableService:(id)arg4 timingClock:(id)arg5 offlineTileDataCache:(id)arg6 mapStyle:(id)arg7;

@end


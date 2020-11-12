//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSMapTileService.h"

@class GMSAnalyticsTimer;

@interface GMSVectorMapTileService : GMSMapTileService
{
    GMSAnalyticsTimer *_tileUnpackTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GMSAnalyticsTimer *tileUnpackTimer; // @synthesize tileUnpackTimer=_tileUnpackTimer;
- (long long)perTileExpirationPeriodMS;
- (_Bool)canIncludeTileCoords:(id)arg1 inTileRequests:(id)arg2;
- (long long)shouldRequestUpdate:(id)arg1 fetchType:(int)arg2;
- (void)cachePreloadedTiles:(id)arg1;
- (id)initWithConnection:(id)arg1 paintService:(id)arg2 clientParameters:(id)arg3 requestBuilder:(id)arg4 timingClock:(id)arg5 tileDataCache:(id)arg6 offlineTileDataCache:(id)arg7 memCacheSize:(unsigned long long)arg8 styleTableService:(id)arg9 serviceFlags:(unsigned int)arg10 tileType:(id)arg11;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSTileEpoch-Protocol.h>
#import <NavigationFramework/NSObject-Protocol.h>

@class GMSInt32Array, GMSTileCoords, GMSTileType, NSArray, NSString;
@protocol GMSTileExpiration;

@protocol GMSTile <GMSTileEpoch, NSObject>
@property(readonly, nonatomic) NSString *legalCountry;
@property(readonly, nonatomic) GMSInt32Array *paintExperiments;
@property(readonly, nonatomic) NSString *versionID;
@property(readonly, nonatomic) int copyrightYear;
@property(readonly, nonatomic) NSArray *imageryCopyrights;
@property(readonly, nonatomic) NSArray *mapDataCopyrights;
@property(readonly, nonatomic) id <GMSTileExpiration> expirationState;
@property(readonly, nonatomic) int dataVersion;
@property(readonly, nonatomic) GMSTileType *tileType;
@property(readonly, nonatomic) GMSTileCoords *coords;
- (_Bool)isTileStoreTile;
- (void)refreshValidationTime:(long long)arg1;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMMapsEngineInfoProto;

@interface GMSCVectorTileMetadata : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMajorEpoch; // @dynamic hasMajorEpoch;
@property(nonatomic) _Bool hasMapsEngineInfo; // @dynamic hasMapsEngineInfo;
@property(nonatomic) _Bool hasPerTileEpoch; // @dynamic hasPerTileEpoch;
@property(nonatomic) _Bool hasTileEdition; // @dynamic hasTileEdition;
@property(nonatomic) int majorEpoch; // @dynamic majorEpoch;
@property(retain, nonatomic) GMSx_GMMMapsEngineInfoProto *mapsEngineInfo; // @dynamic mapsEngineInfo;
@property(nonatomic) int perTileEpoch; // @dynamic perTileEpoch;
@property(nonatomic) int tileEdition; // @dynamic tileEdition;

@end

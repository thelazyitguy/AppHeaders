//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSCImageTileMetadata, GMSCVectorTileMetadata, GMSx_GPBInt32Array, NSString;

@interface GMSCTileMetadata : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GPBInt32Array *experimentIdArray; // @dynamic experimentIdArray;
@property(readonly, nonatomic) unsigned long long experimentIdArray_Count; // @dynamic experimentIdArray_Count;
@property(nonatomic) _Bool hasLegalCountry; // @dynamic hasLegalCountry;
@property(nonatomic) _Bool hasMajorEpoch; // @dynamic hasMajorEpoch;
@property(nonatomic) _Bool hasValidationTime; // @dynamic hasValidationTime;
@property(nonatomic) _Bool hasVersionId; // @dynamic hasVersionId;
@property(retain, nonatomic) GMSCImageTileMetadata *imageTileMetadata; // @dynamic imageTileMetadata;
@property(copy, nonatomic) NSString *legalCountry; // @dynamic legalCountry;
@property(nonatomic) int majorEpoch; // @dynamic majorEpoch;
@property(readonly, nonatomic) int metadataOneOfCase; // @dynamic metadataOneOfCase;
@property(retain, nonatomic) GMSCVectorTileMetadata *psmDiffTileMetadata; // @dynamic psmDiffTileMetadata;
@property(nonatomic) unsigned long long validationTime; // @dynamic validationTime;
@property(retain, nonatomic) GMSCVectorTileMetadata *vectorTileMetadata; // @dynamic vectorTileMetadata;
@property(copy, nonatomic) NSString *versionId; // @dynamic versionId;

@end

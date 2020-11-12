//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_GPBMessage.h>

@class GMSx_GMPCAbsoluteLabelPosition, GMSx_GMPCLabelGroup, GMSx_GMPCPolylineLabelPosition, GMSx_GPBInt32Array;

@interface GMSx_GMPCLabelRenderOp : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int attributes; // @dynamic attributes;
@property(nonatomic) unsigned long long baseTileOpId; // @dynamic baseTileOpId;
@property(nonatomic) _Bool hasAttributes; // @dynamic hasAttributes;
@property(nonatomic) _Bool hasBaseTileOpId; // @dynamic hasBaseTileOpId;
@property(nonatomic) _Bool hasLegacyBaseTileOpId; // @dynamic hasLegacyBaseTileOpId;
@property(nonatomic) _Bool hasLinePosition; // @dynamic hasLinePosition;
@property(nonatomic) _Bool hasMaxAdditionalZoomEighths; // @dynamic hasMaxAdditionalZoomEighths;
@property(nonatomic) _Bool hasMinAdditionalZoomEighths; // @dynamic hasMinAdditionalZoomEighths;
@property(nonatomic) _Bool hasMultiZoomStyleId; // @dynamic hasMultiZoomStyleId;
@property(nonatomic) _Bool hasMultiZoomStyleIndex; // @dynamic hasMultiZoomStyleIndex;
@property(nonatomic) _Bool hasPointPosition; // @dynamic hasPointPosition;
@property(nonatomic) _Bool hasPrimary; // @dynamic hasPrimary;
@property(nonatomic) _Bool hasRank; // @dynamic hasRank;
@property(nonatomic) _Bool hasSecondary; // @dynamic hasSecondary;
@property(nonatomic) _Bool hasSecondaryRelativePosition; // @dynamic hasSecondaryRelativePosition;
@property(nonatomic) _Bool hasZGrade; // @dynamic hasZGrade;
@property(nonatomic) _Bool hasZPlaneForSorting; // @dynamic hasZPlaneForSorting;
@property(nonatomic) _Bool hasZWithinGrade; // @dynamic hasZWithinGrade;
@property(nonatomic) unsigned int legacyBaseTileOpId; // @dynamic legacyBaseTileOpId;
@property(retain, nonatomic) GMSx_GMPCPolylineLabelPosition *linePosition; // @dynamic linePosition;
@property(nonatomic) int maxAdditionalZoomEighths; // @dynamic maxAdditionalZoomEighths;
@property(nonatomic) int minAdditionalZoomEighths; // @dynamic minAdditionalZoomEighths;
@property(nonatomic) long long multiZoomStyleId; // @dynamic multiZoomStyleId;
@property(nonatomic) int multiZoomStyleIndex; // @dynamic multiZoomStyleIndex;
@property(retain, nonatomic) GMSx_GMPCAbsoluteLabelPosition *pointPosition; // @dynamic pointPosition;
@property(retain, nonatomic) GMSx_GMPCLabelGroup *primary; // @dynamic primary;
@property(nonatomic) int rank; // @dynamic rank;
@property(retain, nonatomic) GMSx_GMPCLabelGroup *secondary; // @dynamic secondary;
@property(nonatomic) int secondaryRelativePosition; // @dynamic secondaryRelativePosition;
@property(retain, nonatomic) GMSx_GPBInt32Array *styleTransformTagArray; // @dynamic styleTransformTagArray;
@property(readonly, nonatomic) unsigned long long styleTransformTagArray_Count; // @dynamic styleTransformTagArray_Count;
@property(nonatomic) int zGrade; // @dynamic zGrade;
@property(nonatomic) int zPlaneForSorting; // @dynamic zPlaneForSorting;
@property(nonatomic) unsigned int zWithinGrade; // @dynamic zWithinGrade;

@end

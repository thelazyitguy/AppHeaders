//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIFormattedString, YTIRenderer, YTIThumbnailDetails;

@interface YTIKidsContentInfoCardRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *backButton; // @dynamic backButton;
@property(nonatomic) unsigned int backgroundColorLowerActivated; // @dynamic backgroundColorLowerActivated;
@property(nonatomic) unsigned int backgroundColorLowerNormal; // @dynamic backgroundColorLowerNormal;
@property(nonatomic) unsigned int backgroundColorUpperActivated; // @dynamic backgroundColorUpperActivated;
@property(nonatomic) unsigned int backgroundColorUpperNormal; // @dynamic backgroundColorUpperNormal;
@property(retain, nonatomic) YTIThumbnailDetails *backgroundImageActivated; // @dynamic backgroundImageActivated;
@property(retain, nonatomic) YTIThumbnailDetails *backgroundImageNormal; // @dynamic backgroundImageNormal;
@property(retain, nonatomic) YTIFormattedString *cardTitle; // @dynamic cardTitle;
@property(nonatomic) int currentCorpus; // @dynamic currentCorpus;
@property(retain, nonatomic) YTIFormattedString *descriptionText; // @dynamic descriptionText;
@property(retain, nonatomic) YTIFormattedString *descriptionTitle; // @dynamic descriptionTitle;
@property(retain, nonatomic) YTIRenderer *disclosureRenderer; // @dynamic disclosureRenderer;
@property(nonatomic) _Bool hasBackButton; // @dynamic hasBackButton;
@property(nonatomic) _Bool hasBackgroundColorLowerActivated; // @dynamic hasBackgroundColorLowerActivated;
@property(nonatomic) _Bool hasBackgroundColorLowerNormal; // @dynamic hasBackgroundColorLowerNormal;
@property(nonatomic) _Bool hasBackgroundColorUpperActivated; // @dynamic hasBackgroundColorUpperActivated;
@property(nonatomic) _Bool hasBackgroundColorUpperNormal; // @dynamic hasBackgroundColorUpperNormal;
@property(nonatomic) _Bool hasBackgroundImageActivated; // @dynamic hasBackgroundImageActivated;
@property(nonatomic) _Bool hasBackgroundImageNormal; // @dynamic hasBackgroundImageNormal;
@property(nonatomic) _Bool hasCardTitle; // @dynamic hasCardTitle;
@property(nonatomic) _Bool hasCurrentCorpus; // @dynamic hasCurrentCorpus;
@property(nonatomic) _Bool hasDescriptionText; // @dynamic hasDescriptionText;
@property(nonatomic) _Bool hasDescriptionTitle; // @dynamic hasDescriptionTitle;
@property(nonatomic) _Bool hasDisclosureRenderer; // @dynamic hasDisclosureRenderer;
@property(nonatomic) _Bool hasMaxAgeForPreschool; // @dynamic hasMaxAgeForPreschool;
@property(nonatomic) _Bool hasSearchMode; // @dynamic hasSearchMode;
@property(nonatomic) _Bool hasSelectButton; // @dynamic hasSelectButton;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) int maxAgeForPreschool; // @dynamic maxAgeForPreschool;
@property(retain, nonatomic) NSMutableArray *olderThumbnailsArray; // @dynamic olderThumbnailsArray;
@property(readonly, nonatomic) unsigned long long olderThumbnailsArray_Count; // @dynamic olderThumbnailsArray_Count;
@property(retain, nonatomic) NSMutableArray *preschoolThumbnailsArray; // @dynamic preschoolThumbnailsArray;
@property(readonly, nonatomic) unsigned long long preschoolThumbnailsArray_Count; // @dynamic preschoolThumbnailsArray_Count;
@property(retain, nonatomic) NSMutableArray *schoolAgeThumbnailsArray; // @dynamic schoolAgeThumbnailsArray;
@property(readonly, nonatomic) unsigned long long schoolAgeThumbnailsArray_Count; // @dynamic schoolAgeThumbnailsArray_Count;
@property(nonatomic) int searchMode; // @dynamic searchMode;
@property(retain, nonatomic) YTIRenderer *selectButton; // @dynamic selectButton;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


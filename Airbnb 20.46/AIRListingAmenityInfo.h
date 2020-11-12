//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRListingAmenityInfoMetadata, NSArray;

@interface AIRListingAmenityInfo : AIRModel
{
    NSArray *_listingAmenities;
    AIRListingAmenityInfoMetadata *_metadata;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIRListingAmenityInfoMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSArray *listingAmenities; // @synthesize listingAmenities=_listingAmenities;

@end

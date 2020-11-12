//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRDate, AIRListingWirelessInfo, AIRSelectCoverPhotoOptions, AIRSelectListingMetrics, AIRSelectListingStatus, NSArray, NSNumber, NSString;

@interface AIRSelectListing : AIRModel
{
    _Bool _isHomeLayoutComplete;
    NSString *_listingID;
    NSString *_name;
    NSString *_summary;
    NSString *_neighborhoodOverview;
    NSString *_interaction;
    NSString *_instantBookingAllowedCategory;
    NSString *_hostQuote;
    NSString *_houseManual;
    NSArray *_rooms;
    NSArray *_coverPhotos;
    AIRSelectCoverPhotoOptions *_coverPhotoOptions;
    NSArray *_media;
    NSArray *_amenitiesIDs;
    NSArray *_listingCategoryValues;
    AIRListingWirelessInfo *_wirelessInfo;
    AIRDate *_startDate;
    AIRSelectListingMetrics *_listingMetrics;
    AIRSelectListingStatus *_listingStatus;
    NSNumber *_readyForSelectStatus;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isHomeLayoutComplete; // @synthesize isHomeLayoutComplete=_isHomeLayoutComplete;
@property(readonly, copy, nonatomic) NSNumber *readyForSelectStatus; // @synthesize readyForSelectStatus=_readyForSelectStatus;
@property(readonly, copy, nonatomic) AIRSelectListingStatus *listingStatus; // @synthesize listingStatus=_listingStatus;
@property(readonly, copy, nonatomic) AIRSelectListingMetrics *listingMetrics; // @synthesize listingMetrics=_listingMetrics;
@property(readonly, copy, nonatomic) AIRDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) AIRListingWirelessInfo *wirelessInfo; // @synthesize wirelessInfo=_wirelessInfo;
@property(readonly, copy, nonatomic) NSArray *listingCategoryValues; // @synthesize listingCategoryValues=_listingCategoryValues;
@property(readonly, copy, nonatomic) NSArray *amenitiesIDs; // @synthesize amenitiesIDs=_amenitiesIDs;
@property(readonly, copy, nonatomic) NSArray *media; // @synthesize media=_media;
@property(readonly, copy, nonatomic) AIRSelectCoverPhotoOptions *coverPhotoOptions; // @synthesize coverPhotoOptions=_coverPhotoOptions;
@property(readonly, copy, nonatomic) NSArray *coverPhotos; // @synthesize coverPhotos=_coverPhotos;
@property(readonly, copy, nonatomic) NSArray *rooms; // @synthesize rooms=_rooms;
@property(readonly, copy, nonatomic) NSString *houseManual; // @synthesize houseManual=_houseManual;
@property(readonly, copy, nonatomic) NSString *hostQuote; // @synthesize hostQuote=_hostQuote;
@property(readonly, copy, nonatomic) NSString *instantBookingAllowedCategory; // @synthesize instantBookingAllowedCategory=_instantBookingAllowedCategory;
@property(readonly, copy, nonatomic) NSString *interaction; // @synthesize interaction=_interaction;
@property(readonly, copy, nonatomic) NSString *neighborhoodOverview; // @synthesize neighborhoodOverview=_neighborhoodOverview;
@property(readonly, copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *listingID; // @synthesize listingID=_listingID;

@end

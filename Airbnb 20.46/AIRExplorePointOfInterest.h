//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSArray, NSNumber, NSString;

@interface AIRExplorePointOfInterest : AIRModel
{
    NSString *_airmoji;
    NSString *_category;
    NSString *_primaryCategory;
    NSString *_name;
    NSString *_subtitle;
    NSString *_recommendationsCountFormatted;
    NSString *_itemId;
    NSNumber *_placeId;
    NSNumber *_lat;
    NSNumber *_lng;
    NSArray *_coverPhotos;
}

+ (id)customKeyPathMapping;
+ (id)customTransformers;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *coverPhotos; // @synthesize coverPhotos=_coverPhotos;
@property(readonly, copy, nonatomic) NSNumber *lng; // @synthesize lng=_lng;
@property(readonly, copy, nonatomic) NSNumber *lat; // @synthesize lat=_lat;
@property(readonly, copy, nonatomic) NSNumber *placeId; // @synthesize placeId=_placeId;
@property(readonly, copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(readonly, copy, nonatomic) NSString *recommendationsCountFormatted; // @synthesize recommendationsCountFormatted=_recommendationsCountFormatted;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *primaryCategory; // @synthesize primaryCategory=_primaryCategory;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSString *airmoji; // @synthesize airmoji=_airmoji;

@end

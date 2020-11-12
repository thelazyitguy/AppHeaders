//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface AIRExploreEmptyStateMetadata : AIRModel
{
    NSString *_titleText;
    NSString *_descriptionText;
    NSString *_ctaText;
    NSArray *_filters;
    NSDictionary *_filterBarOrderingDictionary;
    NSDictionary *_moreFiltersOrderingDictionary;
    NSDictionary *_moreFiltersCountDictionary;
    NSDictionary *_filterBarCountsDictionary;
    NSArray *_filterBarOrdering;
    NSArray *_moreFiltersOrdering;
    NSNumber *_moreFiltersCount;
    NSArray *_filterBarCounts;
}

+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *filterBarCounts; // @synthesize filterBarCounts=_filterBarCounts;
@property(readonly, copy, nonatomic) NSNumber *moreFiltersCount; // @synthesize moreFiltersCount=_moreFiltersCount;
@property(readonly, copy, nonatomic) NSArray *moreFiltersOrdering; // @synthesize moreFiltersOrdering=_moreFiltersOrdering;
@property(readonly, copy, nonatomic) NSArray *filterBarOrdering; // @synthesize filterBarOrdering=_filterBarOrdering;
@property(readonly, copy, nonatomic) NSDictionary *filterBarCountsDictionary; // @synthesize filterBarCountsDictionary=_filterBarCountsDictionary;
@property(readonly, copy, nonatomic) NSDictionary *moreFiltersCountDictionary; // @synthesize moreFiltersCountDictionary=_moreFiltersCountDictionary;
@property(readonly, copy, nonatomic) NSDictionary *moreFiltersOrderingDictionary; // @synthesize moreFiltersOrderingDictionary=_moreFiltersOrderingDictionary;
@property(readonly, copy, nonatomic) NSDictionary *filterBarOrderingDictionary; // @synthesize filterBarOrderingDictionary=_filterBarOrderingDictionary;
@property(readonly, copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(readonly, copy, nonatomic) NSString *ctaText; // @synthesize ctaText=_ctaText;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;

@end

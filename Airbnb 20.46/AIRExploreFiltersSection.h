//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface AIRExploreFiltersSection : AIRModel
{
    NSArray *_sections;
    NSArray *_allFiltersOrdering;
    NSNumber *_allFiltersCount;
    NSArray *_moreFiltersTabs;
    NSString *_moreFiltersButtonText;
    NSString *_moreFiltersToastMessage;
    NSDictionary *_filterBarOrderingDictionary;
    NSDictionary *_moreFiltersOrderingDictionary;
    NSDictionary *_moreFiltersCountDictionary;
    NSDictionary *_filterBarCountsDictionary;
    NSArray *_quickFilterItems;
    NSNumber *_useVerifiedHomesMoreFiltersButtonStyle;
    NSArray *_state;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSNumber *useVerifiedHomesMoreFiltersButtonStyle; // @synthesize useVerifiedHomesMoreFiltersButtonStyle=_useVerifiedHomesMoreFiltersButtonStyle;
@property(readonly, copy, nonatomic) NSArray *quickFilterItems; // @synthesize quickFilterItems=_quickFilterItems;
@property(readonly, copy, nonatomic) NSDictionary *filterBarCountsDictionary; // @synthesize filterBarCountsDictionary=_filterBarCountsDictionary;
@property(readonly, copy, nonatomic) NSDictionary *moreFiltersCountDictionary; // @synthesize moreFiltersCountDictionary=_moreFiltersCountDictionary;
@property(readonly, copy, nonatomic) NSDictionary *moreFiltersOrderingDictionary; // @synthesize moreFiltersOrderingDictionary=_moreFiltersOrderingDictionary;
@property(readonly, copy, nonatomic) NSDictionary *filterBarOrderingDictionary; // @synthesize filterBarOrderingDictionary=_filterBarOrderingDictionary;
@property(readonly, copy, nonatomic) NSString *moreFiltersToastMessage; // @synthesize moreFiltersToastMessage=_moreFiltersToastMessage;
@property(readonly, copy, nonatomic) NSString *moreFiltersButtonText; // @synthesize moreFiltersButtonText=_moreFiltersButtonText;
@property(readonly, copy, nonatomic) NSArray *moreFiltersTabs; // @synthesize moreFiltersTabs=_moreFiltersTabs;
@property(readonly, copy, nonatomic) NSNumber *allFiltersCount; // @synthesize allFiltersCount=_allFiltersCount;
@property(readonly, copy, nonatomic) NSArray *allFiltersOrdering; // @synthesize allFiltersOrdering=_allFiltersOrdering;
@property(readonly, copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, copy, nonatomic) NSArray *filterBarCounts;
@property(readonly, copy, nonatomic) NSNumber *moreFiltersCount;
@property(readonly, copy, nonatomic) NSArray *moreFiltersOrdering;
@property(readonly, copy, nonatomic) NSArray *filterBarOrdering;
- (id)getRightObject:(id)arg1;

@end

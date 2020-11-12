//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRAutocompleteSiteNavDetails, AIRChinaSearchBarDisplayParams, AIRExploreSearchParams, NSString, NSURL;

@interface AIRAutocompleteSuggestedItem : AIRModel
{
    NSURL *_iconURL;
    AIRAutocompleteSiteNavDetails *_siteNavDetails;
    NSString *_displayName;
    NSString *_suggestedItemType;
    AIRExploreSearchParams *_searchParams;
    AIRChinaSearchBarDisplayParams *_searchBarParams;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIRChinaSearchBarDisplayParams *searchBarParams; // @synthesize searchBarParams=_searchBarParams;
@property(readonly, copy, nonatomic) AIRExploreSearchParams *searchParams; // @synthesize searchParams=_searchParams;
@property(readonly, copy, nonatomic) NSString *suggestedItemType; // @synthesize suggestedItemType=_suggestedItemType;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) AIRAutocompleteSiteNavDetails *siteNavDetails; // @synthesize siteNavDetails=_siteNavDetails;
@property(readonly, copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;

@end

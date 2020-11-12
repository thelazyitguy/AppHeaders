//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRExploreSearchParams, AIRExploreShareInfo, NSString;

@interface AIRExploreSectionAction : AIRModel
{
    NSString *_rawType;
    NSString *_rawDismissButtonPlacement;
    AIRExploreShareInfo *_shareInfo;
    AIRExploreSearchParams *_searchParams;
    NSString *_url;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) AIRExploreSearchParams *searchParams; // @synthesize searchParams=_searchParams;
@property(readonly, copy, nonatomic) AIRExploreShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(readonly, copy, nonatomic) NSString *rawDismissButtonPlacement; // @synthesize rawDismissButtonPlacement=_rawDismissButtonPlacement;
@property(readonly, copy, nonatomic) NSString *rawType; // @synthesize rawType=_rawType;

@end


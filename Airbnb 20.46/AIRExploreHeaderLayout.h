//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRExploreAlert, AIRExploreSearchInputFlowConfiguration, NSArray, NSString;

@interface AIRExploreHeaderLayout : AIRModel
{
    NSArray *_searchInputs;
    NSArray *_headerContentSections;
    AIRExploreSearchInputFlowConfiguration *_searchInputFlowConfiguration;
    NSString *_rawMarqueeMode;
    NSString *_rawSearchInputMode;
    AIRExploreAlert *_alert;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIRExploreAlert *alert; // @synthesize alert=_alert;
@property(readonly, copy, nonatomic) NSString *rawSearchInputMode; // @synthesize rawSearchInputMode=_rawSearchInputMode;
@property(readonly, copy, nonatomic) NSString *rawMarqueeMode; // @synthesize rawMarqueeMode=_rawMarqueeMode;
@property(readonly, copy, nonatomic) AIRExploreSearchInputFlowConfiguration *searchInputFlowConfiguration; // @synthesize searchInputFlowConfiguration=_searchInputFlowConfiguration;
@property(readonly, copy, nonatomic) NSArray *headerContentSections; // @synthesize headerContentSections=_headerContentSections;
@property(readonly, copy, nonatomic) NSArray *searchInputs; // @synthesize searchInputs=_searchInputs;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRAutocompleteExperimentData, NSArray, NSNumber, NSString;

@interface AIRAutosuggestResponse : AIRModel
{
    NSNumber *_showNearby;
    NSArray *_sections;
    AIRAutocompleteExperimentData *_experimentData;
    NSString *_requestID;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, copy, nonatomic) AIRAutocompleteExperimentData *experimentData; // @synthesize experimentData=_experimentData;
@property(readonly, copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, copy, nonatomic) NSNumber *showNearby; // @synthesize showNearby=_showNearby;

@end

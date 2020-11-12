//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSArray, NSNumber, NSString;

@interface AIRFilterBarSuggestion : AIRModel
{
    NSArray *_filterBarItems;
    NSString *_groupName;
    NSNumber *_rawInteractionType;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *rawInteractionType; // @synthesize rawInteractionType=_rawInteractionType;
@property(readonly, copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(readonly, copy, nonatomic) NSArray *filterBarItems; // @synthesize filterBarItems=_filterBarItems;
@property(readonly, nonatomic) long long interactionType;

@end

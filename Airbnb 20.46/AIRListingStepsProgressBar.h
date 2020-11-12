//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSArray, NSString;

@interface AIRListingStepsProgressBar : AIRModel
{
    NSArray *_steps;
    NSString *_completeHexColor;
    NSString *_partialHexColor;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *partialHexColor; // @synthesize partialHexColor=_partialHexColor;
@property(readonly, copy, nonatomic) NSString *completeHexColor; // @synthesize completeHexColor=_completeHexColor;
@property(readonly, copy, nonatomic) NSArray *steps; // @synthesize steps=_steps;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSString, NSURL;

@interface AIRExplorePointOfInterestPicture : AIRModel
{
    NSString *_dominantSaturatedColor;
    NSString *_saturatedA11yDarkColor;
    NSURL *_originalUrl;
}

+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *originalUrl; // @synthesize originalUrl=_originalUrl;
@property(readonly, copy, nonatomic) NSString *saturatedA11yDarkColor; // @synthesize saturatedA11yDarkColor=_saturatedA11yDarkColor;
@property(readonly, copy, nonatomic) NSString *dominantSaturatedColor; // @synthesize dominantSaturatedColor=_dominantSaturatedColor;

@end

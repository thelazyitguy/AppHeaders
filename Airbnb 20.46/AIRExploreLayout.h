//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSNumber, NSString;

@interface AIRExploreLayout : AIRModel
{
    NSNumber *_isMapToggleVisible;
    NSNumber *_isMapHeaderVisible;
    NSString *_filterBarMode;
}

+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *filterBarMode; // @synthesize filterBarMode=_filterBarMode;
@property(readonly, copy, nonatomic) NSNumber *isMapHeaderVisible; // @synthesize isMapHeaderVisible=_isMapHeaderVisible;
@property(readonly, copy, nonatomic) NSNumber *isMapToggleVisible; // @synthesize isMapToggleVisible=_isMapToggleVisible;

@end

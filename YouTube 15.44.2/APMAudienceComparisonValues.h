//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDecimalNumber;

@interface APMAudienceComparisonValues : NSObject
{
    _Bool _valid;
    NSDecimalNumber *_comparisonValue;
    NSDecimalNumber *_maxComparisonValue;
    NSDecimalNumber *_minComparisonValue;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSDecimalNumber *minComparisonValue; // @synthesize minComparisonValue=_minComparisonValue;
@property(retain, nonatomic) NSDecimalNumber *maxComparisonValue; // @synthesize maxComparisonValue=_maxComparisonValue;
@property(retain, nonatomic) NSDecimalNumber *comparisonValue; // @synthesize comparisonValue=_comparisonValue;

@end


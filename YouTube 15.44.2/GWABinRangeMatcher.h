//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GWABinRangeMatcher : NSObject
{
    NSArray *_binRanges;
    NSArray *_cardTypes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *allowedCardTypes;
- (id)binRangeMatchesForCardNumber:(id)arg1;
- (id)initWithCardTypes:(id)arg1;

@end


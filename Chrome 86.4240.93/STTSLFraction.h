//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class NSString;

@interface STTSLFraction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *denominator; // @dynamic denominator;
@property(nonatomic) _Bool hasDenominator; // @dynamic hasDenominator;
@property(nonatomic) _Bool hasIntegerPart; // @dynamic hasIntegerPart;
@property(nonatomic) _Bool hasNumerator; // @dynamic hasNumerator;
@property(copy, nonatomic) NSString *integerPart; // @dynamic integerPart;
@property(copy, nonatomic) NSString *numerator; // @dynamic numerator;

@end

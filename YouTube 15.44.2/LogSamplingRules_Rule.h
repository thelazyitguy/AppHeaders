//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface LogSamplingRules_Rule : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *correlationToken; // @dynamic correlationToken;
@property(nonatomic) int eventCode; // @dynamic eventCode;
@property(nonatomic) _Bool hasCorrelationToken; // @dynamic hasCorrelationToken;
@property(nonatomic) _Bool hasEventCode; // @dynamic hasEventCode;
@property(nonatomic) _Bool hasKeepDenominator; // @dynamic hasKeepDenominator;
@property(nonatomic) _Bool hasKeepNumerator; // @dynamic hasKeepNumerator;
@property(nonatomic) long long keepDenominator; // @dynamic keepDenominator;
@property(nonatomic) long long keepNumerator; // @dynamic keepNumerator;

@end


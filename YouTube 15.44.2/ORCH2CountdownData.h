//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface ORCH2CountdownData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int countdownDuration; // @dynamic countdownDuration;
@property(nonatomic) _Bool hasCountdownDuration; // @dynamic hasCountdownDuration;
@property(nonatomic) _Bool hasPattern; // @dynamic hasPattern;
@property(nonatomic) _Bool hasUnit; // @dynamic hasUnit;
@property(copy, nonatomic) NSString *pattern; // @dynamic pattern;
@property(nonatomic) int unit; // @dynamic unit;

@end

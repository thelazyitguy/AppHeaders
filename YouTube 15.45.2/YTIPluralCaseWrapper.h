//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIFormattedStringWrapper;

@interface YTIPluralCaseWrapper : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int explicitValue; // @dynamic explicitValue;
@property(retain, nonatomic) YTIFormattedStringWrapper *formattedStringWrapper; // @dynamic formattedStringWrapper;
@property(nonatomic) _Bool hasFormattedStringWrapper; // @dynamic hasFormattedStringWrapper;
@property(nonatomic) _Bool hasValueIndex; // @dynamic hasValueIndex;
@property(nonatomic) int keyword; // @dynamic keyword;
@property(readonly, nonatomic) int selectorOneOfCase; // @dynamic selectorOneOfCase;
@property(nonatomic) int valueIndex; // @dynamic valueIndex;

@end


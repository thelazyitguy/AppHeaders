//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString;

@interface GASQueryInterpretation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int interpretationReason; // @dynamic interpretationReason;
@property(nonatomic) int interpretationType; // @dynamic interpretationType;
@property(copy, nonatomic) NSString *interpretedQuery; // @dynamic interpretedQuery;
@property(copy, nonatomic) NSString *suggestedQueryReplacement; // @dynamic suggestedQueryReplacement;
@property(nonatomic) int suggestedQueryReplacementReason; // @dynamic suggestedQueryReplacementReason;

@end

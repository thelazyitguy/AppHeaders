//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, YTICommand;

@interface YTISelectActiveParentIdentityEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNextNavigationEndpoint; // @dynamic hasNextNavigationEndpoint;
@property(retain, nonatomic) YTICommand *nextNavigationEndpoint; // @dynamic nextNavigationEndpoint;
@property(retain, nonatomic) NSMutableArray *supportedTokensArray; // @dynamic supportedTokensArray;
@property(readonly, nonatomic) unsigned long long supportedTokensArray_Count; // @dynamic supportedTokensArray_Count;

@end

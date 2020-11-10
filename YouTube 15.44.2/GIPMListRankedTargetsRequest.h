//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GIPMMergedPersonSourceOptions, GIPMPagingOptions, GIPMPeopleContext, GIPMRequestMask, GIPMRequestedAffinity, GIPRExtensionSet;

@interface GIPMListRankedTargetsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIPMRequestedAffinity *affinity; // @dynamic affinity;
@property(retain, nonatomic) GIPMPeopleContext *context; // @dynamic context;
@property(retain, nonatomic) GIPRExtensionSet *extensionSet; // @dynamic extensionSet;
@property(nonatomic) _Bool hasAffinity; // @dynamic hasAffinity;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasExtensionSet; // @dynamic hasExtensionSet;
@property(nonatomic) _Bool hasMergedPersonSourceOptions; // @dynamic hasMergedPersonSourceOptions;
@property(nonatomic) _Bool hasPagingOptions; // @dynamic hasPagingOptions;
@property(nonatomic) _Bool hasRequestMask; // @dynamic hasRequestMask;
@property(nonatomic) _Bool includeAllReachablePeople; // @dynamic includeAllReachablePeople;
@property(retain, nonatomic) GIPMMergedPersonSourceOptions *mergedPersonSourceOptions; // @dynamic mergedPersonSourceOptions;
@property(retain, nonatomic) GIPMPagingOptions *pagingOptions; // @dynamic pagingOptions;
@property(retain, nonatomic) GIPMRequestMask *requestMask; // @dynamic requestMask;

@end


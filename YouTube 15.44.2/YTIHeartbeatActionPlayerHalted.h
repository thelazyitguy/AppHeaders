//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData;

@interface YTIHeartbeatActionPlayerHalted : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool enforcedPolicyToHaltOnNetworkFailure; // @dynamic enforcedPolicyToHaltOnNetworkFailure;
@property(nonatomic) _Bool hasEnforcedPolicyToHaltOnNetworkFailure; // @dynamic hasEnforcedPolicyToHaltOnNetworkFailure;
@property(nonatomic) _Bool hasSerializedServerContext; // @dynamic hasSerializedServerContext;
@property(copy, nonatomic) NSData *serializedServerContext; // @dynamic serializedServerContext;

@end


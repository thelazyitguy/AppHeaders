//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class VCPBEmailForwardingModalities_ApplicabilityMask;

@interface VCPBEmailForwardingModalities : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) VCPBEmailForwardingModalities_ApplicabilityMask *applicabilityMask; // @dynamic applicabilityMask;
@property(nonatomic) _Bool hasApplicabilityMask; // @dynamic hasApplicabilityMask;
@property(nonatomic) _Bool hasMissedCalls; // @dynamic hasMissedCalls;
@property(nonatomic) _Bool hasSms; // @dynamic hasSms;
@property(nonatomic) _Bool hasVoicemails; // @dynamic hasVoicemails;
@property(nonatomic) _Bool missedCalls; // @dynamic missedCalls;
@property(nonatomic) _Bool sms; // @dynamic sms;
@property(nonatomic) _Bool voicemails; // @dynamic voicemails;

@end


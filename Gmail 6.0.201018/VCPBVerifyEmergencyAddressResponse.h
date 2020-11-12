//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class VADPBAddressData, VADPBAddressDataWithErrors, VADPBAddressDataWithSuggestion, VCPBSessionToken;

@interface VCPBVerifyEmergencyAddressResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) VADPBAddressData *address; // @dynamic address;
@property(retain, nonatomic) VADPBAddressDataWithErrors *addressWithErrors; // @dynamic addressWithErrors;
@property(retain, nonatomic) VADPBAddressDataWithSuggestion *addressWithSuggestion; // @dynamic addressWithSuggestion;
@property(nonatomic) _Bool hasSessionToken; // @dynamic hasSessionToken;
@property(retain, nonatomic) VCPBSessionToken *sessionToken; // @dynamic sessionToken;
@property(readonly, nonatomic) int verificationOutcomeOneOfCase; // @dynamic verificationOutcomeOneOfCase;

@end

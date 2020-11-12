//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class VCPBLinkedPhone, VCPBNextVerificationStep, VCPBSessionToken, VPBPhoneNumber;

@interface VCPBVerifyPhoneResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLinkedPhone; // @dynamic hasLinkedPhone;
@property(nonatomic) _Bool hasNextStep; // @dynamic hasNextStep;
@property(nonatomic) _Bool hasPhoneNumber; // @dynamic hasPhoneNumber;
@property(nonatomic) _Bool hasSessionToken; // @dynamic hasSessionToken;
@property(nonatomic) _Bool hasVerificationComplete; // @dynamic hasVerificationComplete;
@property(retain, nonatomic) VCPBLinkedPhone *linkedPhone; // @dynamic linkedPhone;
@property(retain, nonatomic) VCPBNextVerificationStep *nextStep; // @dynamic nextStep;
@property(retain, nonatomic) VPBPhoneNumber *phoneNumber; // @dynamic phoneNumber;
@property(retain, nonatomic) VCPBSessionToken *sessionToken; // @dynamic sessionToken;
@property(nonatomic) _Bool verificationComplete; // @dynamic verificationComplete;

@end

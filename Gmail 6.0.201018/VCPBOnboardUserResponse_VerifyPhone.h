//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class VCPBLinkedPhoneRestrictions;

@interface VCPBOnboardUserResponse_VerifyPhone : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIsSkippable; // @dynamic hasIsSkippable;
@property(nonatomic) _Bool hasLinkedPhoneRestrictions; // @dynamic hasLinkedPhoneRestrictions;
@property(nonatomic) _Bool hasPromptType; // @dynamic hasPromptType;
@property(nonatomic) _Bool isSkippable; // @dynamic isSkippable;
@property(retain, nonatomic) VCPBLinkedPhoneRestrictions *linkedPhoneRestrictions; // @dynamic linkedPhoneRestrictions;
@property(nonatomic) int promptType; // @dynamic promptType;

@end


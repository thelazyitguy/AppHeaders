//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString;

@interface SLOGSocialAffinityExtension_SocialAffinityEntityId : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long contactId; // @dynamic contactId;
@property(copy, nonatomic) NSString *email; // @dynamic email;
@property(nonatomic) _Bool hasContactId; // @dynamic hasContactId;
@property(nonatomic) _Bool hasEmail; // @dynamic hasEmail;
@property(nonatomic) _Bool hasObfuscatedGaiaId; // @dynamic hasObfuscatedGaiaId;
@property(nonatomic) _Bool hasPhone; // @dynamic hasPhone;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(copy, nonatomic) NSString *obfuscatedGaiaId; // @dynamic obfuscatedGaiaId;
@property(copy, nonatomic) NSString *phone; // @dynamic phone;
@property(nonatomic) int type; // @dynamic type;

@end

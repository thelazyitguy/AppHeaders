//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString, SLOGSocialAffinityExtension_SocialAffinityEntityId, SLOGSocialAffinityExtension_SocialAffinityEntityMetadata;

@interface SLOGSocialAffinityExtension_SocialAffinityEntity : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SLOGSocialAffinityExtension_SocialAffinityEntityId *entityId; // @dynamic entityId;
@property(nonatomic) _Bool hasEntityId; // @dynamic hasEntityId;
@property(nonatomic) _Bool hasLoggingId; // @dynamic hasLoggingId;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(copy, nonatomic) NSString *loggingId; // @dynamic loggingId;
@property(retain, nonatomic) SLOGSocialAffinityExtension_SocialAffinityEntityMetadata *metadata; // @dynamic metadata;

@end

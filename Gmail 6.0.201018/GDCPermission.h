//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString;

@interface GDCPermission : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *audienceId; // @dynamic audienceId;
@property(copy, nonatomic) NSString *customerId; // @dynamic customerId;
@property(nonatomic) _Bool deleted; // @dynamic deleted;
@property(copy, nonatomic) NSString *domain; // @dynamic domain;
@property(copy, nonatomic) NSString *email; // @dynamic email;
@property(copy, nonatomic) NSString *emailFromAccount; // @dynamic emailFromAccount;
@property(copy, nonatomic) NSString *focusUserId; // @dynamic focusUserId;
@property(nonatomic) _Bool hasAudienceId; // @dynamic hasAudienceId;
@property(nonatomic) _Bool hasCustomerId; // @dynamic hasCustomerId;
@property(nonatomic) _Bool hasDeleted; // @dynamic hasDeleted;
@property(nonatomic) _Bool hasDomain; // @dynamic hasDomain;
@property(nonatomic) _Bool hasEmail; // @dynamic hasEmail;
@property(nonatomic) _Bool hasEmailFromAccount; // @dynamic hasEmailFromAccount;
@property(nonatomic) _Bool hasFocusUserId; // @dynamic hasFocusUserId;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasIsMe; // @dynamic hasIsMe;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasOrganizationDisplayName; // @dynamic hasOrganizationDisplayName;
@property(nonatomic) _Bool hasPhotoURL; // @dynamic hasPhotoURL;
@property(nonatomic) _Bool hasRole; // @dynamic hasRole;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasUnlisted; // @dynamic hasUnlisted;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) _Bool isMe; // @dynamic isMe;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *organizationDisplayName; // @dynamic organizationDisplayName;
@property(copy, nonatomic) NSString *photoURL; // @dynamic photoURL;
@property(nonatomic) int role; // @dynamic role;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) _Bool unlisted; // @dynamic unlisted;

@end


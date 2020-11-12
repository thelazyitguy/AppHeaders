//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRDateTime, GTLRIDrive_Permission_Capabilities, NSArray, NSNumber, NSString;

@interface GTLRIDrive_Permission : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *ETag; // @dynamic ETag;
@property(retain, nonatomic) NSArray *additionalRoles; // @dynamic additionalRoles;
@property(copy, nonatomic) NSString *audienceDescription; // @dynamic audienceDescription;
@property(copy, nonatomic) NSString *audienceId; // @dynamic audienceId;
@property(copy, nonatomic) NSString *authKey; // @dynamic authKey;
@property(retain, nonatomic) GTLRIDrive_Permission_Capabilities *capabilities; // @dynamic capabilities;
@property(copy, nonatomic) NSString *customerId; // @dynamic customerId;
@property(retain, nonatomic) NSNumber *deleted; // @dynamic deleted;
@property(copy, nonatomic) NSString *domain; // @dynamic domain;
@property(copy, nonatomic) NSString *emailAddress; // @dynamic emailAddress;
@property(retain, nonatomic) GTLRDateTime *expirationDate; // @dynamic expirationDate;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *inapplicableLocalizedMessage; // @dynamic inapplicableLocalizedMessage;
@property(copy, nonatomic) NSString *inapplicableReason; // @dynamic inapplicableReason;
@property(retain, nonatomic) NSNumber *isStale; // @dynamic isStale;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *nameIfNotUser; // @dynamic nameIfNotUser;
@property(retain, nonatomic) NSArray *permissionDetails; // @dynamic permissionDetails;
@property(copy, nonatomic) NSString *photoLink; // @dynamic photoLink;
@property(copy, nonatomic) NSString *role; // @dynamic role;
@property(retain, nonatomic) NSArray *selectableRoles; // @dynamic selectableRoles;
@property(copy, nonatomic) NSString *selfLink; // @dynamic selfLink;
@property(copy, nonatomic) NSString *staleReason; // @dynamic staleReason;
@property(retain, nonatomic) NSArray *teamDrivePermissionDetails; // @dynamic teamDrivePermissionDetails;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;
@property(copy, nonatomic) NSString *value; // @dynamic value;
@property(copy, nonatomic) NSString *view; // @dynamic view;
@property(retain, nonatomic) NSNumber *withLink; // @dynamic withLink;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString;

@interface VCPBApi2Contact : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool blocked; // @dynamic blocked;
@property(nonatomic) _Bool hasBlocked; // @dynamic hasBlocked;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasPhoneNumber; // @dynamic hasPhoneNumber;
@property(nonatomic) _Bool hasPhoneType; // @dynamic hasPhoneType;
@property(nonatomic) _Bool hasPhotoURL; // @dynamic hasPhotoURL;
@property(nonatomic) long long id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *phoneNumber; // @dynamic phoneNumber;
@property(nonatomic) int phoneType; // @dynamic phoneType;
@property(copy, nonatomic) NSString *photoURL; // @dynamic photoURL;

@end


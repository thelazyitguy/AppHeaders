//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString, POEMPersonFieldMetadata;

@interface POEMPosixAccount : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *accountId; // @dynamic accountId;
@property(nonatomic) int accountNamespace; // @dynamic accountNamespace;
@property(nonatomic) int accountType; // @dynamic accountType;
@property(nonatomic) long long customerKey; // @dynamic customerKey;
@property(copy, nonatomic) NSString *fingerprint; // @dynamic fingerprint;
@property(copy, nonatomic) NSString *gecos; // @dynamic gecos;
@property(nonatomic) unsigned long long gid; // @dynamic gid;
@property(nonatomic) _Bool hasAccountId; // @dynamic hasAccountId;
@property(nonatomic) _Bool hasAccountNamespace; // @dynamic hasAccountNamespace;
@property(nonatomic) _Bool hasAccountType; // @dynamic hasAccountType;
@property(nonatomic) _Bool hasCustomerKey; // @dynamic hasCustomerKey;
@property(nonatomic) _Bool hasFingerprint; // @dynamic hasFingerprint;
@property(nonatomic) _Bool hasGecos; // @dynamic hasGecos;
@property(nonatomic) _Bool hasGid; // @dynamic hasGid;
@property(nonatomic) _Bool hasHomeDirectory; // @dynamic hasHomeDirectory;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasOperatingSystemType; // @dynamic hasOperatingSystemType;
@property(nonatomic) _Bool hasShell; // @dynamic hasShell;
@property(nonatomic) _Bool hasSystemId; // @dynamic hasSystemId;
@property(nonatomic) _Bool hasUid; // @dynamic hasUid;
@property(nonatomic) _Bool hasUsername; // @dynamic hasUsername;
@property(copy, nonatomic) NSString *homeDirectory; // @dynamic homeDirectory;
@property(retain, nonatomic) POEMPersonFieldMetadata *metadata; // @dynamic metadata;
@property(nonatomic) int operatingSystemType; // @dynamic operatingSystemType;
@property(copy, nonatomic) NSString *shell; // @dynamic shell;
@property(copy, nonatomic) NSString *systemId; // @dynamic systemId;
@property(nonatomic) unsigned long long uid; // @dynamic uid;
@property(copy, nonatomic) NSString *username; // @dynamic username;

@end

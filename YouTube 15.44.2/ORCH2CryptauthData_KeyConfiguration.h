//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface ORCH2CryptauthData_KeyConfiguration : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasKeyName; // @dynamic hasKeyName;
@property(nonatomic) _Bool hasStrongAuth; // @dynamic hasStrongAuth;
@property(copy, nonatomic) NSString *keyName; // @dynamic keyName;
@property(nonatomic) _Bool strongAuth; // @dynamic strongAuth;

@end


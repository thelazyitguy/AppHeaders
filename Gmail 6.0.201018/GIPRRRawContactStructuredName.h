//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString;

@interface GIPRRRawContactStructuredName : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(copy, nonatomic) NSString *familyName; // @dynamic familyName;
@property(nonatomic) int fullNameStyle; // @dynamic fullNameStyle;
@property(copy, nonatomic) NSString *givenName; // @dynamic givenName;
@property(copy, nonatomic) NSString *middleName; // @dynamic middleName;
@property(copy, nonatomic) NSString *phoneticFamilyName; // @dynamic phoneticFamilyName;
@property(copy, nonatomic) NSString *phoneticGivenName; // @dynamic phoneticGivenName;
@property(copy, nonatomic) NSString *phoneticMiddleName; // @dynamic phoneticMiddleName;
@property(nonatomic) int phoneticNameStyle; // @dynamic phoneticNameStyle;
@property(copy, nonatomic) NSString *prefix; // @dynamic prefix;
@property(copy, nonatomic) NSString *suffix; // @dynamic suffix;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class FEEDToken, NSString;

@interface DCHChannel : GPBMessage
{
}

+ (id)descriptor;
- (id)dsc_asDomainObject;

// Remaining properties
@property(nonatomic) _Bool experimental; // @dynamic experimental;
@property(nonatomic) _Bool followed; // @dynamic followed;
@property(nonatomic) _Bool followedLegacyInterest; // @dynamic followedLegacyInterest;
@property(nonatomic) long long followerCount; // @dynamic followerCount;
@property(nonatomic) _Bool hasTngToken; // @dynamic hasTngToken;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) _Bool notificationSubscribed; // @dynamic notificationSubscribed;
@property(copy, nonatomic) NSString *sharingURL; // @dynamic sharingURL;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) FEEDToken *tngToken; // @dynamic tngToken;
@property(retain, nonatomic) FEEDToken *token; // @dynamic token;
@property(readonly, nonatomic) int typeSpecificMetadataOneOfCase; // @dynamic typeSpecificMetadataOneOfCase;

@end

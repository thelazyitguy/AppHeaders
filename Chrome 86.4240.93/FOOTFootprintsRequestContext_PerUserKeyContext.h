//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class FOOTUserKeyProto, NSString;

@interface FOOTFootprintsRequestContext_PerUserKeyContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(nonatomic) _Bool hasVersionInfo; // @dynamic hasVersionInfo;
@property(retain, nonatomic) FOOTUserKeyProto *user; // @dynamic user;
@property(copy, nonatomic) NSString *versionInfo; // @dynamic versionInfo;

@end


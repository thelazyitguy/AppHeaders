//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString;

@interface PSKInAppTarget : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *email; // @dynamic email;
@property(nonatomic) _Bool hasProfileId; // @dynamic hasProfileId;
@property(readonly, nonatomic) int originOneOfCase; // @dynamic originOneOfCase;
@property(copy, nonatomic) NSString *phone; // @dynamic phone;
@property(copy, nonatomic) NSString *profileId; // @dynamic profileId;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SPTPreSignupExperimentationProtoDeviceInformation, SPTPreSignupExperimentationProtoScreen;

@interface SPTPreSignupExperimentationProtoClientData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool alreadyLoggedIn; // @dynamic alreadyLoggedIn;
@property(copy, nonatomic) NSString *appPackage; // @dynamic appPackage;
@property(copy, nonatomic) NSString *deepLink; // @dynamic deepLink;
@property(retain, nonatomic) SPTPreSignupExperimentationProtoDeviceInformation *deviceInformation; // @dynamic deviceInformation;
@property(nonatomic) _Bool hasDeviceInformation; // @dynamic hasDeviceInformation;
@property(nonatomic) _Bool hasScreen; // @dynamic hasScreen;
@property(copy, nonatomic) NSString *language; // @dynamic language;
@property(nonatomic) int origin; // @dynamic origin;
@property(copy, nonatomic) NSString *platform; // @dynamic platform;
@property(copy, nonatomic) NSString *revision; // @dynamic revision;
@property(retain, nonatomic) SPTPreSignupExperimentationProtoScreen *screen; // @dynamic screen;
@property(copy, nonatomic) NSString *spotifyId; // @dynamic spotifyId;

@end

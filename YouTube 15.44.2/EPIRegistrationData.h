//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString;

@interface EPIRegistrationData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *applicationProperties; // @dynamic applicationProperties;
@property(nonatomic) long long baselineCl; // @dynamic baselineCl;
@property(copy, nonatomic) NSString *bundleId; // @dynamic bundleId;
@property(copy, nonatomic) NSString *configPackage; // @dynamic configPackage;
@property(nonatomic) _Bool hasApplicationProperties; // @dynamic hasApplicationProperties;
@property(nonatomic) _Bool hasBaselineCl; // @dynamic hasBaselineCl;
@property(nonatomic) _Bool hasBundleId; // @dynamic hasBundleId;
@property(nonatomic) _Bool hasConfigPackage; // @dynamic hasConfigPackage;
@property(nonatomic) _Bool hasRegistrationTimeSeconds; // @dynamic hasRegistrationTimeSeconds;
@property(nonatomic) _Bool hasVersionCode; // @dynamic hasVersionCode;
@property(nonatomic) long long registrationTimeSeconds; // @dynamic registrationTimeSeconds;
@property(nonatomic) long long versionCode; // @dynamic versionCode;

@end


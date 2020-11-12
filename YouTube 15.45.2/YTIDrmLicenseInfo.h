//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString;

@interface YTIDrmLicenseInfo : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool canRenew; // @dynamic canRenew;
@property(copy, nonatomic) NSString *drmParams; // @dynamic drmParams;
@property(copy, nonatomic) NSString *drmSessionId; // @dynamic drmSessionId;
@property(copy, nonatomic) NSData *fairPlayConfig; // @dynamic fairPlayConfig;
@property(nonatomic) _Bool hasCanRenew; // @dynamic hasCanRenew;
@property(nonatomic) _Bool hasDrmParams; // @dynamic hasDrmParams;
@property(nonatomic) _Bool hasDrmSessionId; // @dynamic hasDrmSessionId;
@property(nonatomic) _Bool hasFairPlayConfig; // @dynamic hasFairPlayConfig;
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(nonatomic) _Bool hasLicenseDurationSeconds; // @dynamic hasLicenseDurationSeconds;
@property(nonatomic) _Bool hasPlaybackDurationSeconds; // @dynamic hasPlaybackDurationSeconds;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) long long licenseDurationSeconds; // @dynamic licenseDurationSeconds;
@property(nonatomic) long long playbackDurationSeconds; // @dynamic playbackDurationSeconds;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@interface VCPBPhoneVerificationState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool currentlyVerified; // @dynamic currentlyVerified;
@property(nonatomic) _Bool hasCurrentlyVerified; // @dynamic hasCurrentlyVerified;
@property(nonatomic) _Bool hasPlannedUnverificationTimeMs; // @dynamic hasPlannedUnverificationTimeMs;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) unsigned long long plannedUnverificationTimeMs; // @dynamic plannedUnverificationTimeMs;
@property(nonatomic) int status; // @dynamic status;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class VCPBDoNotDisturbInfo_ApplicabilityLevels, VPBTimestamp;

@interface VCPBDoNotDisturbInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) VCPBDoNotDisturbInfo_ApplicabilityLevels *applicabilityLevels; // @dynamic applicabilityLevels;
@property(nonatomic) int dndReason; // @dynamic dndReason;
@property(nonatomic) _Bool enableDndOutOfOffice; // @dynamic enableDndOutOfOffice;
@property(nonatomic) _Bool enableDndOutsideWorkHours; // @dynamic enableDndOutsideWorkHours;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(retain, nonatomic) VPBTimestamp *expiration; // @dynamic expiration;
@property(nonatomic) _Bool hasApplicabilityLevels; // @dynamic hasApplicabilityLevels;
@property(nonatomic) _Bool hasDndReason; // @dynamic hasDndReason;
@property(nonatomic) _Bool hasEnableDndOutOfOffice; // @dynamic hasEnableDndOutOfOffice;
@property(nonatomic) _Bool hasEnableDndOutsideWorkHours; // @dynamic hasEnableDndOutsideWorkHours;
@property(nonatomic) _Bool hasEnabled; // @dynamic hasEnabled;
@property(nonatomic) _Bool hasExpiration; // @dynamic hasExpiration;

@end

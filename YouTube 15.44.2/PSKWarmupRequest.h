//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class PSKClientInformation;

@interface PSKWarmupRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int affinityType; // @dynamic affinityType;
@property(retain, nonatomic) PSKClientInformation *clientInformation; // @dynamic clientInformation;
@property(nonatomic) _Bool hasAffinityType; // @dynamic hasAffinityType;
@property(nonatomic) _Bool hasClientInformation; // @dynamic hasClientInformation;

@end


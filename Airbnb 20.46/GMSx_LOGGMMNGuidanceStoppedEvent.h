//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class NSString;

@interface GMSx_LOGGMMNGuidanceStoppedEvent : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasReason; // @dynamic hasReason;
@property(nonatomic) _Bool hasSpokenText; // @dynamic hasSpokenText;
@property(nonatomic) _Bool hasSpokenTextHash; // @dynamic hasSpokenTextHash;
@property(nonatomic) int reason; // @dynamic reason;
@property(copy, nonatomic) NSString *spokenText; // @dynamic spokenText;
@property(nonatomic) unsigned int spokenTextHash; // @dynamic spokenTextHash;

@end


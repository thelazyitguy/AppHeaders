//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_LOGGMMNTripChangedDetails;

@interface GMSx_LOGGMMNAlternateTripOfferedEvent : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRerouteType; // @dynamic hasRerouteType;
@property(nonatomic) _Bool hasTripChangedDetails; // @dynamic hasTripChangedDetails;
@property(nonatomic) int rerouteType; // @dynamic rerouteType;
@property(retain, nonatomic) GMSx_LOGGMMNTripChangedDetails *tripChangedDetails; // @dynamic tripChangedDetails;

@end


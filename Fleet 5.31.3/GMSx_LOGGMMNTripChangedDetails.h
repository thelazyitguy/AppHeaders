//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GPBDuration;

@interface GMSx_LOGGMMNTripChangedDetails : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLengthChangeMeters; // @dynamic hasLengthChangeMeters;
@property(nonatomic) _Bool hasNewDelayCategory; // @dynamic hasNewDelayCategory;
@property(nonatomic) _Bool hasPreviousDelayCategory; // @dynamic hasPreviousDelayCategory;
@property(nonatomic) _Bool hasTrafficEtaChange; // @dynamic hasTrafficEtaChange;
@property(nonatomic) _Bool hasTypicalEtaChange; // @dynamic hasTypicalEtaChange;
@property(nonatomic) int lengthChangeMeters; // @dynamic lengthChangeMeters;
@property(nonatomic) int newDelayCategory; // @dynamic newDelayCategory;
@property(nonatomic) int previousDelayCategory; // @dynamic previousDelayCategory;
@property(retain, nonatomic) GMSx_GPBDuration *trafficEtaChange; // @dynamic trafficEtaChange;
@property(retain, nonatomic) GMSx_GPBDuration *typicalEtaChange; // @dynamic typicalEtaChange;

@end

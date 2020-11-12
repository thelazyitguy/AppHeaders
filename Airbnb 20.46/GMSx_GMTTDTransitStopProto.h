//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTDComponentIcon, GMSx_GMTTLatLng, GMSx_GSPDTime, NSMutableArray, NSString;

@interface GMSx_GMTTDTransitStopProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GSPDTime *arrivalDateTime; // @dynamic arrivalDateTime;
@property(copy, nonatomic) NSString *code; // @dynamic code;
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(retain, nonatomic) GMSx_GSPDTime *departureDateTime; // @dynamic departureDateTime;
@property(nonatomic) _Bool hasArrivalDateTime; // @dynamic hasArrivalDateTime;
@property(nonatomic) _Bool hasCode; // @dynamic hasCode;
@property(nonatomic) _Bool hasCountryCode; // @dynamic hasCountryCode;
@property(nonatomic) _Bool hasDepartureDateTime; // @dynamic hasDepartureDateTime;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasPlatform; // @dynamic hasPlatform;
@property(nonatomic) _Bool hasPosition; // @dynamic hasPosition;
@property(nonatomic) _Bool hasRealtimeStatus; // @dynamic hasRealtimeStatus;
@property(nonatomic) _Bool hasScheduledArrivalDateTime; // @dynamic hasScheduledArrivalDateTime;
@property(nonatomic) _Bool hasScheduledDepartureDateTime; // @dynamic hasScheduledDepartureDateTime;
@property(nonatomic) _Bool hasSignpostedAs; // @dynamic hasSignpostedAs;
@property(nonatomic) _Bool hasStationEntranceName; // @dynamic hasStationEntranceName;
@property(nonatomic) _Bool hasStationFeatureId; // @dynamic hasStationFeatureId;
@property(retain, nonatomic) GMSx_GMTTDComponentIcon *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSMutableArray *noticeArray; // @dynamic noticeArray;
@property(readonly, nonatomic) unsigned long long noticeArray_Count; // @dynamic noticeArray_Count;
@property(copy, nonatomic) NSString *platform; // @dynamic platform;
@property(retain, nonatomic) GMSx_GMTTLatLng *position; // @dynamic position;
@property(nonatomic) int realtimeStatus; // @dynamic realtimeStatus;
@property(retain, nonatomic) GMSx_GSPDTime *scheduledArrivalDateTime; // @dynamic scheduledArrivalDateTime;
@property(retain, nonatomic) GMSx_GSPDTime *scheduledDepartureDateTime; // @dynamic scheduledDepartureDateTime;
@property(copy, nonatomic) NSString *signpostedAs; // @dynamic signpostedAs;
@property(copy, nonatomic) NSString *stationEntranceName; // @dynamic stationEntranceName;
@property(copy, nonatomic) NSString *stationFeatureId; // @dynamic stationFeatureId;

@end


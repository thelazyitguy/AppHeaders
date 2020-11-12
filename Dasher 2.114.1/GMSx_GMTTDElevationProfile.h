//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_GPBMessage.h>

@class GMSx_GMTTDDistance, GMSx_GPBInt32Array;

@interface GMSx_GMTTDElevationProfile : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GPBInt32Array *altitudeMetersDiffArray; // @dynamic altitudeMetersDiffArray;
@property(readonly, nonatomic) unsigned long long altitudeMetersDiffArray_Count; // @dynamic altitudeMetersDiffArray_Count;
@property(retain, nonatomic) GMSx_GMTTDDistance *ascent; // @dynamic ascent;
@property(retain, nonatomic) GMSx_GMTTDDistance *descent; // @dynamic descent;
@property(retain, nonatomic) GMSx_GPBInt32Array *distanceMetersDiffArray; // @dynamic distanceMetersDiffArray;
@property(readonly, nonatomic) unsigned long long distanceMetersDiffArray_Count; // @dynamic distanceMetersDiffArray_Count;
@property(retain, nonatomic) GMSx_GMTTDDistance *endAltitude; // @dynamic endAltitude;
@property(nonatomic) _Bool hasAscent; // @dynamic hasAscent;
@property(nonatomic) _Bool hasDescent; // @dynamic hasDescent;
@property(nonatomic) _Bool hasEndAltitude; // @dynamic hasEndAltitude;
@property(nonatomic) _Bool hasMaximumAltitude; // @dynamic hasMaximumAltitude;
@property(nonatomic) _Bool hasMinimumAltitude; // @dynamic hasMinimumAltitude;
@property(nonatomic) _Bool hasMostlyFlat; // @dynamic hasMostlyFlat;
@property(nonatomic) _Bool hasStartAltitude; // @dynamic hasStartAltitude;
@property(retain, nonatomic) GMSx_GMTTDDistance *maximumAltitude; // @dynamic maximumAltitude;
@property(retain, nonatomic) GMSx_GMTTDDistance *minimumAltitude; // @dynamic minimumAltitude;
@property(nonatomic) _Bool mostlyFlat; // @dynamic mostlyFlat;
@property(retain, nonatomic) GMSx_GMTTDDistance *startAltitude; // @dynamic startAltitude;

@end

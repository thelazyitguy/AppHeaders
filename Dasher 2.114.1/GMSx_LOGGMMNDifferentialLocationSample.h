//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_GPBMessage.h>

@class GMSx_LOGGMMNStepPointer;

@interface GMSx_LOGGMMNDifferentialLocationSample : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int altitudeMeters; // @dynamic altitudeMeters;
@property(nonatomic) int altitudeRangeMeters; // @dynamic altitudeRangeMeters;
@property(nonatomic) int altitudeSign; // @dynamic altitudeSign;
@property(nonatomic) int bearingDegrees; // @dynamic bearingDegrees;
@property(nonatomic) int confidencePercent; // @dynamic confidencePercent;
@property(nonatomic) int forwardingTripVersion; // @dynamic forwardingTripVersion;
@property(nonatomic) _Bool hasAltitudeMeters; // @dynamic hasAltitudeMeters;
@property(nonatomic) _Bool hasAltitudeRangeMeters; // @dynamic hasAltitudeRangeMeters;
@property(nonatomic) _Bool hasAltitudeSign; // @dynamic hasAltitudeSign;
@property(nonatomic) _Bool hasBearingDegrees; // @dynamic hasBearingDegrees;
@property(nonatomic) _Bool hasConfidencePercent; // @dynamic hasConfidencePercent;
@property(nonatomic) _Bool hasForwardingTripVersion; // @dynamic hasForwardingTripVersion;
@property(nonatomic) _Bool hasInScrubbingZone; // @dynamic hasInScrubbingZone;
@property(nonatomic) _Bool hasLatE7; // @dynamic hasLatE7;
@property(nonatomic) _Bool hasLngE7; // @dynamic hasLngE7;
@property(nonatomic) _Bool hasRadiusDecimeters; // @dynamic hasRadiusDecimeters;
@property(nonatomic) _Bool hasSnappedTunnel; // @dynamic hasSnappedTunnel;
@property(nonatomic) _Bool hasSource; // @dynamic hasSource;
@property(nonatomic) _Bool hasSpeedDecimetersPerSecond; // @dynamic hasSpeedDecimetersPerSecond;
@property(nonatomic) _Bool hasStepPointer; // @dynamic hasStepPointer;
@property(nonatomic) _Bool hasTileVersion; // @dynamic hasTileVersion;
@property(nonatomic) _Bool hasTimestampMs; // @dynamic hasTimestampMs;
@property(nonatomic) _Bool hasTravelMode; // @dynamic hasTravelMode;
@property(nonatomic) _Bool inScrubbingZone; // @dynamic inScrubbingZone;
@property(nonatomic) int latE7; // @dynamic latE7;
@property(nonatomic) int lngE7; // @dynamic lngE7;
@property(nonatomic) int radiusDecimeters; // @dynamic radiusDecimeters;
@property(nonatomic) _Bool snappedTunnel; // @dynamic snappedTunnel;
@property(nonatomic) int source; // @dynamic source;
@property(nonatomic) int speedDecimetersPerSecond; // @dynamic speedDecimetersPerSecond;
@property(retain, nonatomic) GMSx_LOGGMMNStepPointer *stepPointer; // @dynamic stepPointer;
@property(nonatomic) long long tileVersion; // @dynamic tileVersion;
@property(nonatomic) long long timestampMs; // @dynamic timestampMs;
@property(nonatomic) int travelMode; // @dynamic travelMode;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTBuildingLevel, GMSx_GMTTDParkingOptions, GMSx_GMTTDWaypointQuery_LocationFilters, GMSx_GMTTLatLng, NSString;

@interface GMSx_GMTTDWaypointQuery : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *boardedTransitVehicleToken; // @dynamic boardedTransitVehicleToken;
@property(copy, nonatomic) NSString *compactGeocode; // @dynamic compactGeocode;
@property(nonatomic) _Bool disableSpellCorrection; // @dynamic disableSpellCorrection;
@property(copy, nonatomic) NSString *displayText; // @dynamic displayText;
@property(nonatomic) int entityType; // @dynamic entityType;
@property(copy, nonatomic) NSString *featureId; // @dynamic featureId;
@property(nonatomic) _Bool hasBoardedTransitVehicleToken; // @dynamic hasBoardedTransitVehicleToken;
@property(nonatomic) _Bool hasCompactGeocode; // @dynamic hasCompactGeocode;
@property(nonatomic) _Bool hasDisableSpellCorrection; // @dynamic hasDisableSpellCorrection;
@property(nonatomic) _Bool hasDisplayText; // @dynamic hasDisplayText;
@property(nonatomic) _Bool hasEntityType; // @dynamic hasEntityType;
@property(nonatomic) _Bool hasFeatureId; // @dynamic hasFeatureId;
@property(nonatomic) _Bool hasIsDragged; // @dynamic hasIsDragged;
@property(nonatomic) _Bool hasLevel; // @dynamic hasLevel;
@property(nonatomic) _Bool hasLocationFilters; // @dynamic hasLocationFilters;
@property(nonatomic) _Bool hasParkingOptions; // @dynamic hasParkingOptions;
@property(nonatomic) _Bool hasPlaceId; // @dynamic hasPlaceId;
@property(nonatomic) _Bool hasPosition; // @dynamic hasPosition;
@property(nonatomic) _Bool hasPreferSameSideOfRoad; // @dynamic hasPreferSameSideOfRoad;
@property(nonatomic) _Bool hasPreferredSegmentHeading; // @dynamic hasPreferredSegmentHeading;
@property(nonatomic) _Bool hasQuery; // @dynamic hasQuery;
@property(nonatomic) _Bool hasQueryType; // @dynamic hasQueryType;
@property(nonatomic) _Bool hasRoutableWaypointToken; // @dynamic hasRoutableWaypointToken;
@property(nonatomic) _Bool hasSerializedSuggestContext; // @dynamic hasSerializedSuggestContext;
@property(nonatomic) _Bool hasTransitStrictlyMatchWaypoint; // @dynamic hasTransitStrictlyMatchWaypoint;
@property(nonatomic) _Bool isDragged; // @dynamic isDragged;
@property(retain, nonatomic) GMSx_GMTTBuildingLevel *level; // @dynamic level;
@property(retain, nonatomic) GMSx_GMTTDWaypointQuery_LocationFilters *locationFilters; // @dynamic locationFilters;
@property(retain, nonatomic) GMSx_GMTTDParkingOptions *parkingOptions; // @dynamic parkingOptions;
@property(copy, nonatomic) NSString *placeId; // @dynamic placeId;
@property(retain, nonatomic) GMSx_GMTTLatLng *position; // @dynamic position;
@property(nonatomic) _Bool preferSameSideOfRoad; // @dynamic preferSameSideOfRoad;
@property(nonatomic) int preferredSegmentHeading; // @dynamic preferredSegmentHeading;
@property(copy, nonatomic) NSString *query; // @dynamic query;
@property(nonatomic) int queryType; // @dynamic queryType;
@property(copy, nonatomic) NSString *routableWaypointToken; // @dynamic routableWaypointToken;
@property(copy, nonatomic) NSString *serializedSuggestContext; // @dynamic serializedSuggestContext;
@property(nonatomic) _Bool transitStrictlyMatchWaypoint; // @dynamic transitStrictlyMatchWaypoint;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRCalendar_Address, GTLRCalendar_GeoCoordinates, NSNumber, NSString;

@interface GTLRCalendar_EventLocation : GTLRObject
{
}


// Remaining properties
@property(retain, nonatomic) GTLRCalendar_Address *address; // @dynamic address;
@property(retain, nonatomic) GTLRCalendar_GeoCoordinates *geo; // @dynamic geo;
@property(copy, nonatomic) NSString *mapsClusterId; // @dynamic mapsClusterId;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *placeId; // @dynamic placeId;
@property(retain, nonatomic) NSNumber *serverGeocoded; // @dynamic serverGeocoded;
@property(copy, nonatomic) NSString *url; // @dynamic url;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GMSx_GPBMessage.h>

@class GMSx_GMTTDDestination, GMSx_GMTTDSummary, NSData, NSMutableArray;

@interface GMSx_GMTTDPath : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMTTDDestination *destination; // @dynamic destination;
@property(nonatomic) _Bool hasDestination; // @dynamic hasDestination;
@property(nonatomic) _Bool hasPreferredAlternateToken; // @dynamic hasPreferredAlternateToken;
@property(nonatomic) _Bool hasRoadTrafficEncodedPathToken; // @dynamic hasRoadTrafficEncodedPathToken;
@property(nonatomic) _Bool hasSummary; // @dynamic hasSummary;
@property(retain, nonatomic) NSMutableArray *legacyRouteViaPointArray; // @dynamic legacyRouteViaPointArray;
@property(readonly, nonatomic) unsigned long long legacyRouteViaPointArray_Count; // @dynamic legacyRouteViaPointArray_Count;
@property(copy, nonatomic) NSData *preferredAlternateToken; // @dynamic preferredAlternateToken;
@property(copy, nonatomic) NSData *roadTrafficEncodedPathToken; // @dynamic roadTrafficEncodedPathToken;
@property(retain, nonatomic) NSMutableArray *stepGroupArray; // @dynamic stepGroupArray;
@property(readonly, nonatomic) unsigned long long stepGroupArray_Count; // @dynamic stepGroupArray_Count;
@property(retain, nonatomic) GMSx_GMTTDSummary *summary; // @dynamic summary;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GMSx_GPBMessage.h>

@class GMSx_GMSLSpotlightDescription, NSMutableArray, NSString;

@interface GMSx_GMMMapTilePaintDescriptionProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int expirationInMinutes; // @dynamic expirationInMinutes;
@property(nonatomic) _Bool hasExpirationInMinutes; // @dynamic hasExpirationInMinutes;
@property(nonatomic) _Bool hasSpotlightAdsToken; // @dynamic hasSpotlightAdsToken;
@property(nonatomic) _Bool hasSpotlightDescription; // @dynamic hasSpotlightDescription;
@property(nonatomic) _Bool hasTileType; // @dynamic hasTileType;
@property(copy, nonatomic) NSString *spotlightAdsToken; // @dynamic spotlightAdsToken;
@property(retain, nonatomic) GMSx_GMSLSpotlightDescription *spotlightDescription; // @dynamic spotlightDescription;
@property(retain, nonatomic) NSMutableArray *stylerDescriptionArray; // @dynamic stylerDescriptionArray;
@property(readonly, nonatomic) unsigned long long stylerDescriptionArray_Count; // @dynamic stylerDescriptionArray_Count;
@property(nonatomic) int tileType; // @dynamic tileType;

@end

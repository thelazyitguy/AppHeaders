//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GSCPLocationProfileInfo, NSString;

@interface GSCPCurrentLocationData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int accuracyMeters; // @dynamic accuracyMeters;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) _Bool hasAccuracyMeters; // @dynamic hasAccuracyMeters;
@property(nonatomic) _Bool hasDisplayName; // @dynamic hasDisplayName;
@property(nonatomic) _Bool hasLat; // @dynamic hasLat;
@property(nonatomic) _Bool hasLng; // @dynamic hasLng;
@property(nonatomic) _Bool hasMapImageURL; // @dynamic hasMapImageURL;
@property(nonatomic) _Bool hasProfileData; // @dynamic hasProfileData;
@property(nonatomic) _Bool hasTimestampMsec; // @dynamic hasTimestampMsec;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) double lat; // @dynamic lat;
@property(nonatomic) double lng; // @dynamic lng;
@property(copy, nonatomic) NSString *mapImageURL; // @dynamic mapImageURL;
@property(retain, nonatomic) GSCPLocationProfileInfo *profileData; // @dynamic profileData;
@property(nonatomic) long long timestampMsec; // @dynamic timestampMsec;
@property(nonatomic) int type; // @dynamic type;

@end

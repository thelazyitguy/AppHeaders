//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface PWJProtobufWifiScanResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int frequencyBand; // @dynamic frequencyBand;
@property(nonatomic) _Bool hasFrequencyBand; // @dynamic hasFrequencyBand;
@property(nonatomic) _Bool hasSignalStrength; // @dynamic hasSignalStrength;
@property(nonatomic) _Bool hasSsid; // @dynamic hasSsid;
@property(nonatomic) _Bool hasWifiKeyManagement; // @dynamic hasWifiKeyManagement;
@property(nonatomic) int signalStrength; // @dynamic signalStrength;
@property(copy, nonatomic) NSString *ssid; // @dynamic ssid;
@property(nonatomic) int wifiKeyManagement; // @dynamic wifiKeyManagement;

@end

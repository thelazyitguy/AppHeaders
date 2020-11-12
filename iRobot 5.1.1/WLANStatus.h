//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DataElement-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface WLANStatus : NSObject <DataElement>
{
    _Bool _dhcp;
    NSNumber *_softap;
    NSNumber *_station;
    NSNumber *_addr;
    NSNumber *_mask;
    NSNumber *_gtwy;
    NSNumber *_dns1;
    NSNumber *_dns2;
    NSArray *_bssid;
    NSString *_securityType;
    NSNumber *_strssi;
}

+ (id)parameters;
+ (id)dataElementFromResponse:(id)arg1;
+ (_Bool)isWritable;
+ (_Bool)isReadable;
+ (id)dataModelName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *strssi; // @synthesize strssi=_strssi;
@property(retain, nonatomic) NSString *securityType; // @synthesize securityType=_securityType;
@property(retain, nonatomic) NSArray *bssid; // @synthesize bssid=_bssid;
@property(retain, nonatomic) NSNumber *dns2; // @synthesize dns2=_dns2;
@property(retain, nonatomic) NSNumber *dns1; // @synthesize dns1=_dns1;
@property(retain, nonatomic) NSNumber *gtwy; // @synthesize gtwy=_gtwy;
@property(retain, nonatomic) NSNumber *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) NSNumber *addr; // @synthesize addr=_addr;
@property(nonatomic) _Bool dhcp; // @synthesize dhcp=_dhcp;
@property(retain, nonatomic) NSNumber *station; // @synthesize station=_station;
@property(retain, nonatomic) NSNumber *softap; // @synthesize softap=_softap;
@property(readonly, nonatomic) unsigned char wifiSecurityType;
@property(readonly, nonatomic) unsigned char stationConnectionState;
@property(readonly, nonatomic) unsigned char softapConnectionState;
@property(readonly, nonatomic) unsigned char signalStrength;
- (long long)signedSTRSSI;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requestDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

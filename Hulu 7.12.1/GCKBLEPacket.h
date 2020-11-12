//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString;

@interface GCKBLEPacket : NSObject
{
    unsigned short _ipAddressLowBytes;
    NSString *_BSSID;
    NSData *_token;
    NSDate *_tokenExpirationTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned short ipAddressLowBytes; // @synthesize ipAddressLowBytes=_ipAddressLowBytes;
@property(retain, nonatomic) NSDate *tokenExpirationTime; // @synthesize tokenExpirationTime=_tokenExpirationTime;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *BSSID; // @synthesize BSSID=_BSSID;
- (_Bool)parseManufacturerData:(id)arg1;
- (_Bool)parseServiceData:(id)arg1;
- (id)initWithAdvertisementDictionary:(id)arg1;
- (id)init;

@end

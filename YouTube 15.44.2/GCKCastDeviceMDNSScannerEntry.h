//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface GCKCastDeviceMDNSScannerEntry : NSObject
{
    _Bool _hasLoggedGenericMDNSResponse;
    NSString *_endpointDeviceID;
    NSMutableSet *_loggedSubtypes;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasLoggedGenericMDNSResponse; // @synthesize hasLoggedGenericMDNSResponse=_hasLoggedGenericMDNSResponse;
@property(copy, nonatomic) NSMutableSet *loggedSubtypes; // @synthesize loggedSubtypes=_loggedSubtypes;
@property(readonly, nonatomic) NSString *endpointDeviceID; // @synthesize endpointDeviceID=_endpointDeviceID;
- (id)initWithEndpointDeviceID:(id)arg1;

@end


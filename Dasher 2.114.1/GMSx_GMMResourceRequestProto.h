//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_GPBMessage.h>

@class GMSx_GMMClientCapabilitiesProto, NSString;

@interface GMSx_GMMResourceRequestProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(retain, nonatomic) GMSx_GMMClientCapabilitiesProto *clientCapabilities; // @dynamic clientCapabilities;
@property(nonatomic) _Bool hasClientCapabilities; // @dynamic hasClientCapabilities;
@property(nonatomic) _Bool hasHash_p; // @dynamic hasHash_p;
@property(nonatomic) _Bool hasReferer; // @dynamic hasReferer;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(nonatomic) unsigned long long hash_p; // @dynamic hash_p;
@property(copy, nonatomic) NSString *referer; // @dynamic referer;

@end

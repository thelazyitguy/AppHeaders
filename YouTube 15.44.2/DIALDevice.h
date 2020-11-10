//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/DIALWakeOnLANDevice-Protocol.h>
#import <Module_Framework/NSSecureCoding-Protocol.h>

@class DIALDeviceDescription, DIALDeviceDescriptionParser, DIALResponseParser, NSString;
@protocol DIALWakeOnLANDeviceDelegate;

@interface DIALDevice : NSObject <NSSecureCoding, DIALWakeOnLANDevice>
{
    _Bool _found;
    DIALDeviceDescriptionParser *_deviceDescriptionParser;
    NSString *_clientIdentifier;
    DIALDeviceDescription *_deviceDescription;
    _Bool _wakeOnLANActive;
    _Bool _wakeOnLANSuspended;
    _Bool _available;
    _Bool _availableViaWakeOnLAN;
    NSString *_MACAddress;
    double _wakeOnLANTimeout;
    id <DIALWakeOnLANDeviceDelegate> _wakeOnLANDelegate;
    NSString *_UUID;
    NSString *_location;
    NSString *_version;
    NSString *_applicationUrl;
    NSString *_networkIdentifier;
    DIALResponseParser *_responseParser;
}

+ (id)UUIDMatcher;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) DIALResponseParser *responseParser; // @synthesize responseParser=_responseParser;
@property(copy, nonatomic) NSString *networkIdentifier; // @synthesize networkIdentifier=_networkIdentifier;
@property(readonly, nonatomic, getter=isAvailableViaWakeOnLAN) _Bool availableViaWakeOnLAN; // @synthesize availableViaWakeOnLAN=_availableViaWakeOnLAN;
@property(readonly, nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(readonly, nonatomic) NSString *applicationUrl; // @synthesize applicationUrl=_applicationUrl;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) __weak id <DIALWakeOnLANDeviceDelegate> wakeOnLANDelegate; // @synthesize wakeOnLANDelegate=_wakeOnLANDelegate;
@property(readonly, nonatomic) double wakeOnLANTimeout; // @synthesize wakeOnLANTimeout=_wakeOnLANTimeout;
@property(readonly, nonatomic) NSString *MACAddress; // @synthesize MACAddress=_MACAddress;
- (void)stopWakingUpDevice;
- (void)wakeUpDeviceWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long wakeOnLANStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setFound:(_Bool)arg1;
- (_Bool)isFound;
- (void)setAvailableViaWakeOnLAN:(_Bool)arg1;
- (void)setAvailable:(_Bool)arg1;
- (void)setLocation:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *UDN;
@property(readonly, nonatomic) NSString *manufacturer;
@property(readonly, nonatomic) NSString *modelName;
@property(readonly, nonatomic) NSString *friendlyName;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)updateFromDevice:(id)arg1;
- (void)validateInstanceURLInDIALResponse:(id)arg1 withAppName:(id)arg2;
- (_Bool)parseWakeupLine:(id)arg1;
- (_Bool)parseVersionLine:(id)arg1;
- (_Bool)parseLocationLine:(id)arg1;
- (_Bool)parseUUIDLine:(id)arg1;
- (void)stopApplicationWithInstanceURL:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)launchApplication:(id)arg1 withPayload:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)fetchStatusForApplication:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)updateFromDeviceDescriptionXML:(id)arg1 withHeaders:(id)arg2;
- (id)initWithResponse:(id)arg1 clientIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CRSDKSettings, NSString, NSURL;

@interface CRAppLocator : NSObject
{
    NSString *_appId;
    NSString *_appVersion;
    NSString *_deviceId;
    NSURL *_appConfigURL;
    NSURL *_apiURL;
    NSURL *_apmURL;
    NSURL *_appLoadURL;
    NSURL *_txnURL;
    NSURL *_regionLookupURL;
    NSString *_protocol;
    CRSDKSettings *_sdkSettings;
    NSString *_dhub_configUrlString_override;
    NSString *_dhub_eventProxyUrlString_override;
}

+ (_Bool)appIdIsValid:(id)arg1;
@property(retain, nonatomic) NSString *dhub_eventProxyUrlString_override; // @synthesize dhub_eventProxyUrlString_override=_dhub_eventProxyUrlString_override;
@property(retain, nonatomic) NSString *dhub_configUrlString_override; // @synthesize dhub_configUrlString_override=_dhub_configUrlString_override;
@property(readonly, nonatomic) CRSDKSettings *sdkSettings; // @synthesize sdkSettings=_sdkSettings;
@property(copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(readonly, nonatomic) NSURL *regionLookupURL; // @synthesize regionLookupURL=_regionLookupURL;
@property(readonly, nonatomic) NSURL *txnURL; // @synthesize txnURL=_txnURL;
@property(readonly, nonatomic) NSURL *appLoadURL; // @synthesize appLoadURL=_appLoadURL;
@property(readonly, nonatomic) NSURL *apmURL; // @synthesize apmURL=_apmURL;
@property(readonly, nonatomic) NSURL *apiURL; // @synthesize apiURL=_apiURL;
@property(readonly, nonatomic) NSURL *appConfigURL; // @synthesize appConfigURL=_appConfigURL;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (id)eventProxyURL;
- (id)dhubConfigURL;
- (id)getVersionedEndPoint:(id)arg1;
- (id)getDomainFromAppId:(id)arg1;
- (id)initWithAppId:(id)arg1 sdkSettings:(id)arg2;

@end

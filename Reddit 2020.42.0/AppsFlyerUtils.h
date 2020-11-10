//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AppsFlyerUtils : NSObject
{
}

+ (void)recursivelyRemoveNulls:(id)arg1;
+ (void)recursivelyRemoveNullsFromArray:(id)arg1;
+ (id)unite:(id)arg1;
+ (_Bool)isVPNConnected;
+ (id)getOneLinkPath:(id)arg1 oneLinkCustomDomains:(id)arg2:(id *)arg3;
+ (_Bool)isValidDeeplink:(id)arg1;
+ (_Bool)isJailbrokenWithSkipAdvancedJailbreakValidation:(_Bool)arg1;
+ (id)develomentPlatformName;
+ (id)md5:(id)arg1;
+ (id)sha256:(id)arg1;
+ (id)sha1:(id)arg1;
+ (id)URLQueryParameters:(id)arg1;
+ (void)logRequestContent:(long long)arg1 url:(id)arg2 body:(id)arg3;
+ (id)getJsonDataFromDictionary:(id)arg1;
+ (id)deviceOrientation;
+ (id)getStoreReceipt;
+ (unsigned int)getUTF8Length:(id)arg1;
+ (id)toHexString:(char *)arg1 length:(unsigned int)arg2;
+ (id)readCurrentRadioAccessTechnology;
+ (id)readMobileNetworkCode;
+ (id)readMobileCountryCode;
+ (void)initialize;
+ (void)fetchFacebookDeferredAppLink:(CDUnknownBlockType)arg1;
+ (id)persistenceFilePath:(id)arg1;
+ (id)retrievePersistedAnonymousID;
+ (id)freeDiskspace;

@end


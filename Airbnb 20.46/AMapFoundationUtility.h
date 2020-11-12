//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMapFoundationUtility : NSObject
{
}

+ (_Bool)writeFileWithData:(id)arg1 fileName:(id)arg2;
+ (id)sortedStringWithParams:(id)arg1;
+ (id)createSCodeStringWithParams:(id)arg1 timestamp:(id)arg2 bundleID:(id)arg3;
+ (id)createTimestampString;
+ (id)encryptForXinfo:(id)arg1;
+ (_Bool)boolValueWithAuthResponse:(id)arg1 forKey:(id)arg2;
+ (_Bool)boolValueWithAuthResponse:(id)arg1;
+ (_Bool)appendData:(id)arg1 toMutableData:(id)arg2 shouldAddZeroLength:(_Bool)arg3;
+ (id)encryptForXinfo30:(id)arg1;
+ (id)encryptForXinfo21:(id)arg1;
+ (id)encryptForXinfo2:(id)arg1;
+ (id)assembledURLStringWithAddress:(id)arg1 enableHTTPS:(_Bool)arg2 keepHTTPS:(_Bool)arg3;
+ (id)assembledURLStringWithAddress:(id)arg1 enableHTTPS:(_Bool)arg2;
+ (id)ipV6URLStringWithAddress:(id)arg1;
+ (id)decryptAESForSourceData:(id)arg1;
+ (id)encryptForSourceData:(id)arg1;
+ (id)urlDecodeForKey:(id)arg1;
+ (id)urlEncodeForKey:(id)arg1;
+ (id)headersForKeyVerificationWithParams:(id)arg1 bundleID:(id)arg2;
+ (id)headersForKeyVerificationWithParams:(id)arg1;
+ (id)restSignatureWithParams:(id)arg1 bundleID:(id)arg2;
+ (id)restSignatureWithParams:(id)arg1;
+ (id)encodeURLParamDictionary:(id)arg1;
+ (id)encodeURLParamString:(id)arg1;
+ (id)filteredParamString:(id)arg1;
+ (id)joinedStringWithDictionary:(id)arg1 separator:(id)arg2;

@end


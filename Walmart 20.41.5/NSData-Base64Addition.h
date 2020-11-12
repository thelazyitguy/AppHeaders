//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (Base64Addition)
+ (id)dataWithBase64UrlEncodedString:(id)arg1;
+ (id)dataWithBase64String:(id)arg1;
+ (id)gul_dataByGzippingData:(id)arg1 error:(id *)arg2;
+ (id)gul_dataByInflatingGzippedData:(id)arg1 error:(id *)arg2;
- (id)base64UrlEncodedString;
- (id)base64String;
@property(readonly, copy, nonatomic) NSString *stringBySHA1ThenBase64Encoding;
- (id)_hexString;
- (id)_base64RFC4648;
- (long long)apm_64LeastSignificantBits;
- (long long)apm_64LSBMD5;
- (id)apm_MD5Data;
@end

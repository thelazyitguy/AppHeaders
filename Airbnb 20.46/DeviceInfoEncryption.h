//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CardinalMobile/CCAEncryptionUtil.h>

__attribute__((visibility("hidden")))
@interface DeviceInfoEncryption : CCAEncryptionUtil
{
}

+ (id)generateRandom:(unsigned long long)arg1;
+ (id)getBase64EncodedFromData:(id)arg1;
+ (id)getHmacInputFrom:(id)arg1 iv:(id)arg2 cipherText:(id)arg3;
+ (id)hmacToTag:(id)arg1;
+ (id)hmac:(id)arg1 withKey:(id)arg2 withIV:(id)arg3 withA:(id)arg4;
+ (id)getEphemeralPublicKeyString:(id)arg1;
+ (id)createEcJWE:(id)arg1 withDsId:(id)arg2 withPublicKey:(id)arg3;
+ (id)createRsaJWE:(id)arg1 withPublicKey:(id)arg2;

@end

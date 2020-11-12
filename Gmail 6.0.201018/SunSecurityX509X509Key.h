//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaSecurityPublicKey-Protocol.h"

@class IOSByteArray, NSString, SunSecurityUtilBitArray, SunSecurityX509AlgorithmId;

@interface SunSecurityX509X509Key : NSObject <JavaSecurityPublicKey>
{
    SunSecurityX509AlgorithmId *algid_;
    IOSByteArray *key_;
    IOSByteArray *encodedKey_;
    int unusedBits_;
    SunSecurityUtilBitArray *bitStringKey_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)encodeWithSunSecurityUtilDerOutputStream:(id)arg1 withSunSecurityX509AlgorithmId:(id)arg2 withSunSecurityUtilBitArray:(id)arg3;
+ (id)buildX509KeyWithSunSecurityX509AlgorithmId:(id)arg1 withSunSecurityUtilBitArray:(id)arg2;
+ (id)parseWithSunSecurityUtilDerValue:(id)arg1;
- (void)dealloc;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (void)decodeWithByteArray:(id)arg1;
- (void)decodeWithJavaIoInputStream:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)encode;
- (id)getFormat;
- (id)getEncodedInternal;
- (id)getEncoded;
- (void)encodeWithSunSecurityUtilDerOutputStream:(id)arg1;
- (id)getAlgorithmId;
- (id)getAlgorithm;
- (void)parseKeyBits;
- (id)getKey;
- (void)setKeyWithSunSecurityUtilBitArray:(id)arg1;
- (id)initWithSunSecurityX509AlgorithmId:(id)arg1 withSunSecurityUtilBitArray:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

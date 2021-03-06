//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaSecurityProvider, JavaSecuritySecureRandom, NSString;
@protocol JavaSecuritySpecAlgorithmParameterSpec, JavaUtilIterator;

@interface JavaxCryptoKeyGenerator : NSObject
{
    JavaSecurityProvider *provider_;
    unsigned long long spi_;
    NSString *algorithm_;
    id lock_;
    id <JavaUtilIterator> serviceIterator_;
    int initType_;
    int initKeySize_;
    id <JavaSecuritySpecAlgorithmParameterSpec> initParams_;
    JavaSecuritySecureRandom *initRandom_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getInstanceWithNSString:(id)arg1 withJavaSecurityProvider:(id)arg2;
+ (id)getInstanceWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)getInstanceWithNSString:(id)arg1;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (id)generateKey;
- (void)init__WithInt:(int)arg1 withJavaSecuritySecureRandom:(id)arg2;
- (void)init__WithInt:(int)arg1;
- (void)init__WithJavaSecuritySpecAlgorithmParameterSpec:(id)arg1 withJavaSecuritySecureRandom:(id)arg2;
- (void)init__WithJavaSecuritySpecAlgorithmParameterSpec:(id)arg1;
- (void)init__WithJavaSecuritySecureRandom:(id)arg1;
- (void)disableFailover;
- (id)nextSpiWithJavaxCryptoKeyGeneratorSpi:(id)arg1 withBoolean:(_Bool)arg2;
- (id)getProvider;
- (id)getAlgorithm;
- (id)initWithNSString:(id)arg1;
- (id)initWithJavaxCryptoKeyGeneratorSpi:(id)arg1 withJavaSecurityProvider:(id)arg2 withNSString:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaSecurityProvider, JavaxCryptoExemptionMechanismSpi, NSString;
@protocol JavaSecurityKey;

@interface JavaxCryptoExemptionMechanism : NSObject
{
    JavaSecurityProvider *provider_;
    JavaxCryptoExemptionMechanismSpi *exmechSpi_;
    NSString *mechanism_;
    _Bool done_;
    _Bool initialized_;
    id <JavaSecurityKey> keyStored_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getInstanceWithNSString:(id)arg1 withJavaSecurityProvider:(id)arg2;
+ (id)getInstanceWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)getInstanceWithNSString:(id)arg1;
- (void)dealloc;
- (int)genExemptionBlobWithByteArray:(id)arg1 withInt:(int)arg2;
- (int)genExemptionBlobWithByteArray:(id)arg1;
- (id)genExemptionBlob;
- (void)init__WithJavaSecurityKey:(id)arg1 withJavaSecurityAlgorithmParameters:(id)arg2;
- (void)init__WithJavaSecurityKey:(id)arg1 withJavaSecuritySpecAlgorithmParameterSpec:(id)arg2;
- (void)init__WithJavaSecurityKey:(id)arg1;
- (int)getOutputSizeWithInt:(int)arg1;
- (_Bool)isCryptoAllowedWithJavaSecurityKey:(id)arg1;
- (id)getProvider;
- (id)getName;
- (id)initWithJavaxCryptoExemptionMechanismSpi:(id)arg1 withJavaSecurityProvider:(id)arg2 withNSString:(id)arg3;

@end

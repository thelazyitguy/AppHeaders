//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSByteArray, JavaUtilHashtable;

@interface SunSecurityPkcsPKCS9Attributes : NSObject
{
    JavaUtilHashtable *attributes_;
    JavaUtilHashtable *permittedAttributes_;
    IOSByteArray *derEncoding_;
    _Bool ignoreUnsupportedAttributes_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)castToDerEncoderWithNSObjectArray:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)getAttributeValueWithNSString:(id)arg1;
- (id)getAttributeValueWithSunSecurityUtilObjectIdentifier:(id)arg1;
- (id)getAttributes;
- (id)getAttributeWithNSString:(id)arg1;
- (id)getAttributeWithSunSecurityUtilObjectIdentifier:(id)arg1;
- (id)getDerEncoding;
- (id)generateDerEncoding;
- (void)encodeWithByte:(BOOL)arg1 withJavaIoOutputStream:(id)arg2;
- (id)decodeWithSunSecurityUtilDerInputStream:(id)arg1;
- (id)initWithSunSecurityPkcsPKCS9AttributeArray:(id)arg1;
- (id)initWithSunSecurityUtilDerInputStream:(id)arg1 withBoolean:(_Bool)arg2;
- (id)initWithSunSecurityUtilDerInputStream:(id)arg1;
- (id)initWithSunSecurityUtilObjectIdentifierArray:(id)arg1 withSunSecurityUtilDerInputStream:(id)arg2;

@end

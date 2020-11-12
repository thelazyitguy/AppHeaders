//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaSecurityCertX509CRLEntry.h"

#import "JavaLangComparable-Protocol.h"

@class IOSByteArray, JavaUtilDate, JavaxSecurityAuthX500X500Principal, NSString, SunSecurityX509CRLExtensions, SunSecurityX509SerialNumber;

@interface SunSecurityX509X509CRLEntryImpl : JavaSecurityCertX509CRLEntry <JavaLangComparable>
{
    SunSecurityX509SerialNumber *serialNumber_;
    JavaUtilDate *revocationDate_;
    SunSecurityX509CRLExtensions *extensions_;
    IOSByteArray *revokedCert_;
    JavaxSecurityAuthX500X500Principal *certIssuer_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)toImplWithJavaSecurityCertX509CRLEntry:(id)arg1;
+ (id)getRevocationReasonWithJavaSecurityCertX509CRLEntry:(id)arg1;
- (void)dealloc;
- (int)compareToWithId:(id)arg1;
- (id)getExtensions;
- (id)getCertificateIssuerExtension;
- (void)parseWithSunSecurityUtilDerValue:(id)arg1;
- (id)getExtensionWithSunSecurityUtilObjectIdentifier:(id)arg1;
- (id)getExtensionValueWithNSString:(id)arg1;
- (id)getNonCriticalExtensionOIDs;
- (id)getCriticalExtensionOIDs;
- (_Bool)hasUnsupportedCriticalExtension;
@property(readonly, copy) NSString *description;
- (id)getReasonCode;
- (id)getRevocationReason;
- (id)getRevocationDate;
- (id)getSerialNumber;
- (void)setCertificateIssuerWithJavaxSecurityAuthX500X500Principal:(id)arg1 withJavaxSecurityAuthX500X500Principal:(id)arg2;
- (id)getCertificateIssuer;
- (id)getEncoded0;
- (id)getEncoded;
- (void)encodeWithSunSecurityUtilDerOutputStream:(id)arg1;
- (_Bool)hasExtensions;
- (id)initWithSunSecurityUtilDerValue:(id)arg1;
- (id)initWithByteArray:(id)arg1;
- (id)initWithJavaMathBigInteger:(id)arg1 withJavaUtilDate:(id)arg2 withSunSecurityX509CRLExtensions:(id)arg3;
- (id)initWithJavaMathBigInteger:(id)arg1 withJavaUtilDate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

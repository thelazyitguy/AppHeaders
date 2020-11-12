//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaSecurityKeyStore_Entry-Protocol.h"

@class IOSObjectArray, NSString;
@protocol JavaSecurityPrivateKey, JavaUtilSet;

@interface JavaSecurityKeyStore_PrivateKeyEntry : NSObject <JavaSecurityKeyStore_Entry>
{
    id <JavaSecurityPrivateKey> privKey_;
    IOSObjectArray *chain_;
    id <JavaUtilSet> attributes_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)getAttributes;
- (id)getCertificate;
- (id)getCertificateChain;
- (id)getPrivateKey;
- (id)initWithJavaSecurityPrivateKey:(id)arg1 withJavaSecurityCertCertificateArray:(id)arg2 withJavaUtilSet:(id)arg3;
- (id)initWithJavaSecurityPrivateKey:(id)arg1 withJavaSecurityCertCertificateArray:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

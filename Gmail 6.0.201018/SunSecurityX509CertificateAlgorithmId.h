//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SunSecurityX509CertAttrSet-Protocol.h"

@class NSString, SunSecurityX509AlgorithmId;

@interface SunSecurityX509CertificateAlgorithmId : NSObject <SunSecurityX509CertAttrSet>
{
    SunSecurityX509AlgorithmId *algId_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getName;
- (id)getElements;
- (void)delete__WithNSString:(id)arg1;
- (id)getWithNSString:(id)arg1;
- (void)setWithNSString:(id)arg1 withId:(id)arg2;
- (void)encodeWithJavaIoOutputStream:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithJavaIoInputStream:(id)arg1;
- (id)initWithSunSecurityUtilDerInputStream:(id)arg1;
- (id)initWithSunSecurityX509AlgorithmId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

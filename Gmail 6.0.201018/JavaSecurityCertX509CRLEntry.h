//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaSecurityCertX509Extension-Protocol.h"

@class NSString;

@interface JavaSecurityCertX509CRLEntry : NSObject <JavaSecurityCertX509Extension>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)getRevocationReason;
@property(readonly, copy) NSString *description;
- (_Bool)hasExtensions;
- (id)getRevocationDate;
- (id)getCertificateIssuer;
- (id)getSerialNumber;
- (id)getEncoded;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

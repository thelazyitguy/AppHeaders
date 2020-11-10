//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GCKSSecurityTrust : NSObject
{
    struct __SecTrust *_trustRef;
}

- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)applyExceptions;
- (int)setVerifyDate:(id)arg1;
- (int)setAnchorCertificates:(id)arg1;
- (id)lastCertificate;
- (id)firstCertificate;
- (id)certificateAtIndex:(unsigned long long)arg1;
- (long long)certificateCount;
- (id)copyPublicKey;
- (int)evaluateWithResult:(unsigned int *)arg1;
- (struct __SecTrust *)getRef;
- (void)dealloc;
- (id)initWithCertificates:(id)arg1 policy:(id)arg2;
- (id)initWithSecTrustRef:(struct __SecTrust *)arg1;

@end

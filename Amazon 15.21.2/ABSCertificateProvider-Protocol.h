//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ABSStoreCertificateSettings;

@protocol ABSCertificateProvider <NSObject>
- (void)resetCache;
- (_Bool)hasCertificate:(ABSStoreCertificateSettings *)arg1;
- (void)getCertificateWithSettings:(ABSStoreCertificateSettings *)arg1 resolved:(void (^)(struct __SecTrust *))arg2 resolveFailed:(void (^)(NSError *))arg3;
@end


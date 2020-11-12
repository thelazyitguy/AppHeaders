//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SunSecurityX509GeneralNameInterface-Protocol.h"

@class JavaNetURI, NSString, SunSecurityX509DNSName, SunSecurityX509IPAddressName;

@interface SunSecurityX509URIName : NSObject <SunSecurityX509GeneralNameInterface>
{
    JavaNetURI *uri_;
    NSString *host_;
    SunSecurityX509DNSName *hostDNS_;
    SunSecurityX509IPAddressName *hostIP_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)nameConstraintWithSunSecurityUtilDerValue:(id)arg1;
- (void)dealloc;
- (int)subtreeDepth;
- (int)constrainsWithSunSecurityX509GeneralNameInterface:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)getHostObject;
- (id)getHost;
- (id)getScheme;
- (id)getName;
- (id)getURI;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithSunSecurityUtilDerOutputStream:(id)arg1;
- (int)getType;
- (id)initWithJavaNetURI:(id)arg1 withNSString:(id)arg2 withSunSecurityX509DNSName:(id)arg3;
- (id)initWithNSString:(id)arg1;
- (id)initWithSunSecurityUtilDerValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

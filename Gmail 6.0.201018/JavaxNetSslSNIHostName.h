//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaxNetSslSNIServerName.h"

@class NSString;

@interface JavaxNetSslSNIHostName : JavaxNetSslSNIServerName
{
    NSString *hostname_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createSNIMatcherWithNSString:(id)arg1;
- (void)dealloc;
- (void)checkHostName;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)getAsciiName;
- (id)initWithByteArray:(id)arg1;
- (id)initWithNSString:(id)arg1;

@end

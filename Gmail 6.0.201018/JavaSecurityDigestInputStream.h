//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaIoFilterInputStream.h"

@class JavaSecurityMessageDigest;

@interface JavaSecurityDigestInputStream : JavaIoFilterInputStream
{
    JavaSecurityMessageDigest *digest_;
    _Bool on_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)description;
- (void)onWithBoolean:(_Bool)arg1;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)read;
- (void)setMessageDigestWithJavaSecurityMessageDigest:(id)arg1;
- (id)getMessageDigest;
- (id)initWithJavaIoInputStream:(id)arg1 withJavaSecurityMessageDigest:(id)arg2;

@end

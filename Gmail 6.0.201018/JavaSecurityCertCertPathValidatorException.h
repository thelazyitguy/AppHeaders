//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaSecurityGeneralSecurityException.h"

@class JavaSecurityCertCertPath;
@protocol JavaSecurityCertCertPathValidatorException_Reason;

@interface JavaSecurityCertCertPathValidatorException : JavaSecurityGeneralSecurityException
{
    int index_;
    JavaSecurityCertCertPath *certPath_;
    id <JavaSecurityCertCertPathValidatorException_Reason> reason_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (id)getReason;
- (int)getIndex;
- (id)getCertPath;
- (id)initWithNSString:(id)arg1 withJavaLangThrowable:(id)arg2 withJavaSecurityCertCertPath:(id)arg3 withInt:(int)arg4 withJavaSecurityCertCertPathValidatorException_Reason:(id)arg5;
- (id)initWithNSString:(id)arg1 withJavaLangThrowable:(id)arg2 withJavaSecurityCertCertPath:(id)arg3 withInt:(int)arg4;
- (id)initWithNSString:(id)arg1 withJavaLangThrowable:(id)arg2;
- (id)initWithJavaLangThrowable:(id)arg1;
- (id)initWithNSString:(id)arg1;
- (id)init;

@end

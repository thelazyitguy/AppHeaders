//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaLangException.h"

@class NSString;

@interface AndroidSystemErrnoException : JavaLangException
{
    int errno__;
    NSString *functionName_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)rethrowAsSocketException;
- (id)rethrowAsIOException;
- (id)getMessage;
- (id)initWithNSString:(id)arg1 withInt:(int)arg2 withJavaLangThrowable:(id)arg3;
- (id)initWithNSString:(id)arg1 withInt:(int)arg2;

@end

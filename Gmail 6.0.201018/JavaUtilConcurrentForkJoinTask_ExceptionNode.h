//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaLangRefWeakReference.h"

@class JavaLangThrowable;

@interface JavaUtilConcurrentForkJoinTask_ExceptionNode : JavaLangRefWeakReference
{
    JavaLangThrowable *ex_;
    JavaUtilConcurrentForkJoinTask_ExceptionNode *next_;
    long long thrower_;
    int hashCode_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJavaUtilConcurrentForkJoinTask:(id)arg1 withJavaLangThrowable:(id)arg2 withJavaUtilConcurrentForkJoinTask_ExceptionNode:(id)arg3 withJavaLangRefReferenceQueue:(id)arg4;

@end

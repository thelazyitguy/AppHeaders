//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilConcurrentConcurrentHashMap_BulkTask.h"

@protocol JavaUtilFunctionIntBinaryOperator, JavaUtilFunctionToIntFunction;

@interface JavaUtilConcurrentConcurrentHashMap_MapReduceKeysToIntTask : JavaUtilConcurrentConcurrentHashMap_BulkTask
{
    id <JavaUtilFunctionToIntFunction> transformer_;
    id <JavaUtilFunctionIntBinaryOperator> reducer_;
    int basis_;
    int result_;
    JavaUtilConcurrentConcurrentHashMap_MapReduceKeysToIntTask *rights_;
    JavaUtilConcurrentConcurrentHashMap_MapReduceKeysToIntTask *nextRight_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)compute;
- (id)getRawResult;
- (id)initWithJavaUtilConcurrentConcurrentHashMap_BulkTask:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg5 withJavaUtilConcurrentConcurrentHashMap_MapReduceKeysToIntTask:(id)arg6 withJavaUtilFunctionToIntFunction:(id)arg7 withInt:(int)arg8 withJavaUtilFunctionIntBinaryOperator:(id)arg9;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilConcurrentCountedCompleter.h"

@class IOSDoubleArray;
@protocol JavaUtilFunctionDoubleBinaryOperator;

@interface JavaUtilArrayPrefixHelpers_DoubleCumulateTask : JavaUtilConcurrentCountedCompleter
{
    IOSDoubleArray *array_;
    id <JavaUtilFunctionDoubleBinaryOperator> function_;
    JavaUtilArrayPrefixHelpers_DoubleCumulateTask *left_;
    JavaUtilArrayPrefixHelpers_DoubleCumulateTask *right_;
    double in_;
    double out_;
    int lo_;
    int hi_;
    int origin_;
    int fence_;
    int threshold_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)compute;
- (id)initWithJavaUtilArrayPrefixHelpers_DoubleCumulateTask:(id)arg1 withJavaUtilFunctionDoubleBinaryOperator:(id)arg2 withDoubleArray:(id)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7 withInt:(int)arg8;
- (id)initWithJavaUtilArrayPrefixHelpers_DoubleCumulateTask:(id)arg1 withJavaUtilFunctionDoubleBinaryOperator:(id)arg2 withDoubleArray:(id)arg3 withInt:(int)arg4 withInt:(int)arg5;

@end

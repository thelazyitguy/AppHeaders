//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilStreamReduceOps_AccumulatingSink-Protocol.h"

@class NSString;
@protocol JavaUtilFunctionBinaryOperator;

@interface JavaUtilStreamReduceOps_2ReducingSink : NSObject <JavaUtilStreamReduceOps_AccumulatingSink>
{
    id <JavaUtilFunctionBinaryOperator> val$operator_;
    _Bool empty_;
    id state_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)andThenWithJavaUtilFunctionConsumer:(id)arg1;
- (void)acceptWithDouble:(double)arg1;
- (void)acceptWithLong:(long long)arg1;
- (void)acceptWithInt:(int)arg1;
- (_Bool)cancellationRequested;
- (void)end;
- (void)combineWithJavaUtilStreamReduceOps_AccumulatingSink:(id)arg1;
- (id)get;
- (void)acceptWithId:(id)arg1;
- (void)beginWithLong:(long long)arg1;
- (id)initWithJavaUtilFunctionBinaryOperator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

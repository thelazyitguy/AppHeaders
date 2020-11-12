//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilStreamReduceOps_Box.h"

#import "JavaUtilStreamReduceOps_AccumulatingSink-Protocol.h"
#import "JavaUtilStreamSink_OfInt-Protocol.h"

@class NSString;
@protocol JavaUtilFunctionBinaryOperator, JavaUtilFunctionObjIntConsumer, JavaUtilFunctionSupplier;

@interface JavaUtilStreamReduceOps_7ReducingSink : JavaUtilStreamReduceOps_Box <JavaUtilStreamReduceOps_AccumulatingSink, JavaUtilStreamSink_OfInt>
{
    id <JavaUtilFunctionSupplier> val$supplier_;
    id <JavaUtilFunctionObjIntConsumer> val$accumulator_;
    id <JavaUtilFunctionBinaryOperator> val$combiner_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)andThenWithJavaUtilFunctionIntConsumer:(id)arg1;
- (id)andThenWithJavaUtilFunctionConsumer:(id)arg1;
- (void)acceptWithId:(id)arg1;
- (void)acceptWithDouble:(double)arg1;
- (void)acceptWithLong:(long long)arg1;
- (_Bool)cancellationRequested;
- (void)end;
- (void)combineWithJavaUtilStreamReduceOps_AccumulatingSink:(id)arg1;
- (void)acceptWithInt:(int)arg1;
- (void)beginWithLong:(long long)arg1;
- (id)initWithJavaUtilFunctionSupplier:(id)arg1 withJavaUtilFunctionObjIntConsumer:(id)arg2 withJavaUtilFunctionBinaryOperator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

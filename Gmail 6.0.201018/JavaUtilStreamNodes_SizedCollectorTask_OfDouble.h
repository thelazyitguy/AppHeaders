//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilStreamNodes_SizedCollectorTask.h"

#import "JavaUtilStreamSink_OfDouble-Protocol.h"

@class IOSDoubleArray, NSString;

@interface JavaUtilStreamNodes_SizedCollectorTask_OfDouble : JavaUtilStreamNodes_SizedCollectorTask <JavaUtilStreamSink_OfDouble>
{
    IOSDoubleArray *array_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)andThenWithJavaUtilFunctionDoubleConsumer:(id)arg1;
- (void)acceptWithId:(id)arg1;
- (void)acceptWithDouble:(double)arg1;
- (id)makeChildWithJavaUtilSpliterator:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (id)initWithJavaUtilStreamNodes_SizedCollectorTask_OfDouble:(id)arg1 withJavaUtilSpliterator:(id)arg2 withLong:(long long)arg3 withLong:(long long)arg4;
- (id)initWithJavaUtilSpliterator:(id)arg1 withJavaUtilStreamPipelineHelper:(id)arg2 withDoubleArray:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

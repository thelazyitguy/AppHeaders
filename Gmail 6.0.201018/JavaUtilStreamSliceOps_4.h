//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilStreamDoublePipeline_StatefulOp.h"

@interface JavaUtilStreamSliceOps_4 : JavaUtilStreamDoublePipeline_StatefulOp
{
    long long val$skip_;
    long long val$limit_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)opWrapSinkWithInt:(int)arg1 withJavaUtilStreamSink:(id)arg2;
- (id)opEvaluateParallelWithJavaUtilStreamPipelineHelper:(id)arg1 withJavaUtilSpliterator:(id)arg2 withJavaUtilFunctionIntFunction:(id)arg3;
- (id)opEvaluateParallelLazyWithJavaUtilStreamPipelineHelper:(id)arg1 withJavaUtilSpliterator:(id)arg2;
- (id)unorderedSkipLimitSpliteratorWithJavaUtilSpliterator_OfDouble:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withLong:(long long)arg4;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2 withJavaUtilStreamAbstractPipeline:(id)arg3 withJavaUtilStreamStreamShape:(id)arg4 withInt:(int)arg5;

@end


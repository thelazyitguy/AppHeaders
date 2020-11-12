//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilStreamPipelineHelper.h"

#import "JavaUtilStreamBaseStream-Protocol.h"

@class NSString;
@protocol JavaLangRunnable, JavaUtilFunctionSupplier, JavaUtilSpliterator;

@interface JavaUtilStreamAbstractPipeline : JavaUtilStreamPipelineHelper <JavaUtilStreamBaseStream>
{
    int sourceOrOpFlags_;
    JavaUtilStreamAbstractPipeline *sourceStage_;
    JavaUtilStreamAbstractPipeline *previousStage_;
    JavaUtilStreamAbstractPipeline *nextStage_;
    int depth_;
    int combinedFlags_;
    id <JavaUtilSpliterator> sourceSpliterator_;
    id <JavaUtilFunctionSupplier> sourceSupplier_;
    _Bool linkedOrConsumed_;
    _Bool sourceAnyStateful_;
    id <JavaLangRunnable> sourceCloseAction_;
    _Bool parallel_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void).cxx_destruct;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (id)opEvaluateParallelLazyWithJavaUtilStreamPipelineHelper:(id)arg1 withJavaUtilSpliterator:(id)arg2;
- (id)opEvaluateParallelWithJavaUtilStreamPipelineHelper:(id)arg1 withJavaUtilSpliterator:(id)arg2 withJavaUtilFunctionIntFunction:(id)arg3;
- (id)opWrapSinkWithInt:(int)arg1 withJavaUtilStreamSink:(id)arg2;
- (_Bool)opIsStateful;
- (id)makeNodeBuilderWithLong:(long long)arg1 withJavaUtilFunctionIntFunction:(id)arg2;
- (void)forEachWithCancelWithJavaUtilSpliterator:(id)arg1 withJavaUtilStreamSink:(id)arg2;
- (id)lazySpliteratorWithJavaUtilFunctionSupplier:(id)arg1;
- (id)wrapWithJavaUtilStreamPipelineHelper:(id)arg1 withJavaUtilFunctionSupplier:(id)arg2 withBoolean:(_Bool)arg3;
- (id)evaluateToNodeWithJavaUtilStreamPipelineHelper:(id)arg1 withJavaUtilSpliterator:(id)arg2 withBoolean:(_Bool)arg3 withJavaUtilFunctionIntFunction:(id)arg4;
- (id)getOutputShape;
- (id)evaluateWithJavaUtilSpliterator:(id)arg1 withBoolean:(_Bool)arg2 withJavaUtilFunctionIntFunction:(id)arg3;
- (id)wrapSpliteratorWithJavaUtilSpliterator:(id)arg1;
- (id)wrapSinkWithJavaUtilStreamSink:(id)arg1;
- (_Bool)isOrdered;
- (int)getStreamAndOpFlags;
- (void)copyIntoWithCancelWithJavaUtilStreamSink:(id)arg1 withJavaUtilSpliterator:(id)arg2;
- (void)copyIntoWithJavaUtilStreamSink:(id)arg1 withJavaUtilSpliterator:(id)arg2;
- (id)wrapAndCopyIntoWithJavaUtilStreamSink:(id)arg1 withJavaUtilSpliterator:(id)arg2;
- (long long)exactOutputSizeIfKnownWithJavaUtilSpliterator:(id)arg1;
- (id)getSourceShape;
- (id)sourceSpliteratorWithInt:(int)arg1;
- (int)getStreamFlags;
- (_Bool)isParallel;
- (id)spliterator;
- (id)onCloseWithJavaLangRunnable:(id)arg1;
- (void)close;
- (id)parallel;
- (id)sequential;
- (id)sourceStageSpliterator;
- (id)evaluateToArrayNodeWithJavaUtilFunctionIntFunction:(id)arg1;
- (id)evaluateWithJavaUtilStreamTerminalOp:(id)arg1;
- (id)initWithJavaUtilStreamAbstractPipeline:(id)arg1 withInt:(int)arg2;
- (id)initWithJavaUtilSpliterator:(id)arg1 withInt:(int)arg2 withBoolean:(_Bool)arg3;
- (id)initWithJavaUtilFunctionSupplier:(id)arg1 withInt:(int)arg2 withBoolean:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

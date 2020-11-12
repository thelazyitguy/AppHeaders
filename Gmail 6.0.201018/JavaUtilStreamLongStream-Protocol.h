//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "JavaUtilStreamBaseStream-Protocol.h"

@class IOSLongArray, JavaUtilLongSummaryStatistics, JavaUtilOptionalDouble, JavaUtilOptionalLong;
@protocol JavaLangRunnable, JavaUtilFunctionBiConsumer, JavaUtilFunctionLongBinaryOperator, JavaUtilFunctionLongConsumer, JavaUtilFunctionLongFunction, JavaUtilFunctionLongPredicate, JavaUtilFunctionLongToDoubleFunction, JavaUtilFunctionLongToIntFunction, JavaUtilFunctionLongUnaryOperator, JavaUtilFunctionObjLongConsumer, JavaUtilFunctionSupplier, JavaUtilPrimitiveIterator_OfLong, JavaUtilSpliterator_OfLong, JavaUtilStreamDoubleStream, JavaUtilStreamIntStream, JavaUtilStreamLongStream, JavaUtilStreamStream;

@protocol JavaUtilStreamLongStream <JavaUtilStreamBaseStream, JavaObject>
- (id <JavaUtilStreamLongStream>)onCloseWithJavaLangRunnable:(id <JavaLangRunnable>)arg1;
- (id <JavaUtilStreamLongStream>)unordered;
- (id <JavaUtilSpliterator_OfLong>)spliterator;
- (id <JavaUtilPrimitiveIterator_OfLong>)iterator;
- (id <JavaUtilStreamLongStream>)parallel;
- (id <JavaUtilStreamLongStream>)sequential;
- (id <JavaUtilStreamStream>)boxed;
- (id <JavaUtilStreamDoubleStream>)asDoubleStream;
- (JavaUtilOptionalLong *)findAny;
- (JavaUtilOptionalLong *)findFirst;
- (_Bool)noneMatchWithJavaUtilFunctionLongPredicate:(id <JavaUtilFunctionLongPredicate>)arg1;
- (_Bool)allMatchWithJavaUtilFunctionLongPredicate:(id <JavaUtilFunctionLongPredicate>)arg1;
- (_Bool)anyMatchWithJavaUtilFunctionLongPredicate:(id <JavaUtilFunctionLongPredicate>)arg1;
- (JavaUtilLongSummaryStatistics *)summaryStatistics;
- (JavaUtilOptionalDouble *)average;
- (long long)count;
- (JavaUtilOptionalLong *)max;
- (JavaUtilOptionalLong *)min;
- (long long)sum;
- (id)collectWithJavaUtilFunctionSupplier:(id <JavaUtilFunctionSupplier>)arg1 withJavaUtilFunctionObjLongConsumer:(id <JavaUtilFunctionObjLongConsumer>)arg2 withJavaUtilFunctionBiConsumer:(id <JavaUtilFunctionBiConsumer>)arg3;
- (JavaUtilOptionalLong *)reduceWithJavaUtilFunctionLongBinaryOperator:(id <JavaUtilFunctionLongBinaryOperator>)arg1;
- (long long)reduceWithLong:(long long)arg1 withJavaUtilFunctionLongBinaryOperator:(id <JavaUtilFunctionLongBinaryOperator>)arg2;
- (IOSLongArray *)toArray;
- (void)forEachOrderedWithJavaUtilFunctionLongConsumer:(id <JavaUtilFunctionLongConsumer>)arg1;
- (void)forEachWithJavaUtilFunctionLongConsumer:(id <JavaUtilFunctionLongConsumer>)arg1;
- (id <JavaUtilStreamLongStream>)skipWithLong:(long long)arg1;
- (id <JavaUtilStreamLongStream>)limitWithLong:(long long)arg1;
- (id <JavaUtilStreamLongStream>)peekWithJavaUtilFunctionLongConsumer:(id <JavaUtilFunctionLongConsumer>)arg1;
- (id <JavaUtilStreamLongStream>)sorted;
- (id <JavaUtilStreamLongStream>)distinct;
- (id <JavaUtilStreamLongStream>)flatMapWithJavaUtilFunctionLongFunction:(id <JavaUtilFunctionLongFunction>)arg1;
- (id <JavaUtilStreamDoubleStream>)mapToDoubleWithJavaUtilFunctionLongToDoubleFunction:(id <JavaUtilFunctionLongToDoubleFunction>)arg1;
- (id <JavaUtilStreamIntStream>)mapToIntWithJavaUtilFunctionLongToIntFunction:(id <JavaUtilFunctionLongToIntFunction>)arg1;
- (id <JavaUtilStreamStream>)mapToObjWithJavaUtilFunctionLongFunction:(id <JavaUtilFunctionLongFunction>)arg1;
- (id <JavaUtilStreamLongStream>)mapWithJavaUtilFunctionLongUnaryOperator:(id <JavaUtilFunctionLongUnaryOperator>)arg1;
- (id <JavaUtilStreamLongStream>)filterWithJavaUtilFunctionLongPredicate:(id <JavaUtilFunctionLongPredicate>)arg1;
@end

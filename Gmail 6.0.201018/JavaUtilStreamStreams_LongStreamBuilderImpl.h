//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilStreamStreams_AbstractStreamBuilderImpl.h"

#import "JavaUtilSpliterator_OfLong-Protocol.h"
#import "JavaUtilStreamLongStream_Builder-Protocol.h"

@class JavaUtilStreamSpinedBuffer_OfLong, NSString;

@interface JavaUtilStreamStreams_LongStreamBuilderImpl : JavaUtilStreamStreams_AbstractStreamBuilderImpl <JavaUtilStreamLongStream_Builder, JavaUtilSpliterator_OfLong>
{
    long long first_;
    JavaUtilStreamSpinedBuffer_OfLong *buffer_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id)arg1;
- (_Bool)tryAdvanceWithJavaUtilFunctionConsumer:(id)arg1;
- (id)andThenWithJavaUtilFunctionLongConsumer:(id)arg1;
- (id)addWithLong:(long long)arg1;
- (void)forEachRemainingWithId:(id)arg1;
- (_Bool)tryAdvanceWithId:(id)arg1;
- (id)build;
- (void)acceptWithLong:(long long)arg1;
- (id)initWithLong:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilStreamStreams_AbstractStreamBuilderImpl.h"

#import "JavaUtilStreamStream_Builder-Protocol.h"

@class JavaUtilStreamSpinedBuffer, NSString;

@interface JavaUtilStreamStreams_StreamBuilderImpl : JavaUtilStreamStreams_AbstractStreamBuilderImpl <JavaUtilStreamStream_Builder>
{
    id first_;
    JavaUtilStreamSpinedBuffer *buffer_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)andThenWithJavaUtilFunctionConsumer:(id)arg1;
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id)arg1;
- (_Bool)tryAdvanceWithJavaUtilFunctionConsumer:(id)arg1;
- (id)build;
- (id)addWithId:(id)arg1;
- (void)acceptWithId:(id)arg1;
- (id)initWithId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

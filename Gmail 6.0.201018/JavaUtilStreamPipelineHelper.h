//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JavaUtilStreamPipelineHelper : NSObject
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)evaluateWithJavaUtilSpliterator:(id)arg1 withBoolean:(_Bool)arg2 withJavaUtilFunctionIntFunction:(id)arg3;
- (id)makeNodeBuilderWithLong:(long long)arg1 withJavaUtilFunctionIntFunction:(id)arg2;
- (id)wrapSpliteratorWithJavaUtilSpliterator:(id)arg1;
- (id)wrapSinkWithJavaUtilStreamSink:(id)arg1;
- (void)copyIntoWithCancelWithJavaUtilStreamSink:(id)arg1 withJavaUtilSpliterator:(id)arg2;
- (void)copyIntoWithJavaUtilStreamSink:(id)arg1 withJavaUtilSpliterator:(id)arg2;
- (id)wrapAndCopyIntoWithJavaUtilStreamSink:(id)arg1 withJavaUtilSpliterator:(id)arg2;
- (long long)exactOutputSizeIfKnownWithJavaUtilSpliterator:(id)arg1;
- (int)getStreamAndOpFlags;
- (id)getSourceShape;
- (id)init;

@end

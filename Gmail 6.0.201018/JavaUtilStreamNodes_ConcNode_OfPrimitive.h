//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilStreamNodes_AbstractConcNode.h"

#import "JavaUtilStreamNode_OfPrimitive-Protocol.h"

@class NSString;

@interface JavaUtilStreamNodes_ConcNode_OfPrimitive : JavaUtilStreamNodes_AbstractConcNode <JavaUtilStreamNode_OfPrimitive>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)asArrayWithJavaUtilFunctionIntFunction:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)asPrimitiveArray;
- (void)copyIntoWithId:(id)arg1 withInt:(int)arg2;
- (void)forEachWithId:(id)arg1;
- (id)initWithJavaUtilStreamNode_OfPrimitive:(id)arg1 withJavaUtilStreamNode_OfPrimitive:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

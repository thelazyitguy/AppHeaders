//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilConcurrentAtomicStriped64.h"

#import "JavaIoSerializable-Protocol.h"

@class NSString;
@protocol JavaUtilFunctionDoubleBinaryOperator;

@interface JavaUtilConcurrentAtomicDoubleAccumulator : JavaUtilConcurrentAtomicStriped64 <JavaIoSerializable>
{
    id <JavaUtilFunctionDoubleBinaryOperator> function_;
    long long identity_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (id)writeReplace;
- (float)floatValue;
- (int)intValue;
- (long long)longLongValue;
- (double)doubleValue;
@property(readonly, copy) NSString *description;
- (double)getThenReset;
- (void)reset;
- (double)get;
- (void)accumulateWithDouble:(double)arg1;
- (id)initWithJavaUtilFunctionDoubleBinaryOperator:(id)arg1 withDouble:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

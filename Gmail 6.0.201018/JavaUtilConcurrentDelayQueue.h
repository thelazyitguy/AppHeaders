//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilAbstractQueue.h"

#import "JavaUtilConcurrentBlockingQueue-Protocol.h"

@class JavaLangThread, JavaUtilConcurrentLocksReentrantLock, JavaUtilPriorityQueue, NSString;
@protocol JavaUtilConcurrentLocksCondition;

@interface JavaUtilConcurrentDelayQueue : JavaUtilAbstractQueue <JavaUtilConcurrentBlockingQueue>
{
    JavaUtilConcurrentLocksReentrantLock *lock_;
    JavaUtilPriorityQueue *q_;
    JavaLangThread *leader_;
    id <JavaUtilConcurrentLocksCondition> available_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)iterator;
- (void)removeEQWithId:(id)arg1;
- (_Bool)removeWithId:(id)arg1;
- (id)toArrayWithNSObjectArray:(id)arg1;
- (id)toArray;
- (int)remainingCapacity;
- (void)clear;
- (int)drainToWithJavaUtilCollection:(id)arg1 withInt:(int)arg2;
- (int)drainToWithJavaUtilCollection:(id)arg1;
- (id)peekExpired;
- (int)size;
- (id)peek;
- (id)pollWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnit:(id)arg2;
- (id)take;
- (id)poll;
- (_Bool)offerWithId:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnit:(id)arg3;
- (void)putWithId:(id)arg1;
- (_Bool)offerWithId:(id)arg1;
- (_Bool)addWithId:(id)arg1;
- (id)initWithJavaUtilCollection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

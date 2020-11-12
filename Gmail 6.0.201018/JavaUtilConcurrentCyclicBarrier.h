//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaUtilConcurrentCyclicBarrier_Generation, JavaUtilConcurrentLocksReentrantLock;
@protocol JavaLangRunnable, JavaUtilConcurrentLocksCondition;

@interface JavaUtilConcurrentCyclicBarrier : NSObject
{
    JavaUtilConcurrentLocksReentrantLock *lock_;
    id <JavaUtilConcurrentLocksCondition> trip_;
    int parties_;
    id <JavaLangRunnable> barrierCommand_;
    JavaUtilConcurrentCyclicBarrier_Generation *generation_;
    int count_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)getNumberWaiting;
- (void)reset;
- (_Bool)isBroken;
- (int)awaitWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnit:(id)arg2;
- (int)await;
- (int)getParties;
- (id)initWithInt:(int)arg1;
- (id)initWithInt:(int)arg1 withJavaLangRunnable:(id)arg2;
- (int)dowaitWithBoolean:(_Bool)arg1 withLong:(long long)arg2;
- (void)breakBarrier;
- (void)nextGeneration;

@end

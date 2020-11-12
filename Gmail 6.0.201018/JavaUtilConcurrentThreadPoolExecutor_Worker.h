//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilConcurrentLocksAbstractQueuedSynchronizer.h"

#import "JavaLangRunnable-Protocol.h"

@class JavaLangThread, JavaUtilConcurrentThreadPoolExecutor, NSString;
@protocol JavaLangRunnable;

@interface JavaUtilConcurrentThreadPoolExecutor_Worker : JavaUtilConcurrentLocksAbstractQueuedSynchronizer <JavaLangRunnable>
{
    JavaUtilConcurrentThreadPoolExecutor *this$0_;
    JavaLangThread *thread_;
    id <JavaLangRunnable> firstTask_;
    // Error parsing type: Aq, name: completedTasks_
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)interruptIfStarted;
- (_Bool)isLocked;
- (void)unlock;
- (_Bool)tryLock;
- (void)lock;
- (_Bool)tryReleaseWithInt:(int)arg1;
- (_Bool)tryAcquireWithInt:(int)arg1;
- (_Bool)isHeldExclusively;
- (void)run;
- (id)initWithJavaUtilConcurrentThreadPoolExecutor:(id)arg1 withJavaLangRunnable:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

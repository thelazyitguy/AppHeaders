//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilConcurrentLocksLock-Protocol.h"

@class JavaUtilConcurrentLocksReentrantReadWriteLock_Sync, NSString;

@interface JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock : NSObject <JavaUtilConcurrentLocksLock, JavaIoSerializable>
{
    JavaUtilConcurrentLocksReentrantReadWriteLock_Sync *sync_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)newCondition;
- (void)unlock;
- (_Bool)tryLockWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnit:(id)arg2;
- (_Bool)tryLock;
- (void)lockInterruptibly;
- (void)lock;
- (id)initWithJavaUtilConcurrentLocksReentrantReadWriteLock:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

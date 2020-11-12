//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaLangThread_UncaughtExceptionHandler-Protocol.h"

@class IOSObjectArray, NSString;

@interface JavaLangThreadGroup : NSObject <JavaLangThread_UncaughtExceptionHandler>
{
    NSString *name_;
    int maxPriority_;
    _Bool destroyed_;
    _Bool daemon_;
    _Bool vmAllowSuspension_;
    int nUnstartedThreads_;
    int nthreads_;
    IOSObjectArray *threads_;
    int ngroups_;
    IOSObjectArray *groups_;
    JavaLangThreadGroup *parent_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)checkParentAccessWithJavaLangThreadGroup:(id)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)uncaughtExceptionWithJavaLangThread:(id)arg1 withJavaLangThrowable:(id)arg2;
- (void)listWithJavaIoPrintStream:(id)arg1 withInt:(int)arg2;
- (void)list;
- (void)removeWithJavaLangThread:(id)arg1;
- (void)threadTerminatedWithJavaLangThread:(id)arg1;
- (void)threadStartFailedWithJavaLangThread:(id)arg1;
- (void)addWithJavaLangThread:(id)arg1;
- (void)addUnstarted;
- (void)removeWithJavaLangThreadGroup:(id)arg1;
- (void)addWithJavaLangThreadGroup:(id)arg1;
- (void)destroy;
- (void)resume;
- (_Bool)stopOrSuspendWithBoolean:(_Bool)arg1;
- (void)suspend;
- (void)interrupt;
- (void)stop;
- (int)enumerateWithJavaLangThreadGroupArray:(id)arg1 withInt:(int)arg2 withBoolean:(_Bool)arg3;
- (int)enumerateWithJavaLangThreadGroupArray:(id)arg1 withBoolean:(_Bool)arg2;
- (int)enumerateWithJavaLangThreadGroupArray:(id)arg1;
- (int)activeGroupCount;
- (int)enumerateWithJavaLangThreadArray:(id)arg1 withInt:(int)arg2 withBoolean:(_Bool)arg3;
- (int)enumerateWithJavaLangThreadArray:(id)arg1 withBoolean:(_Bool)arg2;
- (int)enumerateWithJavaLangThreadArray:(id)arg1;
- (int)activeCount;
- (void)checkAccess;
- (_Bool)parentOfWithJavaLangThreadGroup:(id)arg1;
- (void)setMaxPriorityWithInt:(int)arg1;
- (void)setDaemonWithBoolean:(_Bool)arg1;
- (_Bool)isDestroyed;
- (_Bool)isDaemon;
- (int)getMaxPriority;
- (id)getParent;
- (id)getName;
- (id)initWithJavaLangVoid:(id)arg1 withJavaLangThreadGroup:(id)arg2 withNSString:(id)arg3;
- (id)initWithJavaLangThreadGroup:(id)arg1 withNSString:(id)arg2;
- (id)initWithNSString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

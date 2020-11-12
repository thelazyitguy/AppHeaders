//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTLoggingCounterGroup-Protocol.h"

@class JBTLoggingDefaultCounterGroup_NotAtomicReference, NSString;
@protocol ComGoogleCommonTimeClock, JavaUtilMap, XPTEventLogger, XPTScheduledExecutor;

@interface JBTLoggingDefaultCounterGroup : NSObject <JBTLoggingCounterGroup>
{
    _Bool stopped_;
    id <ComGoogleCommonTimeClock> clock_;
    id <JavaUtilMap> counterBuilders_;
    id <JavaUtilMap> simpleCounterBuilders_;
    JBTLoggingDefaultCounterGroup_NotAtomicReference *selfReference_;
    id <JavaUtilMap> counterKeyMap_;
    id <XPTEventLogger> eventLogger_;
    id <XPTScheduledExecutor> executor_;
    id lock_;
    double lastFlushTimeMs_;
}

+ (void)initialize;
- (void)dealloc;
- (void)flushNow;
- (void)scheduledFlushWithJBTLoggingDefaultCounterGroup_FlushTask:(id)arg1 withBoolean:(_Bool)arg2;
- (void)stop;
- (void)scheduleFlushIntervalWithInt:(int)arg1;
- (void)scheduleFlushWithInt:(int)arg1;
- (void)recordWithInt:(int)arg1 withJavaUtilList:(id)arg2 withInt:(int)arg3;
- (void)recordWithInt:(int)arg1 withInt:(int)arg2;
- (void)incrementByWithInt:(int)arg1 withJavaUtilList:(id)arg2 withDouble:(double)arg3;
- (void)incrementByWithInt:(int)arg1 withDouble:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DYNSAnalyticsClearcutEventsLogger;

@interface DYNSApiAppStateLogger : NSObject
{
    id <DYNSAnalyticsClearcutEventsLogger> clearcutEventsLogger_;
}

- (void)dealloc;
- (void)logAppOpenSourceWithDYNProtoAppOpenSource:(id)arg1 withDYNProtoAppOpenType:(id)arg2;
- (void)logBackgroundAppSessionDurationWithLong:(long long)arg1;
- (void)logAppSessionDurationWithLong:(long long)arg1;
- (void)logAppToBackground;
- (void)logAppToForegroundWithDYNProtoAppOpenType:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APMMonitor;

@interface APMEMonitor : NSObject
{
    APMMonitor *_monitor;
}

- (void).cxx_destruct;
- (void)clearMonitoringData;
- (void)logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3 context:(id)arg4 context:(id)arg5 context:(id)arg6;
- (void)logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3 context:(id)arg4 context:(id)arg5;
- (void)logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3 context:(id)arg4;
- (void)logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3;
- (id)initWithMonitor:(id)arg1;

@end


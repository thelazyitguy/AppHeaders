//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC5Slack29SLKUserSettingsPollingManager : NSObject
{
    // Error parsing type: , name: pollingManager
}

- (void).cxx_destruct;
- (id)init;
- (void)triggerPollWithForced:(_Bool)arg1 traceContext:(id)arg2;
- (void)beginPollingIfNecessaryWithTraceContext:(id)arg1;
- (id)initWithUserTsid:(id)arg1 teamId:(id)arg2 notificationCenter:(id)arg3 httpManager:(id)arg4 swiftDependencies:(id)arg5 dependenciesArePausedBlock:(CDUnknownBlockType)arg6;

@end

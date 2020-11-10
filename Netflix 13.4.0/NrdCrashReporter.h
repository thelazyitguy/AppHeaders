//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NrdCrashReporterDelegateProtocol, OS_dispatch_queue;

@interface NrdCrashReporter : NSObject
{
    _Bool _crashReportingEnabled;
    _Bool _breadcrumbLoggingEnabled;
    _Bool _exceptionLoggingEnabled;
    _Bool _bugSnagReportingEnabled;
    id <NrdCrashReporterDelegateProtocol> _delegate;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(nonatomic) _Bool bugSnagReportingEnabled; // @synthesize bugSnagReportingEnabled=_bugSnagReportingEnabled;
@property(nonatomic) _Bool exceptionLoggingEnabled; // @synthesize exceptionLoggingEnabled=_exceptionLoggingEnabled;
@property(nonatomic) _Bool breadcrumbLoggingEnabled; // @synthesize breadcrumbLoggingEnabled=_breadcrumbLoggingEnabled;
@property(nonatomic) _Bool crashReportingEnabled; // @synthesize crashReportingEnabled=_crashReportingEnabled;
@property(nonatomic) __weak id <NrdCrashReporterDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)platformConfigurationDidChange:(id)arg1;
- (void)unregisterForConfigChangeNotifications;
- (void)registerForConfigChangeNotifications;
- (void)logWithType:(id)arg1 payload:(id)arg2 isError:(_Bool)arg3;
- (void)whenPresentSendCrashlog;
- (void)logCrash:(id)arg1;
- (unsigned long long)breadcrumbType:(unsigned long long)arg1;
- (void)leaveBreadcrumbWithMsg:(id)arg1 metadata:(id)arg2 andType:(unsigned long long)arg3;
- (void)leaveBreadcrumb:(id)arg1;
- (void)refreshInfo:(id)arg1;
- (void)addCustomKey:(id)arg1 andFloatValue:(float)arg2;
- (void)addCustomKey:(id)arg1 andIntValue:(int)arg2;
- (void)addCustomKey:(id)arg1 andBoolValue:(_Bool)arg2;
- (void)addCustomKey:(id)arg1 andObjectValue:(id)arg2;
- (void)updateUsersActiveTests;
- (_Bool)shouldStartBugsnag:(id)arg1 deviceID:(id)arg2;
- (_Bool)shouldStartCrashMonitoring:(id)arg1 andBugsnagID:(id)arg2 deviceID:(id)arg3;
- (id)init;

@end


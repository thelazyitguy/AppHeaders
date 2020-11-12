//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol GIPCrashReportControllerDelegate, GIPCrashReportHandlerProtocol;

@interface GIPCrashReportController : NSObject
{
    NSString *appName_;
    NSString *appVersion_;
    NSString *reportsPath_;
    NSMutableArray *crashReportsStorage_;
    _Bool isRunning_;
    _Bool sendOnCrash_;
    _Bool sendOnException_;
    _Bool attachLogs_;
    unsigned long long logsInterval_;
    _Bool finishPump_;
    _Bool logOnSimulator_;
    id <GIPCrashReportHandlerProtocol> crashHandler_;
    id <GIPCrashReportControllerDelegate> delegate_;
    NSMutableArray *storedCrashReports_;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=isRunning_;
@property(nonatomic) _Bool logOnSimulator; // @synthesize logOnSimulator=logOnSimulator_;
@property(nonatomic) unsigned long long logsInterval; // @synthesize logsInterval=logsInterval_;
@property(nonatomic) _Bool attachLogs; // @synthesize attachLogs=attachLogs_;
@property(nonatomic) _Bool sendOnException; // @synthesize sendOnException=sendOnException_;
@property(nonatomic) _Bool sendOnCrash; // @synthesize sendOnCrash=sendOnCrash_;
@property(copy, nonatomic) NSString *reportsPath; // @synthesize reportsPath=reportsPath_;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=appVersion_;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=appName_;
@property(nonatomic) id <GIPCrashReportControllerDelegate> delegate; // @synthesize delegate=delegate_;
- (id)parseEpochDate:(id)arg1;
- (void)pumpRunLoop;
- (void)deleteStoredCrashReports;
- (void)crashReportProcessed:(id)arg1;
- (void)logCrashes:(id)arg1;
- (void)logCrash:(id)arg1;
- (void)sendStoredCrashReports;
- (void)sendCrash;
- (void)sendCrashes:(id)arg1;
- (void)sendCrash:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)storedCrashReports;
- (id)loadStoredCrashReports;
- (id)latestLogs;
- (id)callStack;
- (void)handleException:(id)arg1;
- (void)handleSignal:(int)arg1;
- (void)stop;
- (void)start;
- (void)unregisterHandler:(id)arg1;
- (void)registerHandler:(id)arg1;
- (void)dealloc;
- (id)init;

@end

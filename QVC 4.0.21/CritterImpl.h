//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CRReachabilityMonitorDelegate-Protocol.h"

@class CRApp, CRAppBackgroundMonitor, CRAppLifecycleMonitor, CRAppLoadMonitor, CRAppLocator, CRAppPlaceholder, CRAppRelaunchMonitor, CRCrashMonitor, CRExceptionGenerator, CRGarbageCollector, CRNetStatDispatch, CROrientationMonitor, CRReachabilityMonitor, CRResponsivenessMonitor, CRSDKConfigurator, CRSDKSettings, CRUIViewMonitor, CRUserFlowGenerator, NSArray, NSManagedObjectContext, NSString, NSURLSession;

@interface CritterImpl : NSObject <CRReachabilityMonitorDelegate>
{
    _Bool _didCrashOnLastLoad;
    _Bool _asyncBreadcrumbMode;
    _Bool _allowsCellularAccess;
    _Bool _debuggerAttached;
    NSManagedObjectContext *_context;
    NSArray *_reporters;
    CRNetStatDispatch *_netStatDispatch;
    CRUIViewMonitor *_viewMonitor;
    CRReachabilityMonitor *_reachabilityMonitor;
    CRAppBackgroundMonitor *_appBackgroundMonitor;
    CRAppLifecycleMonitor *_appLifecycleMonitor;
    CRAppLoadMonitor *_appLoadMonitor;
    CRAppRelaunchMonitor *_appRelaunchMonitor;
    CROrientationMonitor *_orientationMonitor;
    CRResponsivenessMonitor *_responsivenessMonitor;
    CRGarbageCollector *_garbageCollector;
    CRApp *_app;
    CRAppPlaceholder *_appPlaceholder;
    NSURLSession *_networkSession;
    CRAppLocator *_appLocator;
    CRSDKSettings *_sdkSettings;
    CRCrashMonitor *_crashMonitor;
    CRSDKConfigurator *_sdkConfigurator;
    CRUserFlowGenerator *_userFlowGenerator;
    CRExceptionGenerator *_exceptionGenerator;
}

@property(retain, nonatomic) CRExceptionGenerator *exceptionGenerator; // @synthesize exceptionGenerator=_exceptionGenerator;
@property(retain, nonatomic) CRUserFlowGenerator *userFlowGenerator; // @synthesize userFlowGenerator=_userFlowGenerator;
@property(retain, nonatomic) CRSDKConfigurator *sdkConfigurator; // @synthesize sdkConfigurator=_sdkConfigurator;
@property(retain, nonatomic) CRCrashMonitor *crashMonitor; // @synthesize crashMonitor=_crashMonitor;
@property(nonatomic) _Bool debuggerAttached; // @synthesize debuggerAttached=_debuggerAttached;
@property(retain, nonatomic) CRSDKSettings *sdkSettings; // @synthesize sdkSettings=_sdkSettings;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(retain, nonatomic) CRAppLocator *appLocator; // @synthesize appLocator=_appLocator;
@property(retain, nonatomic) NSURLSession *networkSession; // @synthesize networkSession=_networkSession;
@property(retain, nonatomic) CRAppPlaceholder *appPlaceholder; // @synthesize appPlaceholder=_appPlaceholder;
@property(retain, nonatomic) CRApp *app; // @synthesize app=_app;
@property(retain, nonatomic) CRGarbageCollector *garbageCollector; // @synthesize garbageCollector=_garbageCollector;
@property(retain, nonatomic) CRResponsivenessMonitor *responsivenessMonitor; // @synthesize responsivenessMonitor=_responsivenessMonitor;
@property(retain, nonatomic) CROrientationMonitor *orientationMonitor; // @synthesize orientationMonitor=_orientationMonitor;
@property(retain, nonatomic) CRAppRelaunchMonitor *appRelaunchMonitor; // @synthesize appRelaunchMonitor=_appRelaunchMonitor;
@property(retain, nonatomic) CRAppLoadMonitor *appLoadMonitor; // @synthesize appLoadMonitor=_appLoadMonitor;
@property(retain, nonatomic) CRAppLifecycleMonitor *appLifecycleMonitor; // @synthesize appLifecycleMonitor=_appLifecycleMonitor;
@property(retain, nonatomic) CRAppBackgroundMonitor *appBackgroundMonitor; // @synthesize appBackgroundMonitor=_appBackgroundMonitor;
@property(retain, nonatomic) CRReachabilityMonitor *reachabilityMonitor; // @synthesize reachabilityMonitor=_reachabilityMonitor;
@property(retain, nonatomic) CRUIViewMonitor *viewMonitor; // @synthesize viewMonitor=_viewMonitor;
@property(retain) CRNetStatDispatch *netStatDispatch; // @synthesize netStatDispatch=_netStatDispatch;
@property(retain, nonatomic) NSArray *reporters; // @synthesize reporters=_reporters;
@property(nonatomic) _Bool asyncBreadcrumbMode; // @synthesize asyncBreadcrumbMode=_asyncBreadcrumbMode;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool didCrashOnLastLoad; // @synthesize didCrashOnLastLoad=_didCrashOnLastLoad;
- (void).cxx_destruct;
- (void)logExit;
- (void)logAbort;
- (void)logExternalErrorWithName:(id)arg1 reason:(id)arg2 stacktrace:(id)arg3 platformType:(unsigned long long)arg4 errorType:(unsigned long long)arg5;
- (void)setReportStatusForExternalError:(id)arg1;
- (void)setValue:(int)arg1 forUserflow:(id)arg2;
- (int)valueForUserflow:(id)arg1;
- (void)failUserflow:(id)arg1;
- (void)endUserflow:(id)arg1;
- (void)cancelUserflow:(id)arg1;
- (void)beginUserflow:(id)arg1 withValue:(id)arg2 timeout:(double)arg3;
- (id)getUserUUID;
- (void)leaveBreadcrumb:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setUsername:(id)arg1;
- (void)setDelegate:(id)arg1;
- (_Bool)logNetworkRequest:(id)arg1 urlString:(id)arg2 latency:(double)arg3 bytesRead:(unsigned long long)arg4 bytesSent:(unsigned long long)arg5 responseCode:(long long)arg6 error:(id)arg7;
- (_Bool)logError:(id)arg1 stackTrace:(id)arg2;
- (_Bool)logHandledException:(id)arg1;
- (void)addFilter:(id)arg1;
- (_Bool)getOptOutStatus;
- (void)setOptOutStatus:(_Bool)arg1;
- (void)sendAppLoadData;
- (void)insertOptOutBreadcrumbAtTime:(id)arg1 withStatus:(_Bool)arg2 sdkSettings:(id)arg3;
- (void)reachabilityChanged:(id)arg1 previousState:(long long)arg2 currentState:(long long)arg3;
- (id)createEventReportersWithSession:(id)arg1;
- (void)startCRNetworkSession;
- (void)stopReporting;
- (void)startReportingWithSession:(id)arg1;
- (void)generateAppStartEvent;
- (void)generateAppLoadEvent;
- (void)shutdown;
- (void)setupInstrumentationWithConfig:(id)arg1;
- (void)checkIsDebuggerAttached;
- (id)initWithContext:(id)arg1 appID:(id)arg2 config:(id)arg3;
- (void)setDevelopmentPlatformWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

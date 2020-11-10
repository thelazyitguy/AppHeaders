//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCrashDetectorDelegate-Protocol.h"
#import "SPTCrashReporter-Protocol.h"

@class NSString, SPTANRDetector;
@protocol SPTCrashDetector;

@interface SPTCrashReporterImplementation : NSObject <SPTCrashDetectorDelegate, SPTCrashReporter>
{
    _Bool _haveSentSummaryReports;
    _Bool _echoBreadcrumbsToLog;
    id <SPTCrashDetector> _crashDetector;
    SPTANRDetector *_anrDetector;
    NSString *_userName;
    struct _opaque_pthread_t *_mainThread;
}

- (void).cxx_destruct;
@property(nonatomic) struct _opaque_pthread_t *mainThread; // @synthesize mainThread=_mainThread;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) _Bool echoBreadcrumbsToLog; // @synthesize echoBreadcrumbsToLog=_echoBreadcrumbsToLog;
@property(nonatomic) _Bool haveSentSummaryReports; // @synthesize haveSentSummaryReports=_haveSentSummaryReports;
@property(retain, nonatomic) SPTANRDetector *anrDetector; // @synthesize anrDetector=_anrDetector;
@property(retain, nonatomic) id <SPTCrashDetector> crashDetector; // @synthesize crashDetector=_crashDetector;
- (void)unload;
- (void)crashDetector:(id)arg1 detectedCrashAtDate:(id)arg2 clientVersion:(id)arg3 OSVersion:(id)arg4 userName:(id)arg5 UUID:(id)arg6;
- (id)lastCrashURL;
- (id)lastCrashIdentifier;
- (void)synchronizeState;
- (void)setValue:(id)arg1 forStateKey:(id)arg2;
- (void)leaveBreadcrumb:(id)arg1;
- (void)recordNonFatalError:(id)arg1;
- (void)appOperational;
- (void)appShutdown;
- (void)userDidEnterAuthenticationFlow;
- (void)setUserIdentifier:(id)arg1;
- (void)userDidLogIn:(id)arg1;
- (void)unregisterForNavigationNotifications;
- (void)registerForNavigationNotifications;
- (void)didReceiveNavigationNotification:(id)arg1;
- (void)dealloc;
- (void)updateWithAnrReportingEnabled:(_Bool)arg1;
- (id)initWithCrashDetector:(id)arg1 coreLoginController:(id)arg2 deviceID:(id)arg3 cachePath:(id)arg4 requestAccounting:(id)arg5 mainThread:(struct _opaque_pthread_t *)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


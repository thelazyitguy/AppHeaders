//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _TtC13AirbnbLogging26BugsnagBouncer_Caterpillar;

@interface BugsnagBouncer : NSObject
{
    id _accountSubscription;
    id _appModeSubscription;
    _TtC13AirbnbLogging26BugsnagBouncer_Caterpillar *_caterpillar;
}

+ (id)sharedInstance;
+ (id)blackListedURLErrorDomainCodes;
+ (void)logJitneyCrashEventFor:(id)arg1 pageNameValue:(id)arg2 previousPageNameValue:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) _TtC13AirbnbLogging26BugsnagBouncer_Caterpillar *caterpillar; // @synthesize caterpillar=_caterpillar;
@property(retain) id appModeSubscription; // @synthesize appModeSubscription=_appModeSubscription;
@property(retain) id accountSubscription; // @synthesize accountSubscription=_accountSubscription;
- (void)publishEnqueuedLogsAndStopEnqueuing;
- (void)addAttribute:(id)arg1 withValue:(id)arg2 toTabWithName:(id)arg3;
- (void)addTrebuchet:(id)arg1 isLaunched:(id)arg2;
- (void)addExperiment:(id)arg1 withTreatment:(id)arg2;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setThrottlingEnabled:(_Bool)arg1;
- (void)enableLogging:(_Bool)arg1 config:(long long)arg2;
@property(readonly, nonatomic) _Bool appDidCrashLastLaunch;
@property(nonatomic) _Bool shouldUploadDeliveredExperimentsV2Metadata;
@property(copy, nonatomic) NSString *appMode;
- (id)init;
- (void)setUserID:(id)arg1 email:(id)arg2;
- (void)printBreadcrumbs;
- (void)clearBreadcrumbCache;
- (void)deleteMessages;
- (void)loadLogsFromBeforeCrash;
- (void)attachMessage:(id)arg1 shouldSnapshot:(_Bool)arg2;
- (void)leaveBreadcrumbWithMessage:(id)arg1;
- (void)notify:(id)arg1 withData:(id)arg2 severity:(id)arg3 depthToAdd:(unsigned long long)arg4 customContext:(id)arg5 reportBlock:(CDUnknownBlockType)arg6;
- (id)createAppMetadataDictionary;
- (void)trackFailedAssertionWithException:(id)arg1 file:(id)arg2 lineNumber:(unsigned long long)arg3 depthToAdd:(unsigned long long)arg4;
- (void)trackError:(id)arg1 withSeverity:(long long)arg2 customContext:(id)arg3 depthToAdd:(unsigned long long)arg4 reportBlock:(CDUnknownBlockType)arg5;
- (void)trackError:(id)arg1 withCustomContext:(id)arg2 depthToAdd:(unsigned long long)arg3 reportBlock:(CDUnknownBlockType)arg4;
- (void)trackError:(id)arg1;

@end

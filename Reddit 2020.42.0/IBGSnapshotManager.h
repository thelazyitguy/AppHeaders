//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IBGLogLogger, IBGSessionLogger, InstabugNetworkLogger, NSArray, NSRecursiveLock, NSString;

@interface IBGSnapshotManager : NSObject
{
    IBGLogLogger *_logLogger;
    IBGSessionLogger *_sessionLogger;
    InstabugNetworkLogger *_networkLogger;
    NSArray *_observers;
    NSRecursiveLock *_lock;
    NSString *_sdkVersion;
    NSString *_iOS;
    NSString *_model;
    NSString *_appVersion;
    NSString *_uuid;
    NSString *_bundleIdentifier;
    NSString *_minOS;
    NSString *_maxOS;
    NSString *_uiDeviceFamily;
    NSString *_locale;
    NSString *_screenSize;
    NSString *_screenScale;
}

+ (void)startLoggers;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *screenScale; // @synthesize screenScale=_screenScale;
@property(copy, nonatomic) NSString *screenSize; // @synthesize screenSize=_screenSize;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSString *uiDeviceFamily; // @synthesize uiDeviceFamily=_uiDeviceFamily;
@property(copy, nonatomic) NSString *maxOS; // @synthesize maxOS=_maxOS;
@property(copy, nonatomic) NSString *minOS; // @synthesize minOS=_minOS;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *iOS; // @synthesize iOS=_iOS;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) InstabugNetworkLogger *networkLogger; // @synthesize networkLogger=_networkLogger;
@property(retain, nonatomic) IBGSessionLogger *sessionLogger; // @synthesize sessionLogger=_sessionLogger;
@property(retain, nonatomic) IBGLogLogger *logLogger; // @synthesize logLogger=_logLogger;
- (void).cxx_destruct;
- (void)clearConsoleLog;
- (id)logsFetchRequests;
- (void)captureDeviceState;
- (void)resetUserLoggersData;
- (void)removeManagedObjectWithFetchRequests:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)clearAllLogs;
- (void)unregisterUserDataResetObserver:(id)arg1;
- (void)registerUserDataResetObserver:(id)arg1;
- (id)takePostSendingSnapshotWithSnapshot:(id)arg1 Synchronously:(_Bool)arg2;
- (id)tags;
- (id)takePreSendingSnapshotWithScreenShot:(_Bool)arg1 synchronously:(_Bool)arg2 shouldFetchLogs:(_Bool)arg3 shouldFetchVisualUserSteps:(_Bool)arg4 shouldExecuteWillSendReport:(_Bool)arg5;
- (id)init;

@end


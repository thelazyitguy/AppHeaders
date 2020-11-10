//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/BugsnagClassLevelMetadataStore-Protocol.h>

@class NSString;

@interface Bugsnag : NSObject <BugsnagClassLevelMetadataStore>
{
}

+ (void)removeOnBreadcrumbBlock:(CDUnknownBlockType)arg1;
+ (void)addOnBreadcrumbBlock:(CDUnknownBlockType)arg1;
+ (void)updateCodeBundleId:(id)arg1;
+ (void)removeOnSessionBlock:(CDUnknownBlockType)arg1;
+ (void)addOnSessionBlock:(CDUnknownBlockType)arg1;
+ (void)setUser:(id)arg1 withEmail:(id)arg2 andName:(id)arg3;
+ (id)user;
+ (id)context;
+ (void)setContext:(id)arg1;
+ (void)clearMetadataFromSection:(id)arg1 withKey:(id)arg2;
+ (void)clearMetadataFromSection:(id)arg1;
+ (id)getMetadataFromSection:(id)arg1 withKey:(id)arg2;
+ (id)getMetadataFromSection:(id)arg1;
+ (void)addMetadata:(id)arg1 toSection:(id)arg2;
+ (void)addMetadata:(id)arg1 withKey:(id)arg2 toSection:(id)arg3;
+ (void)addRuntimeVersionInfo:(id)arg1 withKey:(id)arg2;
+ (_Bool)resumeSession;
+ (void)pauseSession;
+ (void)startSession;
+ (id)breadcrumbs;
+ (void)leaveBreadcrumbWithMessage:(id)arg1 metadata:(id)arg2 andType:(unsigned long long)arg3;
+ (void)leaveBreadcrumbForNotificationName:(id)arg1;
+ (void)leaveBreadcrumbWithBlock:(CDUnknownBlockType)arg1;
+ (void)leaveBreadcrumbWithMessage:(id)arg1;
+ (_Bool)bugsnagStarted;
+ (void)notifyInternal:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)notifyError:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)notifyError:(id)arg1;
+ (void)notify:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)notify:(id)arg1;
+ (_Bool)appDidCrashLastLaunch;
+ (id)client;
+ (id)instance;
+ (id)configuration;
+ (id)startWithConfiguration:(id)arg1;
+ (id)startWithApiKey:(id)arg1;
+ (id)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


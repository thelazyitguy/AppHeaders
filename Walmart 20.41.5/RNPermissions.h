//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ElectrodeContainer/RCTBridgeModule-Protocol.h>

@class NSMutableDictionary, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface RNPermissions : NSObject <RCTBridgeModule>
{
    NSMutableDictionary *_handlers;
}

+ (const struct RCTMethodInfo *)__rct_export__requestNotifications4274;
+ (const struct RCTMethodInfo *)__rct_export__checkNotifications4073;
+ (const struct RCTMethodInfo *)__rct_export__request3922;
+ (const struct RCTMethodInfo *)__rct_export__check3761;
+ (const struct RCTMethodInfo *)__rct_export__openSettings3550;
+ (void)flagAsRequested:(id)arg1;
+ (_Bool)isFlaggedAsRequested:(id)arg1;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
- (void)requestNotificationsWithOptions:(id)arg1 resolver:(CDUnknownBlockType)arg2 rejecter:(CDUnknownBlockType)arg3;
- (void)checkNotificationsWithResolver:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (void)requestWithPermission:(long long)arg1 resolver:(CDUnknownBlockType)arg2 rejecter:(CDUnknownBlockType)arg3;
- (void)checkWithPermission:(long long)arg1 resolver:(CDUnknownBlockType)arg2 rejecter:(CDUnknownBlockType)arg3;
- (void)openSettingsWithResolver:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (void)unlockHandler:(id)arg1;
- (id)lockHandler:(id)arg1;
- (id)stringForStatus:(int)arg1;
- (id)handlerForPermission:(long long)arg1;
- (id)constantsToExport;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


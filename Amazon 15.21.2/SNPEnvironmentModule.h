//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface SNPEnvironmentModule : NSObject <RCTBridgeModule>
{
    RCTBridge *_bridge;
}

+ (id)SNP_CONSTANTS;
+ (const struct RCTMethodInfo *)__rct_export__853;
+ (const struct RCTMethodInfo *)__rct_export__762;
+ (const struct RCTMethodInfo *)__rct_export__711;
+ (const struct RCTMethodInfo *)__rct_export__550;
+ (id)deviceModel;
+ (id)ssnap_constant_MOBILE_BETA_BUILD;
+ (id)ssnap_constant_MOBILE_DEBUG_BUILD;
+ (id)ssnap_constant___NATIVE_MODULE_EXCEPTION_DETECTED;
+ (id)ssnap_constant___TEST_NATIVE_MODULE_EXCEPTION_NAME;
+ (id)ssnap_constant_VIEW_INITIAL_INGRESS_TIME;
+ (id)ssnap_constant_DEVICE_MODEL;
+ (id)ssnap_constant_RELOAD_REASON_TOO_FAR_BACKSTACK;
+ (id)ssnap_constant_RELOAD_REASON_LOW_MEMORY;
+ (id)ssnap_constant_RELOAD_OCCURRED_KEY;
+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (id)getFeatureSetMetadataInfo:(id)arg1;
- (id)constantsToExport;
- (void)__triggerNativeModuleException;
- (void)getLoadedFeaturesMetadataAsync:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)getPackageVersionAsync:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)getLoadedManifestAsync:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

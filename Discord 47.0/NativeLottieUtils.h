//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface NativeLottieUtils : NSObject <RCTBridgeModule>
{
}

+ (_Bool)requiresMainQueueSetup;
+ (const struct RCTMethodInfo *)__rct_export__181;
+ (const struct RCTMethodInfo *)__rct_export__140;
+ (id)moduleName;
- (id)init;
- (void)dropPreload:(id)arg1;
- (void)preload:(id)arg1 withUrl:(id)arg2 withWidth:(id)arg3 withHeight:(id)arg4 withFrames:(id)arg5 withCallback:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

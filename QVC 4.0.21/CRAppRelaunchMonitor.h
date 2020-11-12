//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CRApp, CRSDKSettings, CRUserflow;

@interface CRAppRelaunchMonitor : NSObject
{
    CRApp *_app;
    CRUserflow *_appRelaunchUserflow;
    CRSDKSettings *_sdkSettings;
}

+ (void)load;
@property(retain, nonatomic) CRSDKSettings *sdkSettings; // @synthesize sdkSettings=_sdkSettings;
@property(retain, nonatomic) CRUserflow *appRelaunchUserflow; // @synthesize appRelaunchUserflow=_appRelaunchUserflow;
@property(readonly, nonatomic) CRApp *app; // @synthesize app=_app;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)dealloc;
- (id)initWithApp:(id)arg1 sdkSettings:(id)arg2;

@end

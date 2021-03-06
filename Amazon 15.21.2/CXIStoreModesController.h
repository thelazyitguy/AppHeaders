//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OneTapBarViewControllerDelegate-Protocol.h"

@class CXINavigationServiceListener, NSMutableSet, NSString, OneTapBarViewController;
@protocol AMIIPhoneAppManagerBridge, ANPCXIService, ANPChromeStorageService, ANXMetricsService, CXIStoreConfig;

@interface CXIStoreModesController : NSObject <OneTapBarViewControllerDelegate>
{
    id <CXIStoreConfig> _currentStoreConfig;
    id <ANPCXIService> _cxiService;
    id <AMIIPhoneAppManagerBridge> _appManager;
    id <ANXMetricsService> _metricsService;
    id <ANPChromeStorageService> _chromeStorageService;
    OneTapBarViewController *_oneTapBarViewController;
    NSMutableSet *_durationMetricTimerAddedSet;
    NSString *_prevNavigationGroup;
    NSString *_prevNavigationStack;
    CXINavigationServiceListener *_cxiNavServiceListener;
}

+ (void)logStoreMetric:(id)arg1 config:(id)arg2 metricsService:(id)arg3;
+ (id)sharedInstance;
@property(retain, nonatomic) CXINavigationServiceListener *cxiNavServiceListener; // @synthesize cxiNavServiceListener=_cxiNavServiceListener;
@property(retain, nonatomic) NSString *prevNavigationStack; // @synthesize prevNavigationStack=_prevNavigationStack;
@property(retain, nonatomic) NSString *prevNavigationGroup; // @synthesize prevNavigationGroup=_prevNavigationGroup;
@property(retain, nonatomic) NSMutableSet *durationMetricTimerAddedSet; // @synthesize durationMetricTimerAddedSet=_durationMetricTimerAddedSet;
@property(retain, nonatomic) OneTapBarViewController *oneTapBarViewController; // @synthesize oneTapBarViewController=_oneTapBarViewController;
@property(retain, nonatomic) id <ANPChromeStorageService> chromeStorageService; // @synthesize chromeStorageService=_chromeStorageService;
@property(retain, nonatomic) id <ANXMetricsService> metricsService; // @synthesize metricsService=_metricsService;
@property(retain, nonatomic) id <AMIIPhoneAppManagerBridge> appManager; // @synthesize appManager=_appManager;
@property(retain, nonatomic) id <ANPCXIService> cxiService; // @synthesize cxiService=_cxiService;
@property(retain, nonatomic) id <CXIStoreConfig> currentStoreConfig; // @synthesize currentStoreConfig=_currentStoreConfig;
- (void).cxx_destruct;
- (id)navigationService;
- (id)navGroupNameFromStoreConfig:(id)arg1;
- (void)handleNavError:(id)arg1;
- (void)handleGroupCreationSuccessWithNavOrigin:(id)arg1 withGroupName:(id)arg2 stackName:(id)arg3;
- (void)logAppEnteredBackgroundMetric;
- (void)logAppEnteredForegroundMetric;
- (void)logStoreMetric:(id)arg1;
- (void)showReingressBar:(id)arg1;
- (_Bool)shouldShowReingressBarWeblab;
- (void)detachBarWithRemovedView:(_Bool)arg1 removeNavGroup:(_Bool)arg2;
- (void)detachBarWithRemovedView:(_Bool)arg1;
- (void)reingressFromBar:(id)arg1;
- (void)handleUrl:(id)arg1;
- (void)egressStoreModeWithReason:(long long)arg1;
- (void)dismissStoreModeInNavigationService:(id)arg1;
- (_Bool)ingressStoreModeWithConfig:(id)arg1 rootViewController:(id)arg2 shouldReuseExistingGroup:(_Bool)arg3;
- (_Bool)ingressStoreModeWithConfig:(id)arg1 rootViewController:(id)arg2;
- (void)addStoreModesOpenDurationTimer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


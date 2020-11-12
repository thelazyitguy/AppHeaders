//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANPChromeSearchScopeServiceImpl, NSArray, NSDictionary, NSMutableDictionary;
@protocol AMIAppNavigationService, ANPChromeMetricsService, ANPChromeRuleService, ANPConfigChromeContext, ANXWeblabTriggerService;

@interface ANPChromeEngine : NSObject
{
    id <ANXWeblabTriggerService> _weblabService;
    id <ANPChromeMetricsService> _metricsService;
    id <AMIAppNavigationService> _navService;
    id <ANPConfigChromeContext> _currentChromeConfig;
    id <ANPChromeRuleService> _ruleService;
    ANPChromeSearchScopeServiceImpl *_searchScopeService;
    NSMutableDictionary *_configCache;
    NSArray *_chromeConfigs;
    NSDictionary *_ingresses;
    NSDictionary *_egresses;
}

@property(retain, nonatomic) NSDictionary *egresses; // @synthesize egresses=_egresses;
@property(retain, nonatomic) NSDictionary *ingresses; // @synthesize ingresses=_ingresses;
@property(retain, nonatomic) NSArray *chromeConfigs; // @synthesize chromeConfigs=_chromeConfigs;
@property(retain, nonatomic) NSMutableDictionary *configCache; // @synthesize configCache=_configCache;
@property(retain, nonatomic) ANPChromeSearchScopeServiceImpl *searchScopeService; // @synthesize searchScopeService=_searchScopeService;
@property(retain, nonatomic) id <ANPChromeRuleService> ruleService; // @synthesize ruleService=_ruleService;
@property(retain, nonatomic) id <ANPConfigChromeContext> currentChromeConfig; // @synthesize currentChromeConfig=_currentChromeConfig;
@property(retain, nonatomic) id <AMIAppNavigationService> navService; // @synthesize navService=_navService;
@property(retain, nonatomic) id <ANPChromeMetricsService> metricsService; // @synthesize metricsService=_metricsService;
@property(retain, nonatomic) id <ANXWeblabTriggerService> weblabService; // @synthesize weblabService=_weblabService;
- (void).cxx_destruct;
- (void)cacheConfig:(id)arg1 forContext:(id)arg2;
- (_Bool)isCurrentChromeConfigSticky;
- (id)createChromeNavigationEventWithContext:(id)arg1;
- (_Bool)egressMatchedForContext:(id)arg1;
- (id)evaluateChromeConfigForTransition:(id)arg1;
- (_Bool)isForwardNavigation:(id)arg1;
- (_Bool)isBackwardNavigation:(id)arg1;
- (void)chromeConfigsDidUpdate:(id)arg1;
- (id)experimentalChromeConfigForTransition:(id)arg1;
- (id)chromeConfigForTransition:(id)arg1;
- (_Bool)webviewTransitionMatches:(id)arg1;
- (_Bool)isStickyModeEnabled;
- (void)endStickyMode;
- (void)performChromeTransition:(id)arg1;
- (id)init;

@end

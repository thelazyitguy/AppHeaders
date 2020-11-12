//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GWA2DataManager, GWA2EventRuleManager, GWA2LockingSheetViewController, GWA2Logger, GWA2NodeManager, GWA2PageTheme, GWA2TransitionManager, GWA2WidgetPageViewController, NSArray, UIViewController;
@protocol GWA2FlowController;

@interface GWA2PageContext : NSObject
{
    GWA2Logger *_logger;
    NSArray *_loggingConfigurationsForPage;
    GWA2DataManager *_dataManager;
    GWA2NodeManager *_nodeManager;
    GWA2EventRuleManager *_eventRuleManager;
    GWA2TransitionManager *_transitionManager;
    id <GWA2FlowController> _flowController;
    UIViewController *_viewController;
    GWA2WidgetPageViewController *_pageViewController;
    GWA2LockingSheetViewController *_lockingSheetViewController;
    GWA2PageTheme *_pageTheme;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GWA2PageTheme *pageTheme; // @synthesize pageTheme=_pageTheme;
@property(nonatomic) __weak GWA2LockingSheetViewController *lockingSheetViewController; // @synthesize lockingSheetViewController=_lockingSheetViewController;
@property(nonatomic) __weak GWA2WidgetPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <GWA2FlowController> flowController; // @synthesize flowController=_flowController;
@property(retain, nonatomic) GWA2TransitionManager *transitionManager; // @synthesize transitionManager=_transitionManager;
@property(readonly) GWA2EventRuleManager *eventRuleManager; // @synthesize eventRuleManager=_eventRuleManager;
@property(readonly) GWA2NodeManager *nodeManager; // @synthesize nodeManager=_nodeManager;
@property(readonly) GWA2DataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) NSArray *loggingConfigurationsForPage; // @synthesize loggingConfigurationsForPage=_loggingConfigurationsForPage;
@property(retain, nonatomic) GWA2Logger *logger; // @synthesize logger=_logger;
- (_Bool)validateAllData;
- (_Bool)validateDataReferences:(id)arg1;
- (_Bool)submitWithSubmitAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

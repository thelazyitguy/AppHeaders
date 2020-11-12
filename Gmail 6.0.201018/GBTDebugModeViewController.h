//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GBTAppBarSupport-Protocol.h"
#import "JBTEventListener-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GBTAppBarViewController, NSMutableDictionary, NSString, UITableView, UITableViewCell;
@protocol GBTAppSettingsUIServiceDeps, JBTStatus;

@interface GBTDebugModeViewController : UIViewController <JBTEventListener, UITableViewDataSource, UITableViewDelegate, GBTAppBarSupport>
{
    UITableViewCell *_releaseVersionCell;
    UITableViewCell *_breakpadClientIDCell;
    UITableViewCell *_deviceIDCell;
    UITableViewCell *_badNetworkCell;
    UITableViewCell *_toggleBgPrefetchStatusCell;
    UITableViewCell *_toggleShowWebviewPrecomputedIndicatorCell;
    UITableViewCell *_toggleFPSMonitorCell;
    UITableViewCell *_toggleForceAddressBookCell;
    UITableViewCell *_togglePasswordResetConsumerCell;
    UITableViewCell *_toggleSectionExtraViewShortenExpirationTimeCell;
    UITableViewCell *_toggleIgnoreHUBOnboardingSeenStateCell;
    UITableViewCell *_toggleDisableAccountCleanupCell;
    NSMutableDictionary *_logCells;
    NSMutableDictionary *_actionCells;
    id <JBTStatus> _status;
    _Bool _preventUpdate;
    id <GBTAppSettingsUIServiceDeps> _appSettingsUIServiceDeps;
    GBTAppBarViewController *_appBar;
    UITableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) GBTAppBarViewController *appBar; // @synthesize appBar=_appBar;
- (void)updateData;
- (void)toggleDisableAccountCleanup:(id)arg1;
- (id)toggleDisableAccountCleanupCell;
- (void)toggleIgnoreHUBOnboardingSeenState:(id)arg1;
- (id)toggleIgnoreHUBOnboardingSeenStateCell;
- (void)toggleSectionExtraViewShortenExpirationTime:(id)arg1;
- (id)toggleSectionExtraViewShortenExpirationTimeCell;
- (void)togglePasswordResetConsumerEnabled:(id)arg1;
- (id)togglePasswordResetConsumerCell;
- (void)toggleForceAddressBookPromo:(id)arg1;
- (id)toggleForceAddressBookPromoCell;
- (void)toggleShowWebviewPrecomputedIndicator:(id)arg1;
- (id)toggleShowWebviewPrecomputedIndicatorCell;
- (void)toggleBgPrefetchStatus:(id)arg1;
- (id)toggleBgPrefetchStatusCell;
- (void)toggleFPSMonitor:(id)arg1;
- (id)toggleFPSMonitorCell;
- (void)toggleSimulateBadNetwork:(id)arg1;
- (id)badNetworkCell;
- (id)toggleCellWithExistingCell:(id)arg1 action:(SEL)arg2 title:(id)arg3 enabled:(_Bool)arg4;
- (id)toggleCellWithExistingCell:(id)arg1 action:(SEL)arg2 title:(id)arg3 enabledKey:(id)arg4;
- (id)statusCellWithLabel:(id)arg1 value:(id)arg2;
- (id)actionCellWithString:(id)arg1;
- (id)logViewerCellWithString:(id)arg1;
- (id)deviceIDStringCell;
- (id)breakpadClientIDStringCell;
- (id)releaseVersionStringCell;
- (void)forceCrashWithMessage:(id)arg1;
- (void)onEventWithJBTEvent:(id)arg1;
- (void)appBar:(id)arg1 didTapOnButtonItem:(id)arg2 event:(id)arg3 button:(id)arg4;
- (id)titleForAppBar:(id)arg1;
- (id)rightBarButtonItemsForAppBar:(id)arg1;
- (id)leftBarButtonItemsForAppBar:(id)arg1;
- (void)presentSyncHintsUnavailableAlert;
- (void)presentSyncHintsDebugScreen;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAppSettingsUIServiceDeps:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

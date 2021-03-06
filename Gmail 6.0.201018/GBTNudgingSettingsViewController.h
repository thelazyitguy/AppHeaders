//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTBaseSettingsTableViewController.h"

@class NSString, UISwitch;
@protocol GBTAccountSettingsService;

@interface GBTNudgingSettingsViewController : GBTBaseSettingsTableViewController
{
    NSString *_email;
    id <GBTAccountSettingsService> _accountSettings;
    UISwitch *_nudgingInboundSwitch;
    UISwitch *_nudgingOutboundSwitch;
}

+ (id)nudgingSettingsPageTitleForEmail:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)nudgingOutboundSectionIndex;
- (id)footerTextForSection:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)outboundSwitchChanged;
- (void)inboundSwitchChanged;
- (id)titleForAppBar:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)initWithAccountID:(id)arg1 accountSettingsUIServiceDeps:(id)arg2;

@end


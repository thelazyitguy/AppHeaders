//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface _TtC5Slack36SLKChannelPushSettingsViewController : UIViewController
{
    // Error parsing type: , name: goBackBlock
    // Error parsing type: , name: channel
    // Error parsing type: , name: titleFormat
    // Error parsing type: , name: channelSettings
    // Error parsing type: , name: featureFlagManager
    // Error parsing type: , name: notificationPrefs
    // Error parsing type: , name: preferencesManager
    // Error parsing type: , name: preferenceTracker
    // Error parsing type: , name: userLazyLoader
    // Error parsing type: , name: conversationsDataProvider
    // Error parsing type: , name: conversation
    // Error parsing type: , name: disposables
    // Error parsing type: , name: $__lazy_storage_$_tableView
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)switchSwitched:(id)arg1 on:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property(nonatomic, readonly) _Bool shouldAutorotate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (void)closeOrGoBack;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAssetViewController.h"

#import "CMRMissionUIServiceDataCallback-Protocol.h"
#import "CMRSettingsUIServiceDataCallback-Protocol.h"
#import "CMRUpdateUIServiceDataCallback-Protocol.h"
#import "CommandFooterDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView;

@interface MoreViewController : BaseAssetViewController <UITableViewDataSource, UITableViewDelegate, CommandFooterDelegate, CMRSettingsUIServiceDataCallback, CMRMissionUIServiceDataCallback, CMRUpdateUIServiceDataCallback>
{
    _Bool _expeditedOtaAvailable;
    _Bool _isCharging;
    _Bool _isCleaning;
    UITableView *_tableView;
    NSArray *_rowTypes;
    NSString *_robotName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *robotName; // @synthesize robotName=_robotName;
@property(nonatomic) _Bool isCleaning; // @synthesize isCleaning=_isCleaning;
@property(nonatomic) _Bool isCharging; // @synthesize isCharging=_isCharging;
@property(nonatomic) _Bool expeditedOtaAvailable; // @synthesize expeditedOtaAvailable=_expeditedOtaAvailable;
@property(retain, nonatomic) NSArray *rowTypes; // @synthesize rowTypes=_rowTypes;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void)configureAccessibilityForView:(id)arg1 withLabel:(id)arg2 isButton:(_Bool)arg3;
- (void)configureAccessibility;
- (void)updateRobotName:(id)arg1;
- (void)onResolvedMissionStatusChanged:(long long)arg1;
- (void)onMissionUIServiceDataChanged:(id)arg1;
- (void)onSettingsUIServiceDataChanged:(id)arg1;
- (void)onUpdateUIServiceDataChanged:(id)arg1;
- (void)onSoftwareUpdateStatusChanged:(long long)arg1;
- (void)onExpeditedOtaStatusChanged:(long long)arg1;
- (void)commandFooterPressed:(id)arg1;
- (long long)getRowType:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)unregisterSubscribers;
- (void)registerSubscribers;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppearTheFirstTimeOnly;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAssetViewController.h"

#import "CMRHistoryUIServiceDataCallback-Protocol.h"
#import "CMRSettingsUIServiceDataCallback-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CMRHistoryUIServiceData, DynamicCopyHeader, NSArray, NSDateFormatter, NSString, UITableView;

@interface RobotMissionHistoryMapsNotSupportedViewController : BaseAssetViewController <UITableViewDataSource, UITableViewDelegate, CMRHistoryUIServiceDataCallback, CMRSettingsUIServiceDataCallback>
{
    _Bool _isSupportedDirt;
    NSArray *_historyGlossaryItems;
    UITableView *_tableView;
    NSArray *_historyItems;
    NSDateFormatter *_historyItemDateFormatter;
    DynamicCopyHeader *_jobHistoryCopyHeaderView;
    NSString *_robotName;
    CMRHistoryUIServiceData *_historyViewData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSupportedDirt; // @synthesize isSupportedDirt=_isSupportedDirt;
@property(retain, nonatomic) CMRHistoryUIServiceData *historyViewData; // @synthesize historyViewData=_historyViewData;
@property(retain, nonatomic) NSString *robotName; // @synthesize robotName=_robotName;
@property(retain, nonatomic) DynamicCopyHeader *jobHistoryCopyHeaderView; // @synthesize jobHistoryCopyHeaderView=_jobHistoryCopyHeaderView;
@property(retain, nonatomic) NSDateFormatter *historyItemDateFormatter; // @synthesize historyItemDateFormatter=_historyItemDateFormatter;
@property(retain, nonatomic) NSArray *historyItems; // @synthesize historyItems=_historyItems;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)configureAccessibility;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)displayLoadDataAlertAndDismiss:(id)arg1;
- (void)robotStatisticsInfoButtonPressed:(id)arg1;
@property(readonly, nonatomic) NSArray *historyGlossaryItems; // @synthesize historyGlossaryItems=_historyGlossaryItems;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setCellBorder:(id)arg1 atIndexPath:(id)arg2 totalRowCount:(unsigned long long)arg3;
- (id)tableView:(id)arg1 cellForMissionHistoryItem:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupTableView;
- (void)onSettingsUIServiceDataChanged:(id)arg1;
- (void)robotMissionHistoryDataReceived:(id)arg1;
- (void)onHistoryUIServiceDataChanged:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppearTheFirstTimeOnly;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

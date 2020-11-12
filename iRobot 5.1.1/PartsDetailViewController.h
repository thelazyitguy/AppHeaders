//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAssetViewController.h"

#import "CMRMaintenanceUIServiceDataCallback-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class HelpContent, NSArray, NSString, SideAlignButton, UIImage, UITableView;

@interface PartsDetailViewController : BaseAssetViewController <UITableViewDataSource, UITableViewDelegate, CMRMaintenanceUIServiceDataCallback>
{
    _Bool _isResettingStatus;
    _Bool _isResetButtonEnabled;
    NSString *_partCategoryId;
    HelpContent *_helpContent;
    UITableView *_tableView;
    SideAlignButton *_helpButton;
    UIImage *_categoryImage;
    NSArray *_maintenanceParts;
    NSString *_categoryGuideUrl;
    long long _careType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isResetButtonEnabled; // @synthesize isResetButtonEnabled=_isResetButtonEnabled;
@property(nonatomic) _Bool isResettingStatus; // @synthesize isResettingStatus=_isResettingStatus;
@property(nonatomic) long long careType; // @synthesize careType=_careType;
@property(retain, nonatomic) NSString *categoryGuideUrl; // @synthesize categoryGuideUrl=_categoryGuideUrl;
@property(retain, nonatomic) NSArray *maintenanceParts; // @synthesize maintenanceParts=_maintenanceParts;
@property(retain, nonatomic) UIImage *categoryImage; // @synthesize categoryImage=_categoryImage;
@property(retain, nonatomic) SideAlignButton *helpButton; // @synthesize helpButton=_helpButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) HelpContent *helpContent; // @synthesize helpContent=_helpContent;
@property(retain, nonatomic) NSString *partCategoryId; // @synthesize partCategoryId=_partCategoryId;
- (void)configureAccessibility;
- (_Bool)processResetCategoryState:(long long)arg1;
- (void)onMaintenanceUIServiceDataChanged:(id)arg1;
- (void)requestDataForPart:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)helpButtonPressed:(id)arg1;
- (void)handleResetFailed;
- (void)handleResetSuccess;
- (void)resetStatusButtonPressed:(id)arg1;
- (void)guideButtonPressed:(id)arg1;
- (void)buyButtonPressed:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateDetailViewsForSku:(id)arg1;
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

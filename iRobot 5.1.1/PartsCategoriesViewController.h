//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAssetViewController.h"

#import "CMRMaintenanceUIServiceDataCallback-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, SideAlignButton, UIImage, UITableView;

@interface PartsCategoriesViewController : BaseAssetViewController <UITableViewDataSource, UITableViewDelegate, CMRMaintenanceUIServiceDataCallback>
{
    UITableView *_tableView;
    SideAlignButton *_buyPartsButton;
    UIImage *_careMainImage;
    NSArray *_maintenanceCategories;
    NSArray *_maintenancePartV2Categories;
    NSLayoutConstraint *_tableViewBottomAnchorConstraint;
    NSString *_buyPartsUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *buyPartsUrl; // @synthesize buyPartsUrl=_buyPartsUrl;
@property(retain, nonatomic) NSLayoutConstraint *tableViewBottomAnchorConstraint; // @synthesize tableViewBottomAnchorConstraint=_tableViewBottomAnchorConstraint;
@property(retain, nonatomic) NSArray *maintenancePartV2Categories; // @synthesize maintenancePartV2Categories=_maintenancePartV2Categories;
@property(retain, nonatomic) NSArray *maintenanceCategories; // @synthesize maintenanceCategories=_maintenanceCategories;
@property(retain, nonatomic) UIImage *careMainImage; // @synthesize careMainImage=_careMainImage;
@property(retain, nonatomic) SideAlignButton *buyPartsButton; // @synthesize buyPartsButton=_buyPartsButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)configureAccessibility;
- (void)onMaintenanceUIServiceDataChanged:(id)arg1;
- (void)processRetrieveCategoriesState:(long long)arg1;
- (void)showMaintenanceTipCardView;
- (void)buyPartsButtonTapped:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)browsePartsAndAccessoriesButtonPressed;
- (id)configureBrowsePartsAndAccessoriesCell;
- (id)configureMaintenancePartsV2Cell:(id)arg1 forIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)displayErrorLoadingParts;
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


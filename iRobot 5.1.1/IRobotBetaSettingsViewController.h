//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAssetViewController.h"

#import "CMRAccountUIServiceDataCallback-Protocol.h"
#import "CMRUIComponent-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UILabel, UITableView, UIView;
@protocol CMRUIComponentEventDelegate;

@interface IRobotBetaSettingsViewController : BaseAssetViewController <UITableViewDataSource, UITableViewDelegate, CMRAccountUIServiceDataCallback, CMRUIComponent>
{
    id <CMRUIComponentEventDelegate> _eventDelegate;
    UIView *_contentView;
    UITableView *_tableView;
    NSArray *_betaFeatures;
    UILabel *_noBetaFeaturesLabel;
}

+ (id)takeMeToSetupBetaFeatures;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *noBetaFeaturesLabel; // @synthesize noBetaFeaturesLabel=_noBetaFeaturesLabel;
@property(retain, nonatomic) NSArray *betaFeatures; // @synthesize betaFeatures=_betaFeatures;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <CMRUIComponentEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
- (void)configureAccessibility;
- (void)onAccountUIServiceDataChanged:(id)arg1;
- (void)handleLoadingState:(long long)arg1;
- (void)updateBetaFeatureList:(id)arg1;
- (void)showOptOutConfirmation;
- (void)tipDismissButtonTapped;
- (void)showBetaProgramTipView;
- (void)cellTappedWithFeature:(id)arg1;
- (void)featureSwitchTapped:(id)arg1 forFeatureType:(long long)arg2;
- (void)showNeedDowngradeOTAAlert;
- (void)takeMeToSetupSelected:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)cellForFeature:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)cellForFeatureContent:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)threeDotsButtonTapped;
- (void)setupTable;
- (void)toggleNoBetaFeaturesLabel:(_Bool)arg1;
- (void)setUpBetaCompleteLabel;
- (void)configureNavBarThreeDots;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppearTheFirstTimeOnly;
@property(readonly, nonatomic) NSArray *betaFeatureCellContentArray;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

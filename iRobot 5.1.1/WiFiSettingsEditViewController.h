//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "Roomba900SetupAdvancedWiFiSettingsViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DynamicTextLabelCell, DynamicTextOnlySectionTitleHeader, NSMutableArray, NSString, NetworkConnectInfo, SetupSSIDCell, SetupSubHeaderCell, UIButton, UILabel, UITableView, UITableViewCell;
@protocol WiFiSettingsEditViewControllerDelegate;

@interface WiFiSettingsEditViewController : BaseViewController <UITableViewDataSource, UITableViewDelegate, Roomba900SetupAdvancedWiFiSettingsViewControllerDelegate>
{
    _Bool _advancedWiFiSettingsEnabled;
    _Bool _useDHCP;
    _Bool _macAddressFilter;
    _Bool _errorMessageCellHidden;
    UIButton *_commandButton;
    id <WiFiSettingsEditViewControllerDelegate> _delegate;
    UITableView *_tableView;
    DynamicTextOnlySectionTitleHeader *_titleHeader;
    SetupSubHeaderCell *_subHeaderCell;
    DynamicTextLabelCell *_errorMessageCell;
    SetupSSIDCell *_SSIDCell;
    UITableViewCell *_advancedWiFiSettingsCell;
    NSMutableArray *_tableViewCells;
    NSString *_staticIPAddress;
    NSString *_staticSubnetMask;
    NSString *_staticGatewayMask;
    NSString *_staticDNS1Mask;
    NSString *_staticDNS2Mask;
    NetworkConnectInfo *_wiFiInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NetworkConnectInfo *wiFiInfo; // @synthesize wiFiInfo=_wiFiInfo;
@property(nonatomic) _Bool errorMessageCellHidden; // @synthesize errorMessageCellHidden=_errorMessageCellHidden;
@property(nonatomic) _Bool macAddressFilter; // @synthesize macAddressFilter=_macAddressFilter;
@property(nonatomic) _Bool useDHCP; // @synthesize useDHCP=_useDHCP;
@property(retain, nonatomic) NSString *staticDNS2Mask; // @synthesize staticDNS2Mask=_staticDNS2Mask;
@property(retain, nonatomic) NSString *staticDNS1Mask; // @synthesize staticDNS1Mask=_staticDNS1Mask;
@property(retain, nonatomic) NSString *staticGatewayMask; // @synthesize staticGatewayMask=_staticGatewayMask;
@property(retain, nonatomic) NSString *staticSubnetMask; // @synthesize staticSubnetMask=_staticSubnetMask;
@property(retain, nonatomic) NSString *staticIPAddress; // @synthesize staticIPAddress=_staticIPAddress;
@property(retain, nonatomic) NSMutableArray *tableViewCells; // @synthesize tableViewCells=_tableViewCells;
@property(retain, nonatomic) UITableViewCell *advancedWiFiSettingsCell; // @synthesize advancedWiFiSettingsCell=_advancedWiFiSettingsCell;
@property(retain, nonatomic) SetupSSIDCell *SSIDCell; // @synthesize SSIDCell=_SSIDCell;
@property(retain, nonatomic) DynamicTextLabelCell *errorMessageCell; // @synthesize errorMessageCell=_errorMessageCell;
@property(retain, nonatomic) SetupSubHeaderCell *subHeaderCell; // @synthesize subHeaderCell=_subHeaderCell;
@property(retain, nonatomic) DynamicTextOnlySectionTitleHeader *titleHeader; // @synthesize titleHeader=_titleHeader;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WiFiSettingsEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIButton *commandButton; // @synthesize commandButton=_commandButton;
@property(nonatomic) _Bool advancedWiFiSettingsEnabled; // @synthesize advancedWiFiSettingsEnabled=_advancedWiFiSettingsEnabled;
- (void)configureAccessibility;
- (void)setWifiInfo:(id)arg1;
- (id)generateWifiInfoFromUserInput;
- (void)goToAdvancedWiFiSettings;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)reloadTableViewData;
- (void)setupTableView;
- (void)registerTableViewComponents;
- (void)advancedWiFiSettingsViewController:(id)arg1 didFinishWithWiFiInfo:(id)arg2;
@property(readonly, nonatomic) __weak UILabel *settingsTitleLabel;
- (void)commandButtonPressed;
- (void)updateCommandButton;
- (id)currentWiFiNetwork;
- (void)updateWiFiInfo;
- (void)networkReachabilityDidChange;
- (void)viewWillAppear:(_Bool)arg1;
- (void)configureCommandButton;
- (void)viewDidAppearTheFirstTimeOnly;
- (void)viewDidLoad;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


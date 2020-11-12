//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseTableViewController.h"

@class UILabel, UITableViewCell;

@interface AccountViewController : BaseTableViewController
{
    UITableViewCell *_manageAccountCell;
    UILabel *_avatarLabel;
    UILabel *_nameLabel;
    UILabel *_emailLabel;
    UITableViewCell *_notificationSettingsCell;
    UILabel *_notificationSettingsLabel;
    UILabel *_loginCellLabel;
    UITableViewCell *_loginCell;
    UITableViewCell *_privacyCell;
    UILabel *_privacyCellLabel;
    UITableViewCell *_connnectedDevicesCell;
    UILabel *_connectedDevicesLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *connectedDevicesLabel; // @synthesize connectedDevicesLabel=_connectedDevicesLabel;
@property(nonatomic) __weak UITableViewCell *connnectedDevicesCell; // @synthesize connnectedDevicesCell=_connnectedDevicesCell;
@property(nonatomic) __weak UILabel *privacyCellLabel; // @synthesize privacyCellLabel=_privacyCellLabel;
@property(nonatomic) __weak UITableViewCell *privacyCell; // @synthesize privacyCell=_privacyCell;
@property(nonatomic) __weak UITableViewCell *loginCell; // @synthesize loginCell=_loginCell;
@property(nonatomic) __weak UILabel *loginCellLabel; // @synthesize loginCellLabel=_loginCellLabel;
@property(nonatomic) __weak UILabel *notificationSettingsLabel; // @synthesize notificationSettingsLabel=_notificationSettingsLabel;
@property(nonatomic) __weak UITableViewCell *notificationSettingsCell; // @synthesize notificationSettingsCell=_notificationSettingsCell;
@property(nonatomic) __weak UILabel *emailLabel; // @synthesize emailLabel=_emailLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UILabel *avatarLabel; // @synthesize avatarLabel=_avatarLabel;
@property(nonatomic) __weak UITableViewCell *manageAccountCell; // @synthesize manageAccountCell=_manageAccountCell;
- (void)configureAccessibility;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)showConnectedDevices;
- (void)showPrivacy;
- (void)showLogin;
- (void)showNotificationSettings;
- (void)showAccountManagement;
- (void)accountErrorEventReceived:(id)arg1;
- (void)onAccountInfoUpdated:(id)arg1;
- (void)refreshTableView;
- (void)configureTableView;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppearTheFirstTimeOnly;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsViewController.h"

#import "SPTGaiaConnectObserver-Protocol.h"
#import "SPTProductStateObserver-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSObject, NSString, SPTAuthLegacySession, SettingsErrorHeaderView;
@protocol SPTGaiaConnectAPI, SPTLoginStateController;

@interface RootSettingsViewController : SettingsViewController <SPTGaiaConnectObserver, SPTProductStateObserver, UITableViewDelegate>
{
    _Bool _isPlayingRemotely;
    _Bool _isAdsEnabled;
    _Bool _isLanguageOnboardingEnabled;
    _Bool _explicitContentSettingsEnabled;
    SettingsErrorHeaderView *_errorHeaderView;
    NSObject<SPTLoginStateController> *_loginStateController;
    NSMutableArray *_settingsSectionsForConnectObserving;
    NSArray *_settingsSectionsForLocalPlayback;
    id <SPTGaiaConnectAPI> _connectManager;
    long long _disabledSettingsIndex;
    SPTAuthLegacySession *_session;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SPTAuthLegacySession *session; // @synthesize session=_session;
@property(nonatomic, getter=isExplicitContentSettingsEnabled) _Bool explicitContentSettingsEnabled; // @synthesize explicitContentSettingsEnabled=_explicitContentSettingsEnabled;
@property(nonatomic) _Bool isLanguageOnboardingEnabled; // @synthesize isLanguageOnboardingEnabled=_isLanguageOnboardingEnabled;
@property(nonatomic) _Bool isAdsEnabled; // @synthesize isAdsEnabled=_isAdsEnabled;
@property(nonatomic) long long disabledSettingsIndex; // @synthesize disabledSettingsIndex=_disabledSettingsIndex;
@property(nonatomic) _Bool isPlayingRemotely; // @synthesize isPlayingRemotely=_isPlayingRemotely;
@property(retain, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(retain, nonatomic) NSArray *settingsSectionsForLocalPlayback; // @synthesize settingsSectionsForLocalPlayback=_settingsSectionsForLocalPlayback;
@property(retain, nonatomic) NSMutableArray *settingsSectionsForConnectObserving; // @synthesize settingsSectionsForConnectObserving=_settingsSectionsForConnectObserving;
@property(nonatomic) __weak NSObject<SPTLoginStateController> *loginStateController; // @synthesize loginStateController=_loginStateController;
@property(retain, nonatomic) SettingsErrorHeaderView *errorHeaderView; // @synthesize errorHeaderView=_errorHeaderView;
- (_Bool)shouldShowLanguageOnboardingRow;
- (_Bool)isLanguageOnboardingRow:(id)arg1;
- (void)popAdsViewController;
- (_Bool)shouldShowAdsRow;
- (_Bool)isAdsRow:(id)arg1;
- (_Bool)shouldShowECFRow;
- (_Bool)isECFRow:(id)arg1;
- (_Bool)isCastDeviceActive;
- (void)popViewControllerWithURL:(id)arg1;
- (_Bool)isSectionURI:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldDisableRowWithTitle:(id)arg1;
- (_Bool)shouldHideRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)rebuildSettingsSections;
- (void)viewWillAppear:(_Bool)arg1;
- (void)lastConnectionErrorChanged;
- (_Bool)isVisible;
- (void)viewDidLoad;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)connectActiveDeviceDidChange:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 loginStateController:(id)arg2 connectManager:(id)arg3 isLanguageOnboardingEnabled:(_Bool)arg4 explicitContentSettingsEnabled:(_Bool)arg5 productState:(id)arg6 session:(id)arg7 navigationItem:(id)arg8 navigationRouter:(id)arg9 linkDispatcher:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


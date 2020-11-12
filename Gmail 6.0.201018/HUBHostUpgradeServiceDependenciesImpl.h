//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBHostUpgradeServiceDependencies-Protocol.h"

@class GOOAccountScopedProvider, GOOProvider, NSString;
@protocol GSCAccountsService, GSCNavigationService, HUBAppConfigurationService, HUBAppStateManager, HUBColorScheme, HUBUpgradeFeatureService, HUBUpgradeFeatureServiceForMigration;

@interface HUBHostUpgradeServiceDependenciesImpl : NSObject <HUBHostUpgradeServiceDependencies>
{
    GOOProvider *_accountsServiceProvider;
    GOOProvider *_appConfigurationServiceProvider;
    GOOProvider *_appStateManagerProvider;
    GOOAccountScopedProvider *_callingServiceProvider;
    GOOProvider *_colorSchemeProvider;
    GOOProvider *_navigationServiceProvider;
    GOOProvider *_upgradeFeatureServiceForMigrationProvider;
    GOOProvider *_upgradeFeatureServiceProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOProvider *upgradeFeatureServiceProvider; // @synthesize upgradeFeatureServiceProvider=_upgradeFeatureServiceProvider;
@property(readonly, nonatomic) GOOProvider *upgradeFeatureServiceForMigrationProvider; // @synthesize upgradeFeatureServiceForMigrationProvider=_upgradeFeatureServiceForMigrationProvider;
@property(readonly, nonatomic) GOOProvider *navigationServiceProvider; // @synthesize navigationServiceProvider=_navigationServiceProvider;
@property(readonly, nonatomic) GOOProvider *colorSchemeProvider; // @synthesize colorSchemeProvider=_colorSchemeProvider;
@property(readonly, nonatomic) GOOAccountScopedProvider *callingServiceProvider; // @synthesize callingServiceProvider=_callingServiceProvider;
@property(readonly, nonatomic) GOOProvider *appStateManagerProvider; // @synthesize appStateManagerProvider=_appStateManagerProvider;
@property(readonly, nonatomic) GOOProvider *appConfigurationServiceProvider; // @synthesize appConfigurationServiceProvider=_appConfigurationServiceProvider;
@property(readonly, nonatomic) GOOProvider *accountsServiceProvider; // @synthesize accountsServiceProvider=_accountsServiceProvider;
@property(readonly, nonatomic) id <HUBUpgradeFeatureService> upgradeFeatureService;
@property(readonly, nonatomic) id <HUBUpgradeFeatureServiceForMigration> upgradeFeatureServiceForMigration;
@property(readonly, nonatomic) id <GSCNavigationService> navigationService;
@property(readonly, nonatomic) id <HUBColorScheme> colorScheme;
- (id)callingServiceWithAccountID:(id)arg1;
@property(readonly, nonatomic) id <HUBAppStateManager> appStateManager;
@property(readonly, nonatomic) id <HUBAppConfigurationService> appConfigurationService;
@property(readonly, nonatomic) id <GSCAccountsService> accountsService;
- (id)initWithAccountsServiceProvider:(id)arg1 appConfigurationServiceProvider:(id)arg2 appStateManagerProvider:(id)arg3 callingServiceProvider:(id)arg4 colorSchemeProvider:(id)arg5 navigationServiceProvider:(id)arg6 upgradeFeatureServiceForMigrationProvider:(id)arg7 upgradeFeatureServiceProvider:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

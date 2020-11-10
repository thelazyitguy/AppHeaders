//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GRWInstalledAppsProvider-Protocol.h>

@class GRWApp, GRWAppsListFetcher, GRWProductsDataSource, GRWUserAccounts, NSArray, NSDictionary, NSString;

@interface GRWProductsManager : NSObject <GRWInstalledAppsProvider>
{
    GRWUserAccounts *_userAccounts;
    NSArray *_googleCatalogAndSystemApps;
    NSArray *_googleCatalogApps;
    GRWAppsListFetcher *_appsListFetcher;
    GRWProductsDataSource *_productsDataSource;
    NSDictionary *_appCache;
}

+ (id)setupWithAPIKey:(id)arg1 userAccounts:(id)arg2;
+ (void)setSharedInstanceForTesting:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *appCache; // @synthesize appCache=_appCache;
@property(retain, nonatomic) GRWProductsDataSource *productsDataSource; // @synthesize productsDataSource=_productsDataSource;
@property(readonly, nonatomic) GRWAppsListFetcher *appsListFetcher; // @synthesize appsListFetcher=_appsListFetcher;
@property(copy, nonatomic) NSArray *googleCatalogApps; // @synthesize googleCatalogApps=_googleCatalogApps;
@property(copy, nonatomic) NSArray *googleCatalogAndSystemApps; // @synthesize googleCatalogAndSystemApps=_googleCatalogAndSystemApps;
@property(retain, nonatomic) GRWUserAccounts *userAccounts; // @synthesize userAccounts=_userAccounts;
- (void)postUpdatedProductsNotification;
- (void)handleDidEnterBackgroundForegroundNotification:(id)arg1;
- (void)registerNotifications;
- (id)knownAppsForURL:(id)arg1;
- (id)appsWithBundleIDs:(id)arg1;
- (id)appWithBundleID:(id)arg1;
- (void)installedBundleIDsWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *installedBundleIDs;
- (void)updateDataSourceWithInitialConfigurationBlock:(CDUnknownBlockType)arg1;
- (void)productsDataSourceWithCompletion:(CDUnknownBlockType)arg1;
- (void)configureProductsDataSourceWithApps:(id)arg1 webProducts:(id)arg2;
- (void)syncFinishedWithApps:(id)arg1 webProducts:(id)arg2;
- (id)init;
- (id)installedAppsForIntentType:(int)arg1;
- (id)installedGoogleAppsForIntentType:(int)arg1;
- (id)systemAppForIntentType:(int)arg1;
@property(readonly, nonatomic) GRWApp *appleCalendarApp;
@property(readonly, nonatomic) GRWApp *systemMailApp;
@property(readonly, nonatomic) GRWApp *appleMapsApp;
@property(readonly, nonatomic) GRWApp *googleCalendarApp;
@property(readonly, nonatomic) GRWApp *googleSearchApp;
@property(readonly, nonatomic) GRWApp *wazeApp;
@property(readonly, nonatomic) GRWApp *driveApp;
@property(readonly, nonatomic) GRWApp *slidesApp;
@property(readonly, nonatomic) GRWApp *sheetsApp;
@property(readonly, nonatomic) GRWApp *docsApp;
@property(readonly, nonatomic) GRWApp *gmailApp;
@property(readonly, nonatomic) GRWApp *googleMapsApp;
@property(readonly, nonatomic) GRWApp *systemDefaultBrowser;
@property(readonly, nonatomic) GRWApp *safariViewControllerApp;
@property(readonly, nonatomic) GRWApp *safariApp;
@property(readonly, nonatomic) GRWApp *chromeApp;
- (void)openURL:(id)arg1 inApp:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

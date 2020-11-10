//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RootViewControllerDelegate-Protocol.h"

@class AccountManager, MainTabBarController, NSDate, NSString, NSURL, RootViewController, _TtC6Reddit24AnonymousBrowsingManager;

@interface AppFlowCoordinator : NSObject <RootViewControllerDelegate>
{
    AccountManager *_accountManager;
    _TtC6Reddit24AnonymousBrowsingManager *_anonymousBrowsingManager;
    RootViewController *_rootViewController;
    NSURL *_scheduledURL;
    NSURL *_pendingEmailVerificationURL;
    NSURL *_pendingAnonymousBrowsingXPromoURL;
    NSDate *_configUpdatedTime;
    NSDate *_navigatedToURLTime;
}

+ (void)setupWithAccountManager:(id)arg1 anonymousBrowsingManager:(id)arg2 rootViewController:(id)arg3;
+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *navigatedToURLTime; // @synthesize navigatedToURLTime=_navigatedToURLTime;
@property(retain, nonatomic) NSDate *configUpdatedTime; // @synthesize configUpdatedTime=_configUpdatedTime;
@property(copy, nonatomic) NSURL *pendingAnonymousBrowsingXPromoURL; // @synthesize pendingAnonymousBrowsingXPromoURL=_pendingAnonymousBrowsingXPromoURL;
@property(copy, nonatomic) NSURL *pendingEmailVerificationURL; // @synthesize pendingEmailVerificationURL=_pendingEmailVerificationURL;
@property(copy, nonatomic) NSURL *scheduledURL; // @synthesize scheduledURL=_scheduledURL;
@property(readonly, nonatomic) RootViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(readonly, nonatomic) _TtC6Reddit24AnonymousBrowsingManager *anonymousBrowsingManager; // @synthesize anonymousBrowsingManager=_anonymousBrowsingManager;
@property(readonly, nonatomic) AccountManager *accountManager; // @synthesize accountManager=_accountManager;
- (void)handleEmailVerificationURL:(id)arg1 service:(id)arg2;
- (void)navigateToURLIfPossible:(id)arg1;
- (void)accountManagerDidChangeCurrentService:(id)arg1;
- (void)switchServiceAndNavigateToPushNotificationURL:(id)arg1 originalService:(id)arg2 targetService:(id)arg3;
- (void)pushNotificationWasTapped:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)rootViewControllerDidInstallNewMainTabBar;
- (void)refreshConfigWithService:(id)arg1;
- (void)scheduleNavigatingToURL:(id)arg1;
- (void)scheduleNavigatingToBranchURL:(id)arg1 isFirstLaunch:(_Bool)arg2 isMatchGuaranteed:(_Bool)arg3;
@property(readonly, nonatomic) MainTabBarController *mainTabController;
- (id)initWithAccountManager:(id)arg1 anonymousBrowsingManager:(id)arg2 rootViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


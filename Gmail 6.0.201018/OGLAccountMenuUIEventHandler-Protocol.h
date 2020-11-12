//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSIndexPath, OGLGM2AccountSelectorAccountItem, UIViewController;
@protocol OGLAccount, OGLTheming;

@protocol OGLAccountMenuUIEventHandler
- (void)toggleAccount:(id <OGLAccount>)arg1 on:(_Bool)arg2 markAsPrimaryAccount:(_Bool)arg3 callback:(void (^)(_Bool))arg4;
- (void)removeAccount:(id <OGLAccount>)arg1 completion:(void (^)(_Bool))arg2;
- (void)didSelectSameAccount;
- (void)manageAccountsDoneButtonDidTapWithOriginallySelectedAccounts:(NSArray *)arg1 selectedAccounts:(NSArray *)arg2;
- (void)performRemoveAnAccountSignoutWithPreviousAccount:(id <OGLAccount>)arg1;
- (void)invokeCardAction:(void (^)(void (^)(void), UIViewController *))arg1 withPresentingController:(UIViewController *)arg2;
- (void)invokeActionForCommonItem:(unsigned long long)arg1;
- (void)toggleIncognitoMode:(_Bool)arg1;
- (void)performSingleAppSignOut;
- (void)switchToAccount:(OGLGM2AccountSelectorAccountItem *)arg1;
- (void)notifyAccountMenuViewControllerWillDisappear;
- (void)reopenAccountMenuInFullscreen:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)dismissOrPopViewControllerWithCompletion:(void (^)(_Bool))arg1;
- (void)dismissOrPopViewController;
- (void)displayDidRemoveAccountSnackbar:(id <OGLAccount>)arg1 isPrimaryAccount:(_Bool)arg2 oglTheme:(id <OGLTheming>)arg3;
- (void)displayRemoveAccountDialog:(id <OGLAccount>)arg1 completion:(void (^)(_Bool))arg2;
- (void)performCustomActionType:(long long)arg1 indexPath:(NSIndexPath *)arg2 accountMenuViewController:(UIViewController *)arg3;
- (void)displayDefaultAccountView;
- (void)displayManageAccountsView;
- (void)presentAsmScreen:(long long)arg1 forAccount:(id <OGLAccount>)arg2;
- (void)displayMyAccountViewWithTheme:(id <OGLTheming>)arg1 completion:(void (^)(void))arg2;
- (void)displaySignInFlowAndSelect:(_Bool)arg1 accountToReauthenticate:(id <OGLAccount>)arg2 completion:(void (^)(id <OGLAccount>))arg3;
@end

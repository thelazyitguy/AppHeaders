//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASMModalActivityView;

@interface ASMMAScreenController : NSObject
{
    ASMModalActivityView *_loadingIndicator;
}

+ (id)delegatedAccountHomeScreenURLForAccountWithID:(id)arg1 params:(id)arg2;
+ (id)sharedInstance;
+ (void)openScreen:(long long)arg1 viewController:(id)arg2 animated:(_Bool)arg3 context:(id)arg4 parentScreenID:(id)arg5;
+ (id)presentScreenFromViewController:(id)arg1 animated:(_Bool)arg2 params:(id)arg3 SSOService:(id)arg4;
+ (id)pushScreenToNavigationController:(id)arg1 animated:(_Bool)arg2 params:(id)arg3 SSOService:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) ASMModalActivityView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
- (void)openScreenViewController:(id)arg1 parentViewController:(id)arg2 context:(id)arg3 session:(id)arg4 animated:(_Bool)arg5;
- (void)openBrowserAlternative:(id)arg1 viewController:(id)arg2 context:(id)arg3 session:(id)arg4;
- (void)openWebviewAlternative:(id)arg1 viewController:(id)arg2 context:(id)arg3 session:(id)arg4 animated:(_Bool)arg5;
- (void)openAlternative:(id)arg1 screenID:(long long)arg2 viewController:(id)arg3 animated:(_Bool)arg4 context:(id)arg5 session:(id)arg6 loadSource:(long long)arg7 parentScreenID:(id)arg8;
- (void)openScreen:(long long)arg1 viewController:(id)arg2 animated:(_Bool)arg3 context:(id)arg4 session:(id)arg5 parentScreenID:(id)arg6;
- (void)openMyAccountScreenWithParentViewController:(id)arg1 animated:(_Bool)arg2 context:(id)arg3 session:(id)arg4 removeAccountCallback:(CDUnknownBlockType)arg5 singleAppSignOutCallback:(CDUnknownBlockType)arg6;
- (void)openURL:(id)arg1 fromViewController:(id)arg2 options:(id)arg3 identity:(id)arg4 ssoService:(id)arg5 session:(id)arg6;
- (id)languageSpecificURLForString:(id)arg1;
- (void)openDefaultTermsOfServiceScreenFromViewController:(id)arg1 options:(id)arg2 session:(id)arg3;
- (void)openDefaultPrivacyPolicyScreenFromViewController:(id)arg1 options:(id)arg2 session:(id)arg3;
- (id)makeContextFromParams:(id)arg1 SSOService:(id)arg2;
- (void)dismissLoadingIndicator:(id)arg1;
- (void)dismissLoadingIndicator;
- (id)init;

@end


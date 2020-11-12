//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "GBTAccountTypeSelectorDelegate-Protocol.h"
#import "GBTAppleIDPromptViewControllerDelegate-Protocol.h"
#import "GBTExternalOAuthLoginViewControllerDelegate-Protocol.h"
#import "GBTGmailifyChoiceViewControllerDelegate-Protocol.h"
#import "GBTGmailifyGoogleAccountSelectorViewControllerDelegate-Protocol.h"
#import "GBTGmailifyPasswordViewControllerDelegate-Protocol.h"
#import "GBTGmailifySuccessViewControllerDelegate-Protocol.h"
#import "GBTGmailifyWebViewControllerDelegate-Protocol.h"
#import "GBTIMAPAccountAddedConfirmationViewControllerDelegate-Protocol.h"
#import "GBTIMAPEmailEntryViewControllerDelegate-Protocol.h"
#import "GBTIMAPServerSettingsViewControllerDelegate-Protocol.h"

@class ExternalOAuthServiceProvider, GBTGmailifyPasswordAuthInfo, GBTImapProvider, GBTMailServerSettings, GBTVisualElement, GPCPromise, NSString, OGLAccountServiceAddAccountParams, OIDAuthState;
@protocol GBTAddAccountNavigationControllerDelegate;

@interface GBTAddAccountNavigationController : UINavigationController <GBTAppleIDPromptViewControllerDelegate, GBTAccountTypeSelectorDelegate, GBTExternalOAuthLoginViewControllerDelegate, GBTGmailifyChoiceViewControllerDelegate, GBTGmailifyGoogleAccountSelectorViewControllerDelegate, GBTGmailifyPasswordViewControllerDelegate, GBTGmailifySuccessViewControllerDelegate, GBTGmailifyWebViewControllerDelegate, GBTIMAPAccountAddedConfirmationViewControllerDelegate, GBTIMAPEmailEntryViewControllerDelegate, GBTIMAPServerSettingsViewControllerDelegate>
{
    long long _accountType;
    GPCPromise *_asyncOperation;
    OIDAuthState *_authState;
    id <GBTAddAccountNavigationControllerDelegate> _delegate;
    _Bool _gmailifyAccepted;
    NSString *_gmailifyGoogleAccount;
    CDUnknownBlockType _imapCompletion;
    GBTMailServerSettings *_imapSettings;
    ExternalOAuthServiceProvider *_oauthServiceProvider;
    GBTGmailifyPasswordAuthInfo *_passwordAuthInfo;
    GBTMailServerSettings *_smtpSettings;
    GBTImapProvider *_provider;
    OGLAccountServiceAddAccountParams *_addAccountParams;
    CDUnknownBlockType _callback;
    NSString *_emailAddress;
}

+ (id)validateImapOptions:(id)arg1;
+ (id)validateSmtpOptions:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) OGLAccountServiceAddAccountParams *addAccountParams; // @synthesize addAccountParams=_addAccountParams;
- (void)oAuthValidationFailedWithError:(id)arg1;
- (id)errorVisualElementForSettingsViewController:(id)arg1;
- (void)manualValidationFailedWithResult:(id)arg1;
- (id)findViewControllerWithClass:(Class)arg1;
- (int)loggingProvider;
- (void)returnToAccountTypeSelectorWithError:(id)arg1 withType:(int)arg2;
- (id)backServerSettingsViewController;
- (id)backViewController;
- (_Bool)isDuplicateEmailAddress:(id)arg1;
- (id)errorMessageForPairingStatusCode:(int)arg1;
- (id)errorMessageForResult:(id)arg1;
- (void)validateSMTPSettings:(id)arg1;
- (void)validateIMAPSettings:(id)arg1;
- (id)smtpValidationPromiseForSettings:(id)arg1;
- (id)imapValidationPromiseForSettings:(id)arg1;
- (id)validateOAuth;
- (void)showValidatingOAuthWithReplaceController:(_Bool)arg1;
- (id)fetchTokenWithAuthorizationRequest:(id)arg1 parameters:(id)arg2;
- (id)smtpSettingsFromEmail:(id)arg1 authState:(id)arg2 oAuthServiceProvider:(id)arg3;
- (id)imapSettingsFromEmail:(id)arg1 authState:(id)arg2 oAuthServiceProvider:(id)arg3;
- (unsigned long long)OAuthProviderForAccountType:(long long)arg1;
- (id)defaultDomainForAccountType:(long long)arg1;
- (id)validatingProgressViewControllerWithTag:(CDStruct_a9c8ee48)arg1 parentVisualElement:(id)arg2;
- (id)validatingProgressViewControllerWithTag:(CDStruct_a9c8ee48)arg1;
- (void)launchGmailify;
- (void)launchSignInWithReplace:(_Bool)arg1 allowOAuth:(_Bool)arg2;
- (void)showGmailifySuccess;
- (void)showGmailifyGoogleAccountSelector;
- (void)showEmailEntryWithReplaceController:(_Bool)arg1;
- (void)showEmailEntry;
- (id)progressViewControllerWithTitle:(unsigned long long)arg1 operation:(unsigned long long)arg2 visualElementTag:(CDStruct_a9c8ee48)arg3 parentVisualElement:(id)arg4;
- (id)progressViewControllerWithTitle:(unsigned long long)arg1 operation:(unsigned long long)arg2 visualElementTag:(CDStruct_a9c8ee48)arg3;
@property(readonly, nonatomic) GBTVisualElement *backVisualElement;
@property(readonly, nonatomic) GBTVisualElement *topVisualElement;
- (void)viewController:(id)arg1 didConfirmWithDisplayName:(id)arg2;
- (void)loginViewController:(id)arg1 login:(id)arg2 failedWithError:(id)arg3;
- (void)didGetEmailAndAuthState;
- (void)loginViewController:(id)arg1 didLoginWithAuthorizationRequest:(id)arg2 parameters:(id)arg3;
- (void)viewController:(id)arg1 didEnterServerSettings:(id)arg2 forSMTP:(_Bool)arg3;
- (void)viewController:(id)arg1 didConfirmWithDefaultSendAddress:(id)arg2;
- (void)viewController:(id)arg1 didEnterPassword:(id)arg2;
- (void)viewController:(id)arg1 failedWithError:(id)arg2;
- (void)viewController:(id)arg1 linkFailedWithStatusCode:(int)arg2;
- (void)linkCompletedWithViewController:(id)arg1;
- (void)showTermsOfServiceFromViewController:(id)arg1;
- (void)viewController:(id)arg1 requestAddGoogleAccountWithCallback:(CDUnknownBlockType)arg2;
- (void)viewController:(id)arg1 didSelectGoogleAccount:(id)arg2;
- (void)gmailifyChoiceViewControllerDidOpenHelp;
- (void)viewController:(id)arg1 didChooseGmailify:(_Bool)arg2;
- (void)launchGmailifyCheckForDomain:(id)arg1 replaceController:(_Bool)arg2;
- (void)viewController:(id)arg1 emailAddressEntered:(id)arg2;
- (void)viewController:(id)arg1 didSelectAccountType:(long long)arg2;
- (void)viewControllerShouldGoBack:(id)arg1;
- (void)viewControllerShouldGoForward:(id)arg1;
- (void)startAddAccountWithCallback:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1;

@end

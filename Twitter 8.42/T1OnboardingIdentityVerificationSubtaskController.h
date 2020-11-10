//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingSubtaskController.h>

#import <T1Twitter/T1EnterVerificationCodeViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1OnboardingErrorHandler-Protocol.h>
#import <T1Twitter/T1OnboardingIdentityVerificationProviderDelegate-Protocol.h>

@class NSString, T1EnterVerificationCodeViewController, T1OnboardingURLProtocolHandler, TFSTwitterOnboardingIdentityVerificationSubtask, TFSTwitterOnboardingIdentityVerificationSubtaskState;
@protocol T1OnboardingIdentityVerificationProvider, T1OnboardingSubtaskControllerDelegate;

@interface T1OnboardingIdentityVerificationSubtaskController : T1OnboardingSubtaskController <T1EnterVerificationCodeViewControllerDelegate, T1OnboardingErrorHandler, T1OnboardingIdentityVerificationProviderDelegate>
{
    TFSTwitterOnboardingIdentityVerificationSubtask *_subtask;
    TFSTwitterOnboardingIdentityVerificationSubtaskState *_state;
    id <T1OnboardingSubtaskControllerDelegate> _delegate;
    id <T1OnboardingIdentityVerificationProvider> _provider;
    T1EnterVerificationCodeViewController *_enterVerificationCodeViewController;
    T1OnboardingURLProtocolHandler *_urlHandler;
    NSString *_flowToken;
}

- (void).cxx_destruct;
- (id)subtaskDataProvider;
- (void)handleError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enterVerificationCodeViewControllerViewDidDisappear:(id)arg1;
- (void)enterVerificationCodeViewControllerViewDidAppear:(id)arg1;
- (void)enterVerificationCodeViewController:(id)arg1 codeRequestTimerDidFire:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (double)enterVerificationCodeViewControllerCodeRequestMaxTimeoutInterval:(id)arg1;
- (double)enterVerificationCodeViewControllerCodeRequestTimerInterval:(id)arg1;
- (void)enterVerificationCodeViewController:(id)arg1 didTapActiveTextRange:(id)arg2 inRect:(struct CGRect)arg3;
- (void)enterVerificationCodeViewControllerDidEnterCode:(id)arg1;
- (id)private_errorMessageForPinVerificationError:(id)arg1;
- (void)private_showErrorAlertForError:(id)arg1;
- (void)private_beginOrRestartVerificationWithNavigationContext:(id)arg1 resend:(_Bool)arg2;
- (void)private_showPinVerificationCodeEntryForm;
- (_Bool)private_isAlreadyVerifiedWithError:(id)arg1;
- (void)private_clearPinVerificationCode;
- (void)restartWithNavigationContext:(id)arg1 navigationLink:(id)arg2;
- (void)startWithNavigationContext:(id)arg1 navigationLink:(id)arg2;
- (void)dealloc;
- (id)initWithSubtask:(id)arg1 flowToken:(id)arg2 state:(id)arg3 provider:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


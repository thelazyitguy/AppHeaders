//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GAZAppInfo, GAZDateProvider, GAZPrompt, GAZSelectorStrings, GAZService, GAZTxResponse, NSTimer;
@protocol GAZPromptStateMachineTarget;

@interface GAZPromptStateMachine : NSObject
{
    GAZService *_service;
    GAZAppInfo *_appInfo;
    GAZDateProvider *_dateProvider;
    NSTimer *_expirationTimer;
    long long _state;
    GAZSelectorStrings *_approveSelectionStrings;
    GAZSelectorStrings *_denySelectionStrings;
    _Bool _requiresBiometrics;
    _Bool _triggered;
    int _device;
    id <GAZPromptStateMachineTarget> _target;
    GAZPrompt *_prompt;
    GAZTxResponse *_transactionResponse;
}

+ (unsigned long long)millisSince1970ForDate:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int device; // @synthesize device=_device;
@property(nonatomic) _Bool triggered; // @synthesize triggered=_triggered;
@property(readonly, nonatomic) GAZTxResponse *transactionResponse; // @synthesize transactionResponse=_transactionResponse;
@property(readonly, nonatomic) GAZPrompt *prompt; // @synthesize prompt=_prompt;
@property(nonatomic) __weak id <GAZPromptStateMachineTarget> target; // @synthesize target=_target;
- (id)screenlockState;
- (void)addUIEventAction:(int)arg1 causesReply:(_Bool)arg2;
- (void)invalidTransition:(SEL)arg1;
- (void)expiredTimerDidFire:(id)arg1;
- (void)transitionToApprovalCompleted;
- (void)complete;
- (void)addInitialTransactionResponseData;
- (void)serviceDidReceiveCancel:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)willRespondImmediately;
@property(readonly, nonatomic) _Bool finished;
- (void)notSupported;
- (void)expire;
- (void)dismissWithAction:(int)arg1;
- (void)dismiss;
- (void)deny;
- (void)notificationTap;
- (void)enterPin:(long long)arg1;
- (void)biometricsUnavailable;
- (void)cancelBiometricAuthenticaion;
- (void)passBiometricAuthentication;
- (void)approve;
- (void)start;
- (id)initWithPrompt:(id)arg1 authzenService:(id)arg2;

@end

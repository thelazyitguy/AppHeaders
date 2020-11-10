//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/OGLAnalyticsProtocol-Protocol.h>

@class NSArray, NSString;
@protocol OGLAnalyticsAccountMenuDelegate, OGLAnalyticsAccountParticleDelegate, OGLAnalyticsAccountParticleDiscDelegate, OGLAnalyticsAccountSnackbarDelegate, OGLAnalyticsExpressSignInDelegate, OGLAnalyticsInternalDelegate, OGLAnalyticsPrivacyPolicyToSDelegate;

@interface OGLAnalyticsClearcut : NSObject <OGLAnalyticsProtocol>
{
    _Bool _alwaysLogAnonymously;
    id <OGLAnalyticsInternalDelegate> _delegate;
    NSArray *_experimentTokens;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *experimentTokens; // @synthesize experimentTokens=_experimentTokens;
@property(nonatomic) __weak id <OGLAnalyticsInternalDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool alwaysLogAnonymously; // @synthesize alwaysLogAnonymously=_alwaysLogAnonymously;
@property(readonly, nonatomic) __weak id <OGLAnalyticsAccountSnackbarDelegate> accountSnackbarDelegate;
@property(readonly, nonatomic) __weak id <OGLAnalyticsAccountParticleDiscDelegate> accountParticleDiscDelegate;
@property(readonly, nonatomic) __weak id <OGLAnalyticsAccountParticleDelegate> accountParticleDelegate;
- (id)defaultAccountDelegate;
@property(readonly, nonatomic) __weak id <OGLAnalyticsPrivacyPolicyToSDelegate> privacyPolicyToSDelegate;
@property(readonly, nonatomic) __weak id <OGLAnalyticsExpressSignInDelegate> expressSignInDelegate;
@property(readonly, nonatomic) __weak id <OGLAnalyticsAccountMenuDelegate> drawerAccountHeaderDelegate;
@property(readonly, nonatomic) __weak id <OGLAnalyticsAccountMenuDelegate> accountMenuDelegate;
- (void)logMobileEvent:(id)arg1 account:(id)arg2 sanitization:(unsigned long long)arg3;
- (void)logAccountSnackbarEvent:(int)arg1 sanitization:(unsigned long long)arg2;
- (void)logAccountSnackbarEvent:(int)arg1;
- (void)logAccountParticleDiscEvent:(int)arg1 sanitization:(unsigned long long)arg2 componentType:(unsigned long long)arg3;
- (void)logAccountParticleDiscEvent:(int)arg1 sanitization:(unsigned long long)arg2;
- (void)logAccountParticleDiscEvent:(int)arg1;
- (void)logAccountParticleEvent:(int)arg1 sanitization:(unsigned long long)arg2;
- (void)logAccountParticleEvent:(int)arg1;
- (void)logDefaultAccountSelectionEvent:(int)arg1 sanitization:(unsigned long long)arg2;
- (void)logDefaultAccountSelectionEvent:(int)arg1;
- (void)logPrivacyPolicyToSEvent:(int)arg1 sanitization:(unsigned long long)arg2;
- (void)logPrivacyPolicyToSEvent:(int)arg1;
- (void)logDrawerAccountHeaderEvent:(int)arg1 sanitization:(unsigned long long)arg2;
- (void)logDrawerAccountHeaderEvent:(int)arg1;
- (void)logAccountMenuEvent:(int)arg1 sanitization:(unsigned long long)arg2 error:(unsigned long long)arg3;
- (void)logAccountMenuEvent:(int)arg1 sanitization:(unsigned long long)arg2;
- (void)logAccountMenuEvent:(int)arg1;
- (void)logExpressSignInEvent:(int)arg1 sanitization:(unsigned long long)arg2;
- (void)logExpressSignInEvent:(int)arg1;
- (void)logDidTapAccountSnackbarToOpenAccountMenuEvent;
- (void)logDidPresentAccountSnackbarEvent;
- (void)logDidDismissDrawerAccountHeaderEvent;
- (void)logDidPresentDrawerAccountHeaderEvent;
- (void)logDidLeftSwipeToSwitchAccountEvent;
- (void)logDidRightSwipeToSwitchAccountEvent;
- (void)logWillQuickSwitchToSecondAccountEvent;
- (void)logWillQuickSwitchToFirstAccountEvent;
- (void)logDidTapApdEducationScrim;
- (void)logDidTapApdEducationAnchorView;
- (void)logDidTapApdEducationTooltipActionButton;
- (void)logDidTapApdEducationTooltip;
- (void)logWillEndApdEducation;
- (void)logWillStartApdEducation;
- (void)logWillEndLongPressOnApdEducation;
- (void)logWillStartLongPressOnApdEducation;
- (void)logWillTurnOffIncognitoByLongPressOnApd;
- (void)logWillTurnOnIncognitoByLongPressOnApd;
- (void)logLongPressAbortApdWithAnonymous:(_Bool)arg1;
- (void)logLongPressStartApdWithAnonymous:(_Bool)arg1;
- (void)logWillSwitchToNextAccountEvent;
- (void)logWillSwitchToPreviousAccountEvent;
- (void)logDidPresentAccountParticleDiscEvent;
- (void)logDidTapAccountParticleDiscEvent;
- (void)logDidPresentAccountParticleEvent;
- (void)logDidTapAccountParticleEvent;
- (void)logDidFinalizeNewDefaultIdentityEvent;
- (void)logDidSelectNewDefaultIdentityEvent;
- (void)logWillSelectNewDefaultIdentityEvent;
- (void)logWillOpenLicenses;
- (void)logWillOpenTermsOfService;
- (void)logWillOpenPrivacyPolicy;
- (void)logWillOpenDefaultAccountMenu;
- (void)logDidCloseExpressSignInContainerByClickingScrim;
- (void)logDidContinueWithoutAccount;
- (void)logDidSwitchToADifferentExpressAccount;
- (void)logWillSwitchToADifferentExpressAccount;
- (void)logDidDismissExpressAccountMenu;
- (void)logDidPresentExpressAccountMenu;
- (void)logDidAbsorbCrashWithError:(unsigned long long)arg1;
- (void)logDidTapExpandedAccountMenuHeader;
- (void)logDidTapCollapsedAccountMenuHeader;
- (void)logDidSelectCommonItem;
- (void)logDidSelectCustomItem;
- (void)logDidCloseAccountMenuContainerByClickingScrim;
- (void)logWillShowDialogForRemoveAccountFromDevice;
- (void)logDidCancelRemoveAccountFromDevice;
- (void)logDidFailRemoveAccountFromDevice;
- (void)logDidRemoveAccountFromDevice;
- (void)logWillRemoveAccountFromDevice;
- (void)logWillOpenUseAnotherAccount;
- (void)logWillOpenAccountManagement;
- (void)logWillOpenMyAccount;
- (void)logDidSelectTheSameAccount;
- (void)logDidTurnOffIncognito;
- (void)logWillTurnOnIncognito;
- (void)logWillTurnOnUseWithoutAnAccount;
- (void)logDidSwitchToADifferentAccount;
- (void)logWillSwitchToADifferentAccount;
- (void)logDidDismissAccountMenu;
- (void)logDidPresentAccountMenu;
- (void)setPhenotypeTokens:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


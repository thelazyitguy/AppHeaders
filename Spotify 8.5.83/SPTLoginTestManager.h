//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTPreSignupExperimentationFeatureFlagNameProvider, SPTPreSignupExperimentationFeatureFlags;

@interface SPTLoginTestManager : NSObject
{
    id <SPTPreSignupExperimentationFeatureFlags> _featureFlags;
    id <SPTPreSignupExperimentationFeatureFlagNameProvider> _featureFlagNameProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTPreSignupExperimentationFeatureFlagNameProvider> featureFlagNameProvider; // @synthesize featureFlagNameProvider=_featureFlagNameProvider;
@property(retain, nonatomic) id <SPTPreSignupExperimentationFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic, getter=isFacebookRegistrationDisabled) _Bool facebookRegistrationDisabled;
@property(readonly, nonatomic, getter=isFacebookSignupToSplitFlowEnabled) _Bool facebookSignupToSplitFlowEnabled;
@property(readonly, nonatomic, getter=isSouthKoreaExperienceEnabled) _Bool southKoreaExperienceEnabled;
@property(readonly, nonatomic, getter=isGoogleRegistrationEnabled) _Bool googleRegistrationEnabled;
@property(readonly, nonatomic, getter=isGoogleLoginEnabled) _Bool googleLoginEnabled;
@property(readonly, nonatomic, getter=isPhoneNumberEnabled) _Bool phoneNumberEnabled;
@property(readonly, nonatomic, getter=isDelayedSignupSecondCellEnabled) _Bool delayedSignupSecondCellEnabled;
@property(readonly, nonatomic, getter=isDelayedSignupFirstCellEnabled) _Bool delayedSignupFirstCellEnabled;
@property(readonly, nonatomic, getter=isDelayedSignupExperimentEnabled) _Bool delayedSignupExperimentEnabled;
@property(readonly, nonatomic, getter=isStickyCredentialsSavingEnabled) _Bool stickyCredentialsSavingEnabled;
@property(readonly, nonatomic, getter=isAppleAccountLinkingDisabled) _Bool appleAccountLinkingDisabled;
@property(readonly, nonatomic, getter=isAppleSignUpDisabled) _Bool appleSignUpDisabled;
@property(readonly, nonatomic, getter=isAppleSignInCustomButtonEnabled) _Bool appleSignInCustomDesignEnabled;
@property(readonly, nonatomic, getter=isAppleSignInSystemButtonEnabled) _Bool appleSignInEnabled;
- (_Bool)isFlagEnabled:(id)arg1;
- (id)initWithSignupConfiguration:(id)arg1 featureFlagNameProvider:(id)arg2;
- (id)initWithSignupConfigurationFuture:(id)arg1 featureFlagNameProvider:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingFormViewController.h>

@class T1EnterPhoneNumberForm;
@protocol T1EnterPhoneNumberViewControllerDelegate;

@interface T1EnterPhoneNumberViewController : T1OnboardingFormViewController
{
    id <T1EnterPhoneNumberViewControllerDelegate> _delegate;
    T1EnterPhoneNumberForm *_enterPhoneNumberForm;
}

- (void).cxx_destruct;
- (void)abandonForm;
- (void)submitForm;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 nextLabel:(id)arg3 skipLabel:(id)arg4 hintText:(id)arg5 countryCodes:(id)arg6 defaultCountryCode:(id)arg7 discoverabilitySettingsTitle:(id)arg8 discoverabilitySettingsValue:(_Bool)arg9 delegate:(id)arg10;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingSubtaskController.h>

#import <T1Twitter/T1EnterPhoneNumberViewControllerDelegate-Protocol.h>

@class NSString, TFSTwitterOnboardingEnterPhoneSubtask, TFSTwitterOnboardingEnterPhoneSubtaskState;
@protocol T1OnboardingSubtaskControllerDelegate;

@interface T1OnboardingEnterPhoneSubtaskController : T1OnboardingSubtaskController <T1EnterPhoneNumberViewControllerDelegate>
{
    TFSTwitterOnboardingEnterPhoneSubtask *_subtask;
    TFSTwitterOnboardingEnterPhoneSubtaskState *_state;
    id <T1OnboardingSubtaskControllerDelegate> _delegate;
}

+ (id)supportedSubtaskClasses;
- (void).cxx_destruct;
- (void)enterPhoneNumberViewController:(id)arg1 didTapNextWithPhoneNumber:(id)arg2 countryCode:(id)arg3 discoverabilitySettingsValue:(_Bool)arg4;
- (void)enterPhoneNumberViewControllerDidTapSkip:(id)arg1;
- (id)subtaskData;
- (void)startWithNavigationContext:(id)arg1 navigationLink:(id)arg2;
- (id)initWithSubtask:(id)arg1 flowToken:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

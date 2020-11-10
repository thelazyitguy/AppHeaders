//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingSubtaskController.h>

@class TFSTwitterOnboardingEndFlowSubtask;
@protocol T1OnboardingSubtaskControllerDelegate;

@interface T1OnboardingEndFlowSubtaskController : T1OnboardingSubtaskController
{
    TFSTwitterOnboardingEndFlowSubtask *_subtask;
    id <T1OnboardingSubtaskControllerDelegate> _delegate;
}

+ (id)supportedSubtaskClasses;
- (void).cxx_destruct;
- (_Bool)canRestartForErrors;
- (void)startWithNavigationContext:(id)arg1 navigationLink:(id)arg2;
- (id)initWithSubtask:(id)arg1 flowToken:(id)arg2 delegate:(id)arg3;

@end


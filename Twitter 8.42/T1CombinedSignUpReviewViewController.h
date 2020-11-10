//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingFormViewController.h>

#import <T1Twitter/T1CombinedSignUpFormDelegate-Protocol.h>
#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>

@class NSString, T1CombinedSignUpForm, TFNAttributedTextView;
@protocol T1CombinedSignUpReviewViewControllerDelegate;

@interface T1CombinedSignUpReviewViewController : T1OnboardingFormViewController <TFNAttributedTextViewDelegate, T1CombinedSignUpFormDelegate>
{
    T1CombinedSignUpForm *_form;
    TFNAttributedTextView *_signInTextView;
    TFNAttributedTextView *_detailTextView;
    TFNAttributedTextView *_noticeTextView;
    id <T1CombinedSignUpReviewViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <T1CombinedSignUpReviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)combinedSignUpForm:(id)arg1 focusOnFormField:(id)arg2;
- (void)submitCombinedSignUpForm:(id)arg1;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (void)private_getHeaderEdgeInsets:(out struct UIEdgeInsets *)arg1 footerEdgeInsets:(out struct UIEdgeInsets *)arg2 blankFooterItemHeight:(out double *)arg3;
- (unsigned long long)inputRequiredBehavior;
- (void)submitForm;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (id)updatedSections:(id)arg1;
@property(nonatomic) _Bool shouldHideBirthday;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 name:(id)arg3 phone:(id)arg4 email:(id)arg5 birthday:(id)arg6 signUpButtonTitle:(id)arg7 signInText:(id)arg8 activeRanges:(id)arg9 detailText:(id)arg10 activeRanges:(id)arg11 noticeText:(id)arg12 activeRanges:(id)arg13 shouldInputBirthdayAsAge:(_Bool)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


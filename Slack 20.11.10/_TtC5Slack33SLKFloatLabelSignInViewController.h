//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class JVFloatLabeledTextField, NSLayoutConstraint, UILabel, UIView;

@interface _TtC5Slack33SLKFloatLabelSignInViewController : UIViewController
{
    // Error parsing type: , name: maxCharactersInputLength
    // Error parsing type: , name: containerView
    // Error parsing type: , name: containerViewBottomConstraint
    // Error parsing type: , name: containerViewTrailingConstraint
    // Error parsing type: , name: containerViewLeadingConstraint
    // Error parsing type: , name: floatLabelTextField
    // Error parsing type: , name: floatLabelTopConstraint
    // Error parsing type: , name: firstMessageLabel
    // Error parsing type: , name: secondMessageLabel
    // Error parsing type: , name: bottomLabel
    // Error parsing type: , name: bottomLabelTrailingConstraint
    // Error parsing type: , name: bottomLabelUnderlineView
    // Error parsing type: , name: loadingIndicatorContainer
    // Error parsing type: , name: loadingIndicatorLeadingConstraint
    // Error parsing type: , name: $__lazy_storage_$_loadingIndicator
    // Error parsing type: , name: floatLabelFont
    // Error parsing type: , name: ghostLabel
    // Error parsing type: , name: ghostLabelLeadingConstraint
    // Error parsing type: , name: isTextFieldEnabled
    // Error parsing type: , name: animateWithKeyboard
    // Error parsing type: , name: isShowingError
    // Error parsing type: , name: keyboardHeight
    // Error parsing type: , name: ipadMultitasking
    // Error parsing type: , name: ipadLeadingWidth
    // Error parsing type: , name: ipadLeadingWidthLandscape
    // Error parsing type: , name: floatingLabelYPadding
    // Error parsing type: , name: ghostLabelText
    // Error parsing type: , name: ghostLabelHidden
    // Error parsing type: , name: loadingIndicatorSpinning
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dealloc;
- (void)didClose:(id)arg1;
- (void)willClose:(id)arg1;
- (void)next:(id)arg1;
- (void)back:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldChanged;
- (void)bottomLabelTapped:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, retain) NSLayoutConstraint *ghostLabelLeadingConstraint; // @synthesize ghostLabelLeadingConstraint;
@property(nonatomic, retain) UILabel *ghostLabel; // @synthesize ghostLabel;
@property(nonatomic, retain) NSLayoutConstraint *loadingIndicatorLeadingConstraint; // @synthesize loadingIndicatorLeadingConstraint;
@property(nonatomic, retain) UIView *loadingIndicatorContainer; // @synthesize loadingIndicatorContainer;
@property(nonatomic, retain) UIView *bottomLabelUnderlineView; // @synthesize bottomLabelUnderlineView;
@property(nonatomic, retain) NSLayoutConstraint *bottomLabelTrailingConstraint; // @synthesize bottomLabelTrailingConstraint;
@property(nonatomic, retain) UILabel *bottomLabel; // @synthesize bottomLabel;
@property(nonatomic, retain) UILabel *secondMessageLabel; // @synthesize secondMessageLabel;
@property(nonatomic, retain) UILabel *firstMessageLabel; // @synthesize firstMessageLabel;
@property(nonatomic, retain) NSLayoutConstraint *floatLabelTopConstraint; // @synthesize floatLabelTopConstraint;
@property(nonatomic, retain) JVFloatLabeledTextField *floatLabelTextField; // @synthesize floatLabelTextField;
@property(nonatomic, retain) NSLayoutConstraint *containerViewLeadingConstraint; // @synthesize containerViewLeadingConstraint;
@property(nonatomic, retain) NSLayoutConstraint *containerViewTrailingConstraint; // @synthesize containerViewTrailingConstraint;
@property(nonatomic, retain) NSLayoutConstraint *containerViewBottomConstraint; // @synthesize containerViewBottomConstraint;
@property(nonatomic, retain) UIView *containerView; // @synthesize containerView;

@end

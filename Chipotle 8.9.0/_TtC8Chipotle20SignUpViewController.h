//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8Chipotle22ChipotleViewController.h"

@class NSLayoutConstraint, UIButton, UILabel, UIScrollView, UITextView, UIView, _TtC8Chipotle12CheckBoxView, _TtC8Chipotle22FloatingLabelTextField, _TtC8Chipotle30ChipotleInlineLoadingIndicator;

@interface _TtC8Chipotle20SignUpViewController : _TtC8Chipotle22ChipotleViewController
{
    // Error parsing type: , name: firstNameField
    // Error parsing type: , name: lastNameField
    // Error parsing type: , name: emailField
    // Error parsing type: , name: passwordField
    // Error parsing type: , name: phoneNumberField
    // Error parsing type: , name: mobileNumberSubTextLabel
    // Error parsing type: , name: signUpButtonTopConstraint
    // Error parsing type: , name: birthdayField
    // Error parsing type: , name: birthdayFieldHeightConstraint
    // Error parsing type: , name: optInDisclaimerField
    // Error parsing type: , name: headerLabel
    // Error parsing type: , name: termsLabel
    // Error parsing type: , name: topDivider
    // Error parsing type: , name: logInButton
    // Error parsing type: , name: signUpButton
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: spinner
    // Error parsing type: , name: optInForSMSLabel
    // Error parsing type: , name: promotionCheckBoxYes
    // Error parsing type: , name: promotionCheckBoxNo
    // Error parsing type: , name: canadaCheckBox
    // Error parsing type: , name: usaCheckBox
    // Error parsing type: , name: currentCheckedCountry
    // Error parsing type: , name: shouldReceivePromotions
    // Error parsing type: , name: delegate
    // Error parsing type: , name: keyboardHeight
    // Error parsing type: , name: passwordHintView
    // Error parsing type: , name: registeringWithExistingEmailErrorCode
    // Error parsing type: , name: createAccountHeader
    // Error parsing type: , name: headerForGroupOrder
    // Error parsing type: , name: $__lazy_storage_$_biometricManager
    // Error parsing type: , name: authError
    // Error parsing type: , name: isAuthenticatingForGroupOrder
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didPressDone;
- (void)signUpClicked:(id)arg1;
- (void)logInClicked:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)didPressCancel;
- (void)didPressNext;
- (void)keyboardDidShowWithNotification:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak _TtC8Chipotle12CheckBoxView *usaCheckBox; // @synthesize usaCheckBox;
@property(nonatomic) __weak _TtC8Chipotle12CheckBoxView *canadaCheckBox; // @synthesize canadaCheckBox;
@property(nonatomic) __weak _TtC8Chipotle12CheckBoxView *promotionCheckBoxNo; // @synthesize promotionCheckBoxNo;
@property(nonatomic) __weak _TtC8Chipotle12CheckBoxView *promotionCheckBoxYes; // @synthesize promotionCheckBoxYes;
@property(nonatomic) __weak UILabel *optInForSMSLabel; // @synthesize optInForSMSLabel;
@property(nonatomic) __weak _TtC8Chipotle30ChipotleInlineLoadingIndicator *spinner; // @synthesize spinner;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic) __weak UIButton *signUpButton; // @synthesize signUpButton;
@property(nonatomic) __weak UIButton *logInButton; // @synthesize logInButton;
@property(nonatomic) __weak UIView *topDivider; // @synthesize topDivider;
@property(nonatomic) __weak UITextView *termsLabel; // @synthesize termsLabel;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel;
@property(nonatomic) __weak UILabel *optInDisclaimerField; // @synthesize optInDisclaimerField;
@property(nonatomic) __weak NSLayoutConstraint *birthdayFieldHeightConstraint; // @synthesize birthdayFieldHeightConstraint;
@property(nonatomic) __weak _TtC8Chipotle22FloatingLabelTextField *birthdayField; // @synthesize birthdayField;
@property(nonatomic) __weak NSLayoutConstraint *signUpButtonTopConstraint; // @synthesize signUpButtonTopConstraint;
@property(nonatomic) __weak UILabel *mobileNumberSubTextLabel; // @synthesize mobileNumberSubTextLabel;
@property(nonatomic) __weak _TtC8Chipotle22FloatingLabelTextField *phoneNumberField; // @synthesize phoneNumberField;
@property(nonatomic) __weak _TtC8Chipotle22FloatingLabelTextField *passwordField; // @synthesize passwordField;
@property(nonatomic) __weak _TtC8Chipotle22FloatingLabelTextField *emailField; // @synthesize emailField;
@property(nonatomic) __weak _TtC8Chipotle22FloatingLabelTextField *lastNameField; // @synthesize lastNameField;
@property(nonatomic) __weak _TtC8Chipotle22FloatingLabelTextField *firstNameField; // @synthesize firstNameField;

@end

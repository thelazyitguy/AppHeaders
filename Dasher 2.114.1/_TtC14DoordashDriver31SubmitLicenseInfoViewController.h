//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSLayoutConstraint, UIButton, UILabel, UIScrollView, UITextField, UIView, _TtC3DLS6Button;

@interface _TtC14DoordashDriver31SubmitLicenseInfoViewController : UIViewController
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: activityIndicator
    // Error parsing type: , name: datePickerContainer
    // Error parsing type: , name: datePicker
    // Error parsing type: , name: dasherCountry
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: firstNameField
    // Error parsing type: , name: lastNameField
    // Error parsing type: , name: dobField
    // Error parsing type: , name: streetAddressField
    // Error parsing type: , name: cityAddressField
    // Error parsing type: , name: stateLabel
    // Error parsing type: , name: stateAddressField
    // Error parsing type: , name: zipAddressField
    // Error parsing type: , name: termsLabel
    // Error parsing type: , name: termsButton
    // Error parsing type: , name: terms2Button
    // Error parsing type: , name: confirmIdentitySection
    // Error parsing type: , name: confirmIdentitySectionHeightConstraint
    // Error parsing type: , name: ssnField
    // Error parsing type: , name: textFields
    // Error parsing type: , name: continueButton
    // Error parsing type: , name: descriptionLabel
    // Error parsing type: , name: firstNameLabel
    // Error parsing type: , name: lastNameLabel
    // Error parsing type: , name: dateOfBirthLabel
    // Error parsing type: , name: homeAddressLabel
    // Error parsing type: , name: streetAddressLabel
    // Error parsing type: , name: cityLabel
    // Error parsing type: , name: zipPostalCodeLabel
    // Error parsing type: , name: confirmIdentityLabel
    // Error parsing type: , name: socialSecurityLabel
    // Error parsing type: , name: requiredLabels
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didSelectDateWithSender:(id)arg1;
- (void)didTapTerms2WithSender:(id)arg1;
- (void)didTapTermsWithSender:(id)arg1;
- (void)didTapContinueWithSender:(id)arg1;
- (void)dismissKeyboard;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, copy) NSArray *requiredLabels;
@property(nonatomic) __weak UILabel *socialSecurityLabel; // @synthesize socialSecurityLabel;
@property(nonatomic) __weak UILabel *confirmIdentityLabel; // @synthesize confirmIdentityLabel;
@property(nonatomic) __weak UILabel *zipPostalCodeLabel; // @synthesize zipPostalCodeLabel;
@property(nonatomic) __weak UILabel *cityLabel; // @synthesize cityLabel;
@property(nonatomic) __weak UILabel *streetAddressLabel; // @synthesize streetAddressLabel;
@property(nonatomic) __weak UILabel *homeAddressLabel; // @synthesize homeAddressLabel;
@property(nonatomic) __weak UILabel *dateOfBirthLabel; // @synthesize dateOfBirthLabel;
@property(nonatomic) __weak UILabel *lastNameLabel; // @synthesize lastNameLabel;
@property(nonatomic) __weak UILabel *firstNameLabel; // @synthesize firstNameLabel;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel;
@property(nonatomic) __weak _TtC3DLS6Button *continueButton; // @synthesize continueButton;
@property(nonatomic, copy) NSArray *textFields;
@property(nonatomic) __weak UITextField *ssnField; // @synthesize ssnField;
@property(nonatomic) __weak NSLayoutConstraint *confirmIdentitySectionHeightConstraint; // @synthesize confirmIdentitySectionHeightConstraint;
@property(nonatomic) __weak UIView *confirmIdentitySection; // @synthesize confirmIdentitySection;
@property(nonatomic) __weak UIButton *terms2Button; // @synthesize terms2Button;
@property(nonatomic) __weak UIButton *termsButton; // @synthesize termsButton;
@property(nonatomic) __weak UILabel *termsLabel; // @synthesize termsLabel;
@property(nonatomic) __weak UITextField *zipAddressField; // @synthesize zipAddressField;
@property(nonatomic) __weak UITextField *stateAddressField; // @synthesize stateAddressField;
@property(nonatomic) __weak UILabel *stateLabel; // @synthesize stateLabel;
@property(nonatomic) __weak UITextField *cityAddressField; // @synthesize cityAddressField;
@property(nonatomic) __weak UITextField *streetAddressField; // @synthesize streetAddressField;
@property(nonatomic) __weak UITextField *dobField; // @synthesize dobField;
@property(nonatomic) __weak UITextField *lastNameField; // @synthesize lastNameField;
@property(nonatomic) __weak UITextField *firstNameField; // @synthesize firstNameField;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7Grocery25GroceryBaseViewController.h"

@class NSLayoutConstraint, TTTAttributedLabel, UILabel, UIStackView, UIView, _TtC10CoreStyles17CorePrimaryButton, _TtC10CoreStyles24CoreGlobalMessagingLabel, _TtC7Grocery15PaymentInfoView, _TtC7Grocery16TextViewWithLink;

@interface _TtC7Grocery44WalmartPlusSubscribeMembershipViewController : _TtC7Grocery25GroceryBaseViewController
{
    // Error parsing type: , name: errorLabelZeroHeightConstraint
    // Error parsing type: , name: paymentHeaderLabel
    // Error parsing type: , name: globalMessagingError
    // Error parsing type: , name: continueButton
    // Error parsing type: , name: disclaimerLabel
    // Error parsing type: , name: paymentStartInfo
    // Error parsing type: , name: optionsInfoView
    // Error parsing type: , name: paymentInfoView
    // Error parsing type: , name: tenureStackView
    // Error parsing type: , name: headerLabel
    // Error parsing type: , name: disclaimerTemplate
    // Error parsing type: , name: freeTrialHeaderMessage
    // Error parsing type: , name: focusBenefitCode
    // Error parsing type: , name: noFreeTrialHeaderMessage
    // Error parsing type: , name: paymentStartInfoText
    // Error parsing type: , name: termsAndConditionsUrl
    // Error parsing type: , name: faqUrl
    // Error parsing type: , name: initializedTenures
    // Error parsing type: , name: state
    // Error parsing type: , name: mode
    // Error parsing type: , name: selectedPayment
    // Error parsing type: , name: selectedTenure
    // Error parsing type: , name: selectedTenureId
    // Error parsing type: , name: freeTrialMessageLabelTemplate
    // Error parsing type: , name: analyticsPackage
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: completion
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)continueButtonClicked:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel;
@property(nonatomic) __weak UIStackView *tenureStackView; // @synthesize tenureStackView;
@property(nonatomic) __weak _TtC7Grocery15PaymentInfoView *paymentInfoView; // @synthesize paymentInfoView;
@property(nonatomic) __weak UIView *optionsInfoView; // @synthesize optionsInfoView;
@property(nonatomic) __weak TTTAttributedLabel *paymentStartInfo; // @synthesize paymentStartInfo;
@property(nonatomic) __weak _TtC7Grocery16TextViewWithLink *disclaimerLabel; // @synthesize disclaimerLabel;
@property(nonatomic) __weak _TtC10CoreStyles17CorePrimaryButton *continueButton; // @synthesize continueButton;
@property(nonatomic) __weak _TtC10CoreStyles24CoreGlobalMessagingLabel *globalMessagingError; // @synthesize globalMessagingError;
@property(nonatomic) __weak UILabel *paymentHeaderLabel; // @synthesize paymentHeaderLabel;
@property(nonatomic) __weak NSLayoutConstraint *errorLabelZeroHeightConstraint; // @synthesize errorLabelZeroHeightConstraint;

@end

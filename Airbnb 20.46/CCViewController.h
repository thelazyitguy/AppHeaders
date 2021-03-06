//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CardinalMobile/CCUIViewController.h>

@class CCAButton, MultiSelectView, NSLayoutConstraint, OTPView, SingleSelectView, UIBarButtonItem, UIButton, UIImageView, UIImageViewAligned, UILabel, UITextView, UIView;

@interface CCViewController : CCUIViewController
{
    _Bool whitelisted;
    OTPView *_otpView;
    SingleSelectView *_singleSelectView;
    MultiSelectView *_multiSelectView;
    UIImageViewAligned *_issuerImageView;
    UIImageViewAligned *_paymentSystemImageView;
    UILabel *_challengeInfoHeaderLabel;
    UITextView *_challengeInfoTextTextView;
    UILabel *_challengeInformationLabel;
    UIButton *_submitAuthenticationButton;
    UIButton *_resendInfoButton;
    CCAButton *_whyInfoLabelButton;
    CCAButton *_expandInfoLabelButton;
    UIImageView *_warningIndicator;
    UILabel *_whyInfoDetailTV;
    UILabel *_expandInfoDetailTV;
    UIBarButtonItem *_cancelButton;
    NSLayoutConstraint *_warningIndicatorWidth;
    NSLayoutConstraint *_resendButtonHeight;
    UIView *_containerView;
    NSLayoutConstraint *_containerViewHeight;
    NSLayoutConstraint *_warningIndicatorRightPadding;
    UIView *_whitelistView;
    UILabel *_whitelistInfoTextLabel;
    UIImageView *_whitelistImageView;
    NSLayoutConstraint *_whitelistHeight;
    NSLayoutConstraint *_whitelistImageHeight;
    NSLayoutConstraint *_whitelistTextTopConstraint;
    NSLayoutConstraint *_whitelistTextBottomConstraint;
    NSLayoutConstraint *_viewButtonDivider;
    NSLayoutConstraint *_submitResendDivider;
    UIView *_emptyView;
}

@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) __weak NSLayoutConstraint *submitResendDivider; // @synthesize submitResendDivider=_submitResendDivider;
@property(nonatomic) __weak NSLayoutConstraint *viewButtonDivider; // @synthesize viewButtonDivider=_viewButtonDivider;
@property(nonatomic) __weak NSLayoutConstraint *whitelistTextBottomConstraint; // @synthesize whitelistTextBottomConstraint=_whitelistTextBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *whitelistTextTopConstraint; // @synthesize whitelistTextTopConstraint=_whitelistTextTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *whitelistImageHeight; // @synthesize whitelistImageHeight=_whitelistImageHeight;
@property(nonatomic) __weak NSLayoutConstraint *whitelistHeight; // @synthesize whitelistHeight=_whitelistHeight;
@property(nonatomic) __weak UIImageView *whitelistImageView; // @synthesize whitelistImageView=_whitelistImageView;
@property(nonatomic) __weak UILabel *whitelistInfoTextLabel; // @synthesize whitelistInfoTextLabel=_whitelistInfoTextLabel;
@property(nonatomic) __weak UIView *whitelistView; // @synthesize whitelistView=_whitelistView;
@property(nonatomic) __weak NSLayoutConstraint *warningIndicatorRightPadding; // @synthesize warningIndicatorRightPadding=_warningIndicatorRightPadding;
@property(nonatomic) __weak NSLayoutConstraint *containerViewHeight; // @synthesize containerViewHeight=_containerViewHeight;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak NSLayoutConstraint *resendButtonHeight; // @synthesize resendButtonHeight=_resendButtonHeight;
@property(nonatomic) __weak NSLayoutConstraint *warningIndicatorWidth; // @synthesize warningIndicatorWidth=_warningIndicatorWidth;
@property(nonatomic) __weak UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UILabel *expandInfoDetailTV; // @synthesize expandInfoDetailTV=_expandInfoDetailTV;
@property(nonatomic) __weak UILabel *whyInfoDetailTV; // @synthesize whyInfoDetailTV=_whyInfoDetailTV;
@property(nonatomic) __weak UIImageView *warningIndicator; // @synthesize warningIndicator=_warningIndicator;
@property(nonatomic) __weak CCAButton *expandInfoLabelButton; // @synthesize expandInfoLabelButton=_expandInfoLabelButton;
@property(nonatomic) __weak CCAButton *whyInfoLabelButton; // @synthesize whyInfoLabelButton=_whyInfoLabelButton;
@property(nonatomic) __weak UIButton *resendInfoButton; // @synthesize resendInfoButton=_resendInfoButton;
@property(nonatomic) __weak UIButton *submitAuthenticationButton; // @synthesize submitAuthenticationButton=_submitAuthenticationButton;
@property(nonatomic) __weak UILabel *challengeInformationLabel; // @synthesize challengeInformationLabel=_challengeInformationLabel;
@property(nonatomic) __weak UITextView *challengeInfoTextTextView; // @synthesize challengeInfoTextTextView=_challengeInfoTextTextView;
@property(nonatomic) __weak UILabel *challengeInfoHeaderLabel; // @synthesize challengeInfoHeaderLabel=_challengeInfoHeaderLabel;
@property(nonatomic) __weak UIImageViewAligned *paymentSystemImageView; // @synthesize paymentSystemImageView=_paymentSystemImageView;
@property(nonatomic) __weak UIImageViewAligned *issuerImageView; // @synthesize issuerImageView=_issuerImageView;
@property(retain, nonatomic) MultiSelectView *multiSelectView; // @synthesize multiSelectView=_multiSelectView;
@property(retain, nonatomic) SingleSelectView *singleSelectView; // @synthesize singleSelectView=_singleSelectView;
@property(retain, nonatomic) OTPView *otpView; // @synthesize otpView=_otpView;
- (void).cxx_destruct;
- (void)repositionButton:(id)arg1;
- (void)setButtonImage:(id)arg1 toButton:(id)arg2;
- (void)onExpandInfoPressed:(id)arg1;
- (void)onWhyInfoPressed:(id)arg1;
- (void)onCancelled:(id)arg1;
- (void)onResendPressed:(id)arg1;
- (void)onSubmitButtonPressed:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)customizeUI;
- (void)viewDidLayoutSubviews;
- (void)onWhiteListTapped:(id)arg1;
- (void)loadUIContents;
- (void)sendCreq:(id)arg1;
- (void)backToForeground;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)blockScreen:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;

@end


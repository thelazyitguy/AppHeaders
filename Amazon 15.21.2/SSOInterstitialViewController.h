//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AWSkinnableButton, NSData, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, SSOInformation, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface SSOInterstitialViewController : UIViewController
{
    SSOInformation *_ssoInformation;
    NSData *_ssoData;
    NSString *_privacyNoticeUrl;
    NSString *_conditionOfUseUrl;
    UIImageView *_logoView;
    UILabel *_welcomeLabel;
    AWSkinnableButton *_continueButton;
    AWSkinnableButton *_differnetAccountButton;
    UIView *_waitingIndicator;
    UILabel *_headingMessage;
    UILabel *_subHeadingMessage;
    UILabel *_conditionsAndPrivacyLabel;
    UITapGestureRecognizer *_tapGestureConditionOfUseAndPrivacy;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
    struct _NSRange _conditionOfUseRange;
    struct _NSRange _privacyRange;
}

@property(nonatomic) struct _NSRange privacyRange; // @synthesize privacyRange=_privacyRange;
@property(nonatomic) struct _NSRange conditionOfUseRange; // @synthesize conditionOfUseRange=_conditionOfUseRange;
@property(retain, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureConditionOfUseAndPrivacy; // @synthesize tapGestureConditionOfUseAndPrivacy=_tapGestureConditionOfUseAndPrivacy;
@property(nonatomic) __weak UILabel *conditionsAndPrivacyLabel; // @synthesize conditionsAndPrivacyLabel=_conditionsAndPrivacyLabel;
@property(nonatomic) __weak UILabel *subHeadingMessage; // @synthesize subHeadingMessage=_subHeadingMessage;
@property(nonatomic) __weak UILabel *headingMessage; // @synthesize headingMessage=_headingMessage;
@property(nonatomic) __weak UIView *waitingIndicator; // @synthesize waitingIndicator=_waitingIndicator;
@property(nonatomic) __weak AWSkinnableButton *differnetAccountButton; // @synthesize differnetAccountButton=_differnetAccountButton;
@property(nonatomic) __weak AWSkinnableButton *continueButton; // @synthesize continueButton=_continueButton;
@property(nonatomic) __weak UILabel *welcomeLabel; // @synthesize welcomeLabel=_welcomeLabel;
@property(nonatomic) __weak UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) NSString *conditionOfUseUrl; // @synthesize conditionOfUseUrl=_conditionOfUseUrl;
@property(retain, nonatomic) NSString *privacyNoticeUrl; // @synthesize privacyNoticeUrl=_privacyNoticeUrl;
@property(retain, nonatomic) NSData *ssoData; // @synthesize ssoData=_ssoData;
@property(retain, nonatomic) SSOInformation *ssoInformation; // @synthesize ssoInformation=_ssoInformation;
- (void).cxx_destruct;
- (void)openWebView:(id)arg1;
- (void)openPrivacyNotice;
- (void)openConditionsOfUse;
- (void)conditionOfUseAndPrivacyTapped:(id)arg1;
- (void)authenticateUser;
- (void)useDifferentAccountClicked;
- (void)didFailSignInWithPreAuthorizedLinkCode;
- (void)didSignInWithPreAuthorizedLinkCode;
- (void)signIn;
- (void)continueClicked;
- (void)setupConditionsAndPolicyLabel;
- (void)setCustomerInfoOnView;
- (void)decryptSSOInformation;
- (_Bool)anonymousSignInEnabled;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSSOInformation:(id)arg1;
- (id)initWithSSOData:(id)arg1;

@end

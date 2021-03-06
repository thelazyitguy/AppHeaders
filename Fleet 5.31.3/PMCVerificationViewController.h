//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class NSString, UIButton, UIColor, UIFont, UILabel;

@interface PMCVerificationViewController : UIViewController <MFMessageComposeViewControllerDelegate>
{
    _Bool _smsSent;
    _Bool _isSigningUp;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _doneBlock;
    NSString *_recipientNumber;
    UILabel *_verifyDescriptionLabel;
    UILabel *_stepOneContent;
    UILabel *_stepOneNumber;
    UIButton *_stepOneButton;
    UILabel *_stepTwoContent;
    UILabel *_stepTwoNumber;
    UILabel *_stepThreeContent;
    UILabel *_stepThreeNumber;
    UIButton *_stepThreeButton;
    UIFont *_contentFont;
    UIFont *_numberFont;
    UIColor *_activeStepTextColor;
    UIColor *_inactiveStepTextColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSigningUp; // @synthesize isSigningUp=_isSigningUp;
@property(nonatomic) _Bool smsSent; // @synthesize smsSent=_smsSent;
@property(retain, nonatomic) UIColor *inactiveStepTextColor; // @synthesize inactiveStepTextColor=_inactiveStepTextColor;
@property(retain, nonatomic) UIColor *activeStepTextColor; // @synthesize activeStepTextColor=_activeStepTextColor;
@property(retain, nonatomic) UIFont *numberFont; // @synthesize numberFont=_numberFont;
@property(retain, nonatomic) UIFont *contentFont; // @synthesize contentFont=_contentFont;
@property(nonatomic) __weak UIButton *stepThreeButton; // @synthesize stepThreeButton=_stepThreeButton;
@property(nonatomic) __weak UILabel *stepThreeNumber; // @synthesize stepThreeNumber=_stepThreeNumber;
@property(nonatomic) __weak UILabel *stepThreeContent; // @synthesize stepThreeContent=_stepThreeContent;
@property(nonatomic) __weak UILabel *stepTwoNumber; // @synthesize stepTwoNumber=_stepTwoNumber;
@property(nonatomic) __weak UILabel *stepTwoContent; // @synthesize stepTwoContent=_stepTwoContent;
@property(nonatomic) __weak UIButton *stepOneButton; // @synthesize stepOneButton=_stepOneButton;
@property(nonatomic) __weak UILabel *stepOneNumber; // @synthesize stepOneNumber=_stepOneNumber;
@property(nonatomic) __weak UILabel *stepOneContent; // @synthesize stepOneContent=_stepOneContent;
@property(nonatomic) __weak UILabel *verifyDescriptionLabel; // @synthesize verifyDescriptionLabel=_verifyDescriptionLabel;
@property(copy, nonatomic) NSString *recipientNumber; // @synthesize recipientNumber=_recipientNumber;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void)showSMSUnavailableAlert;
- (void)showTroubleSendingSMSAlert;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)viewDidLoad;
- (void)updateStepSubviews;
- (void)stepThreeTapped:(id)arg1;
- (void)stepOneTapped:(id)arg1;
- (void)cancelTapped:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRecipientNumber:(id)arg1 forSignup:(_Bool)arg2;
- (void)logSent;
- (void)logScreenViewed;
- (void)logLoginCompleted;
- (void)logComposerOpened;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


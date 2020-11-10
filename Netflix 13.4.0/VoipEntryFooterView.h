//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NFUIButton, NFUILabel, NFUILinkLabel, NFUIStackButton, NSLayoutConstraint, UILabel, UIStackView;
@protocol VoipEntryFooterViewDelegateProtocol;

@interface VoipEntryFooterView : UIView
{
    id <VoipEntryFooterViewDelegateProtocol> _delegate;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    NFUIStackButton *_callButton;
    NFUIStackButton *_chatButton;
    NFUIButton *_signInButton;
    NFUIStackButton *_recoverPasswordButton;
    UIView *_accountInfoContainer;
    UIView *_contactInfoContainer;
    NSLayoutConstraint *_titleInset;
    NSLayoutConstraint *_stackViewHeight;
    UIStackView *_stackView;
    NFUILabel *_headingLabel;
    NFUILabel *_subheadLabel;
    NFUILabel *_accountLabel;
    NFUILinkLabel *_resetLabel;
    UIStackView *_callChatStackView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIStackView *callChatStackView; // @synthesize callChatStackView=_callChatStackView;
@property(nonatomic) __weak NFUILinkLabel *resetLabel; // @synthesize resetLabel=_resetLabel;
@property(nonatomic) __weak NFUILabel *accountLabel; // @synthesize accountLabel=_accountLabel;
@property(nonatomic) __weak NFUILabel *subheadLabel; // @synthesize subheadLabel=_subheadLabel;
@property(nonatomic) __weak NFUILabel *headingLabel; // @synthesize headingLabel=_headingLabel;
@property(nonatomic) __weak UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak NSLayoutConstraint *stackViewHeight; // @synthesize stackViewHeight=_stackViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *titleInset; // @synthesize titleInset=_titleInset;
@property(nonatomic) __weak UIView *contactInfoContainer; // @synthesize contactInfoContainer=_contactInfoContainer;
@property(nonatomic) __weak UIView *accountInfoContainer; // @synthesize accountInfoContainer=_accountInfoContainer;
@property(nonatomic) __weak NFUIStackButton *recoverPasswordButton; // @synthesize recoverPasswordButton=_recoverPasswordButton;
@property(nonatomic) __weak NFUIButton *signInButton; // @synthesize signInButton=_signInButton;
@property(nonatomic) __weak NFUIStackButton *chatButton; // @synthesize chatButton=_chatButton;
@property(nonatomic) __weak NFUIStackButton *callButton; // @synthesize callButton=_callButton;
@property(nonatomic) __weak UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <VoipEntryFooterViewDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)recoverPassword:(id)arg1;
- (void)configureRecoverLinkLabel;
- (void)configureAccountView;
- (double)heightForWidth:(double)arg1;
- (void)toggleVisibleInfo:(_Bool)arg1 contact:(_Bool)arg2;
- (void)signInButtonTapped:(id)arg1;
- (void)chatButtonTaped:(id)arg1;
- (void)callButtonTapped:(id)arg1;
- (void)didMoveToSuperview;
- (void)awakeFromNib;

@end

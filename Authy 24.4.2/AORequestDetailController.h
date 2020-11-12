//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AUTApprovalRequest, NSLayoutConstraint, ScrollView, UIActivityIndicatorView, UIButton, UIImageView, UILabel, _TtC5Authy11LockManager;
@protocol AORequestDetailDelegate, _TtP5Authy9AppReview_;

@interface AORequestDetailController : UIViewController
{
    id <AORequestDetailDelegate> _delegate;
    CDUnknownBlockType _returnToPreviousView;
    UIImageView *_companyLogo;
    ScrollView *_requestInfoScroll;
    UILabel *_requestInfoLabel;
    UILabel *_messageLabel;
    UIActivityIndicatorView *_approveLoadingIndicator;
    UIActivityIndicatorView *_denyLoadingIndicator;
    UILabel *_noPendingLabel;
    UIButton *_approveButton;
    UIButton *_denyButton;
    NSLayoutConstraint *_requestInfoToApproveButton;
    NSLayoutConstraint *_requestInfoToDenyButton;
    NSLayoutConstraint *_adviceLabelToInfoScrollVerticalConstraint;
    AUTApprovalRequest *_approvalRequest;
    NSLayoutConstraint *_scrollViewHeightConstraint;
    _TtC5Authy11LockManager *_lockManager;
    id <_TtP5Authy9AppReview_> _appReviewManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_TtP5Authy9AppReview_> appReviewManager; // @synthesize appReviewManager=_appReviewManager;
@property(retain, nonatomic) _TtC5Authy11LockManager *lockManager; // @synthesize lockManager=_lockManager;
@property(nonatomic) __weak NSLayoutConstraint *scrollViewHeightConstraint; // @synthesize scrollViewHeightConstraint=_scrollViewHeightConstraint;
@property(retain, nonatomic) AUTApprovalRequest *approvalRequest; // @synthesize approvalRequest=_approvalRequest;
@property(nonatomic) __weak NSLayoutConstraint *adviceLabelToInfoScrollVerticalConstraint; // @synthesize adviceLabelToInfoScrollVerticalConstraint=_adviceLabelToInfoScrollVerticalConstraint;
@property(nonatomic) __weak NSLayoutConstraint *requestInfoToDenyButton; // @synthesize requestInfoToDenyButton=_requestInfoToDenyButton;
@property(nonatomic) __weak NSLayoutConstraint *requestInfoToApproveButton; // @synthesize requestInfoToApproveButton=_requestInfoToApproveButton;
@property(nonatomic) __weak UIButton *denyButton; // @synthesize denyButton=_denyButton;
@property(nonatomic) __weak UIButton *approveButton; // @synthesize approveButton=_approveButton;
@property(nonatomic) __weak UILabel *noPendingLabel; // @synthesize noPendingLabel=_noPendingLabel;
@property(nonatomic) __weak UIActivityIndicatorView *denyLoadingIndicator; // @synthesize denyLoadingIndicator=_denyLoadingIndicator;
@property(nonatomic) __weak UIActivityIndicatorView *approveLoadingIndicator; // @synthesize approveLoadingIndicator=_approveLoadingIndicator;
@property(nonatomic) __weak UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(nonatomic) __weak UILabel *requestInfoLabel; // @synthesize requestInfoLabel=_requestInfoLabel;
@property(nonatomic) __weak ScrollView *requestInfoScroll; // @synthesize requestInfoScroll=_requestInfoScroll;
@property(nonatomic) __weak UIImageView *companyLogo; // @synthesize companyLogo=_companyLogo;
@property(copy, nonatomic) CDUnknownBlockType returnToPreviousView; // @synthesize returnToPreviousView=_returnToPreviousView;
@property(nonatomic) __weak id <AORequestDetailDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateApprovalRequest:(long long)arg1 retries:(long long)arg2;
- (void)presentAlertErrorWithMessage:(id)arg1;
- (void)enableDenyAndApproveButtons;
- (void)updateApprovalRequest:(long long)arg1;
- (void)goBackToPreviousView;
- (void)alertUserIfNetworkIsNotReachable;
- (void)denyRequest:(id)arg1;
- (void)approveRequest:(id)arg1;
- (void)setupScrollView;
- (void)setupUI;
- (void)setupNoPendingMessage;
- (id)requestAttrStr:(id)arg1;
- (id)dateFormated:(id)arg1;
- (void)configureCompanyLogoWithAuthyTokenLogo;
- (void)loadCompanyLogo;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)back:(id)arg1;
- (id)initWithPendingRequest:(id)arg1;

@end

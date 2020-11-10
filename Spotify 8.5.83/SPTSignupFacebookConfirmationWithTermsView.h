//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLoginLoadingView.h"

#import "GLUEStyleable-Protocol.h"

@class GLUEButton, GLUEImageView, GLUELabel, NSArray, NSLayoutConstraint, NSString, SPTLoginLoadingActionButton, SPTSignupAgreeToTermsView, SPTSignupTermsAndPolicyView, UIScrollView, UIStackView, UIView;

@interface SPTSignupFacebookConfirmationWithTermsView : SPTLoginLoadingView <GLUEStyleable>
{
    SPTLoginLoadingActionButton *_submitButton;
    GLUEImageView *_profilePicture;
    GLUELabel *_titleHeader;
    GLUELabel *_textBody;
    GLUELabel *_separatorLabel;
    GLUEButton *_loginButton;
    SPTSignupTermsAndPolicyView *_termsView;
    SPTSignupAgreeToTermsView *_termsFormView;
    UIScrollView *_scrollView;
    UIStackView *_separatorView;
    UIView *_separatorLeftLine;
    UIView *_separatorRightLine;
    UIView *_contentView;
    UIView *_mainContainer;
    NSArray *_profilePictureSizeConstraints;
    NSLayoutConstraint *_profilePictureTopMarginConstraint;
    NSLayoutConstraint *_titleHeaderTopMarginConstraint;
    NSLayoutConstraint *_textBodyTopMarginConstraint;
    NSLayoutConstraint *_createButtonTopMarginConstraint;
    NSLayoutConstraint *_separatorViewHorizontalMarginConstraint;
    NSLayoutConstraint *_separatorRightLineHeightConstraint;
    NSLayoutConstraint *_separatorLeftLineHeightConstraint;
    NSLayoutConstraint *_separatorViewTopMarginConstraint;
    NSLayoutConstraint *_loginButtonTopMarginConstraint;
    NSLayoutConstraint *_horizontalMarginConstraint;
    NSLayoutConstraint *_termsFormViewEdgeMargin;
    NSLayoutConstraint *_termsFormViewTopMargin;
    NSLayoutConstraint *_mainContainerCompactWidth;
    NSLayoutConstraint *_mainContainerRegularWidth;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *mainContainerRegularWidth; // @synthesize mainContainerRegularWidth=_mainContainerRegularWidth;
@property(retain, nonatomic) NSLayoutConstraint *mainContainerCompactWidth; // @synthesize mainContainerCompactWidth=_mainContainerCompactWidth;
@property(retain, nonatomic) NSLayoutConstraint *termsFormViewTopMargin; // @synthesize termsFormViewTopMargin=_termsFormViewTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *termsFormViewEdgeMargin; // @synthesize termsFormViewEdgeMargin=_termsFormViewEdgeMargin;
@property(retain, nonatomic) NSLayoutConstraint *horizontalMarginConstraint; // @synthesize horizontalMarginConstraint=_horizontalMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *loginButtonTopMarginConstraint; // @synthesize loginButtonTopMarginConstraint=_loginButtonTopMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *separatorViewTopMarginConstraint; // @synthesize separatorViewTopMarginConstraint=_separatorViewTopMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *separatorLeftLineHeightConstraint; // @synthesize separatorLeftLineHeightConstraint=_separatorLeftLineHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *separatorRightLineHeightConstraint; // @synthesize separatorRightLineHeightConstraint=_separatorRightLineHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *separatorViewHorizontalMarginConstraint; // @synthesize separatorViewHorizontalMarginConstraint=_separatorViewHorizontalMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *createButtonTopMarginConstraint; // @synthesize createButtonTopMarginConstraint=_createButtonTopMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textBodyTopMarginConstraint; // @synthesize textBodyTopMarginConstraint=_textBodyTopMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleHeaderTopMarginConstraint; // @synthesize titleHeaderTopMarginConstraint=_titleHeaderTopMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *profilePictureTopMarginConstraint; // @synthesize profilePictureTopMarginConstraint=_profilePictureTopMarginConstraint;
@property(copy, nonatomic) NSArray *profilePictureSizeConstraints; // @synthesize profilePictureSizeConstraints=_profilePictureSizeConstraints;
@property(retain, nonatomic) UIView *mainContainer; // @synthesize mainContainer=_mainContainer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *separatorRightLine; // @synthesize separatorRightLine=_separatorRightLine;
@property(retain, nonatomic) UIView *separatorLeftLine; // @synthesize separatorLeftLine=_separatorLeftLine;
@property(retain, nonatomic) UIStackView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) SPTSignupAgreeToTermsView *termsFormView; // @synthesize termsFormView=_termsFormView;
@property(readonly, nonatomic) SPTSignupTermsAndPolicyView *termsView; // @synthesize termsView=_termsView;
@property(readonly, nonatomic) GLUEButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) GLUELabel *separatorLabel; // @synthesize separatorLabel=_separatorLabel;
@property(readonly, nonatomic) GLUELabel *textBody; // @synthesize textBody=_textBody;
@property(readonly, nonatomic) GLUELabel *titleHeader; // @synthesize titleHeader=_titleHeader;
@property(readonly, nonatomic) GLUEImageView *profilePicture; // @synthesize profilePicture=_profilePicture;
- (id)submitButton;
- (void)glue_applyStyle:(id)arg1;
- (void)layoutProfilePicture;
- (void)setupConstraintsWithStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andTheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


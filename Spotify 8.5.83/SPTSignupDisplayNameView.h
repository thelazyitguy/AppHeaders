//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLoginLoadingView.h"

#import "GLUEStyleable-Protocol.h"
#import "SPTSignupAnimatableViewProtocol-Protocol.h"

@class GLUELabel, NSLayoutConstraint, NSString, SPTLoginFormScrollView, SPTLoginInputFormView, SPTLoginLoadingActionButton, SPTLoginTextField, SPTSignupAgreeToTermsView, UIView;

@interface SPTSignupDisplayNameView : SPTLoginLoadingView <GLUEStyleable, SPTSignupAnimatableViewProtocol>
{
    NSString *_transitionContextViewKey;
    SPTLoginLoadingActionButton *_submitButton;
    GLUELabel *_titleLabel;
    SPTSignupAgreeToTermsView *_termsFormView;
    SPTLoginFormScrollView *_scrollView;
    UIView *_contentView;
    UIView *_mainContainer;
    SPTLoginInputFormView *_formView;
    UIView *_separatorLineView;
    double _animatableContentViewOriginalX;
    NSLayoutConstraint *_titleLabelTopMargin;
    NSLayoutConstraint *_titleLabelEdgeMargin;
    NSLayoutConstraint *_formViewTopMargin;
    NSLayoutConstraint *_formViewHorizontalMargin;
    NSLayoutConstraint *_nextButtonTopMargin;
    NSLayoutConstraint *_mainContainerCompactWidth;
    NSLayoutConstraint *_mainContainerRegularWidth;
    NSLayoutConstraint *_termsFormViewEdgeMargin;
    NSLayoutConstraint *_termsFormViewTopMargin;
    NSLayoutConstraint *_separatorLineViewEdgeMargin;
    NSLayoutConstraint *_separatorLineViewTopMargin;
    NSLayoutConstraint *_separatorLineViewHeight;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *separatorLineViewHeight; // @synthesize separatorLineViewHeight=_separatorLineViewHeight;
@property(retain, nonatomic) NSLayoutConstraint *separatorLineViewTopMargin; // @synthesize separatorLineViewTopMargin=_separatorLineViewTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *separatorLineViewEdgeMargin; // @synthesize separatorLineViewEdgeMargin=_separatorLineViewEdgeMargin;
@property(retain, nonatomic) NSLayoutConstraint *termsFormViewTopMargin; // @synthesize termsFormViewTopMargin=_termsFormViewTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *termsFormViewEdgeMargin; // @synthesize termsFormViewEdgeMargin=_termsFormViewEdgeMargin;
@property(retain, nonatomic) NSLayoutConstraint *mainContainerRegularWidth; // @synthesize mainContainerRegularWidth=_mainContainerRegularWidth;
@property(retain, nonatomic) NSLayoutConstraint *mainContainerCompactWidth; // @synthesize mainContainerCompactWidth=_mainContainerCompactWidth;
@property(retain, nonatomic) NSLayoutConstraint *nextButtonTopMargin; // @synthesize nextButtonTopMargin=_nextButtonTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *formViewHorizontalMargin; // @synthesize formViewHorizontalMargin=_formViewHorizontalMargin;
@property(retain, nonatomic) NSLayoutConstraint *formViewTopMargin; // @synthesize formViewTopMargin=_formViewTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelEdgeMargin; // @synthesize titleLabelEdgeMargin=_titleLabelEdgeMargin;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopMargin; // @synthesize titleLabelTopMargin=_titleLabelTopMargin;
@property(nonatomic) double animatableContentViewOriginalX; // @synthesize animatableContentViewOriginalX=_animatableContentViewOriginalX;
@property(retain, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) SPTLoginInputFormView *formView; // @synthesize formView=_formView;
@property(retain, nonatomic) UIView *mainContainer; // @synthesize mainContainer=_mainContainer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SPTLoginFormScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) SPTSignupAgreeToTermsView *termsFormView; // @synthesize termsFormView=_termsFormView;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)submitButton;
@property(retain, nonatomic) NSString *transitionContextViewKey; // @synthesize transitionContextViewKey=_transitionContextViewKey;
- (void)glue_applyStyle:(id)arg1;
@property(readonly, nonatomic) UIView *animatableContentView;
@property(readonly, nonatomic) GLUELabel *inputFieldDisclosureLabel;
@property(readonly, nonatomic) SPTLoginTextField *hiddenInputField;
@property(readonly, nonatomic) SPTLoginTextField *inputField;
@property(readonly, nonatomic) GLUELabel *inputFieldTitleLabel;
- (void)setupConstraintsWithStyle:(id)arg1;
- (id)initWithStyle:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


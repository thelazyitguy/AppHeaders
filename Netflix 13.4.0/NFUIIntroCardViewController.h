//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CAShapeLayer, NFUIButton, NFUIIntroCardViewModel, NFUILabel, NSLayoutConstraint, UILabel, UIView;

@interface NFUIIntroCardViewController : UIViewController
{
    NFUIIntroCardViewModel *_viewModel;
    CDUnknownBlockType _onCompletion;
    UIView *_containerView;
    UIView *_decorationContainer;
    NFUILabel *_decorationLabel;
    UIView *_iconView;
    NFUILabel *_bodyLabel;
    NFUILabel *_headlineLabel;
    NFUILabel *_subtitleLabel;
    NFUIButton *_dismissalButton;
    UIView *_actionButtonContainer;
    NFUILabel *_actionLabel;
    UILabel *_chevron;
    NSLayoutConstraint *_actionLabelCenterXConstraint;
    NSLayoutConstraint *_chevronTrailingConstraint;
    NSLayoutConstraint *_dismissButtonBottomContraint;
    NSLayoutConstraint *_containerViewLeadingConstraint;
    NSLayoutConstraint *_containerViewTrailingConstraint;
    NSLayoutConstraint *_containerViewTopConstraint;
    NSLayoutConstraint *_containerViewBottomConstraint;
    NSLayoutConstraint *_actionButtonWidthConstraint;
    NSLayoutConstraint *_actionButtonHeightConstraint;
    NSLayoutConstraint *_subtitleHeightConstraint;
    NSLayoutConstraint *_subtitleBottomConstraint;
    NSLayoutConstraint *_labelsViewContainerCenterY;
    CAShapeLayer *_actionButtonTopRule;
    CAShapeLayer *_actionButtonBottomRule;
    CAShapeLayer *_dismissButtonTopRule;
    UIView *_iconContentView;
}

+ (id)newWithViewModel:(id)arg1 andIconContentView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *iconContentView; // @synthesize iconContentView=_iconContentView;
@property __weak CAShapeLayer *dismissButtonTopRule; // @synthesize dismissButtonTopRule=_dismissButtonTopRule;
@property __weak CAShapeLayer *actionButtonBottomRule; // @synthesize actionButtonBottomRule=_actionButtonBottomRule;
@property __weak CAShapeLayer *actionButtonTopRule; // @synthesize actionButtonTopRule=_actionButtonTopRule;
@property(nonatomic) __weak NSLayoutConstraint *labelsViewContainerCenterY; // @synthesize labelsViewContainerCenterY=_labelsViewContainerCenterY;
@property __weak NSLayoutConstraint *subtitleBottomConstraint; // @synthesize subtitleBottomConstraint=_subtitleBottomConstraint;
@property __weak NSLayoutConstraint *subtitleHeightConstraint; // @synthesize subtitleHeightConstraint=_subtitleHeightConstraint;
@property __weak NSLayoutConstraint *actionButtonHeightConstraint; // @synthesize actionButtonHeightConstraint=_actionButtonHeightConstraint;
@property __weak NSLayoutConstraint *actionButtonWidthConstraint; // @synthesize actionButtonWidthConstraint=_actionButtonWidthConstraint;
@property __weak NSLayoutConstraint *containerViewBottomConstraint; // @synthesize containerViewBottomConstraint=_containerViewBottomConstraint;
@property __weak NSLayoutConstraint *containerViewTopConstraint; // @synthesize containerViewTopConstraint=_containerViewTopConstraint;
@property __weak NSLayoutConstraint *containerViewTrailingConstraint; // @synthesize containerViewTrailingConstraint=_containerViewTrailingConstraint;
@property __weak NSLayoutConstraint *containerViewLeadingConstraint; // @synthesize containerViewLeadingConstraint=_containerViewLeadingConstraint;
@property __weak NSLayoutConstraint *dismissButtonBottomContraint; // @synthesize dismissButtonBottomContraint=_dismissButtonBottomContraint;
@property __weak NSLayoutConstraint *chevronTrailingConstraint; // @synthesize chevronTrailingConstraint=_chevronTrailingConstraint;
@property __weak NSLayoutConstraint *actionLabelCenterXConstraint; // @synthesize actionLabelCenterXConstraint=_actionLabelCenterXConstraint;
@property __weak UILabel *chevron; // @synthesize chevron=_chevron;
@property __weak NFUILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property __weak UIView *actionButtonContainer; // @synthesize actionButtonContainer=_actionButtonContainer;
@property __weak NFUIButton *dismissalButton; // @synthesize dismissalButton=_dismissalButton;
@property __weak NFUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property __weak NFUILabel *headlineLabel; // @synthesize headlineLabel=_headlineLabel;
@property __weak NFUILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property __weak UIView *iconView; // @synthesize iconView=_iconView;
@property __weak NFUILabel *decorationLabel; // @synthesize decorationLabel=_decorationLabel;
@property __weak UIView *decorationContainer; // @synthesize decorationContainer=_decorationContainer;
@property __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType onCompletion; // @synthesize onCompletion=_onCompletion;
@property(retain) NFUIIntroCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (long long)overrideUserInterfaceStyle;
- (void)recordPresentation;
- (void)endGestureLoggingContext;
- (void)startGestureLoggingContext:(id)arg1 andFocusData:(id)arg2;
- (void)showLolomoRequest:(id)arg1;
- (void)performMainAction:(id)arg1;
- (void)beDismissive;
- (void)dismiss:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)configureDecorationView;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)configureActionButtonToShow:(_Bool)arg1;
- (void)configureViews;
- (_Bool)accessibilityPerformEscape;
- (void)configureAccessibility;
- (void)logPresentation;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

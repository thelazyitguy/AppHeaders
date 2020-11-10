//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MessagingAlertTemplate.h"

@class MessagingViewController, NFUILabel, NSDictionary, NSLayoutConstraint, NSNumber, NSString, UIButton, UIImageView, UILocalizedButton, UIScrollView, UIView;

@interface MessagingAlertTemplate_EOG : MessagingAlertTemplate
{
    _Bool didShowPlans;
    MessagingViewController *_messagingViewController;
    NFUILabel *_titleLabel;
    NFUILabel *_bodyLabel;
    NFUILabel *_disclaimerLabel;
    NFUILabel *_footerLabel;
    UILocalizedButton *_continueButton;
    UILocalizedButton *_showMoreButton;
    UIButton *_closeButton;
    UIView *_contentContainer;
    UIView *_variableHeightContainer;
    UIView *_planContainer;
    UIView *_galleryView;
    UIView *_plan1View;
    UIView *_plan2View;
    UIView *_plan3View;
    UIImageView *_boxShot1ImageView;
    UIImageView *_boxShot2ImageView;
    NSLayoutConstraint *_minHeightConstraint;
    NSLayoutConstraint *_continueButtonToFooterConstraint;
    NSLayoutConstraint *_continueButtonToBodyConstraint;
    NSLayoutConstraint *_galleryViewHeightConstraint;
    NSLayoutConstraint *_footerToPlansConstraint;
    NSLayoutConstraint *_footerToContinueButtonConstraint;
    UIScrollView *_phoneScrollView;
    NSDictionary *_alert;
    NSNumber *_userSelectedPlanId;
    NSString *_userSelectedTier;
}

+ (id)supportedTemplates;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userSelectedTier; // @synthesize userSelectedTier=_userSelectedTier;
@property(retain, nonatomic) NSNumber *userSelectedPlanId; // @synthesize userSelectedPlanId=_userSelectedPlanId;
@property(retain, nonatomic) NSDictionary *alert; // @synthesize alert=_alert;
@property(nonatomic) __weak UIScrollView *phoneScrollView; // @synthesize phoneScrollView=_phoneScrollView;
@property(nonatomic) __weak NSLayoutConstraint *footerToContinueButtonConstraint; // @synthesize footerToContinueButtonConstraint=_footerToContinueButtonConstraint;
@property(nonatomic) __weak NSLayoutConstraint *footerToPlansConstraint; // @synthesize footerToPlansConstraint=_footerToPlansConstraint;
@property(nonatomic) __weak NSLayoutConstraint *galleryViewHeightConstraint; // @synthesize galleryViewHeightConstraint=_galleryViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *continueButtonToBodyConstraint; // @synthesize continueButtonToBodyConstraint=_continueButtonToBodyConstraint;
@property(nonatomic) __weak NSLayoutConstraint *continueButtonToFooterConstraint; // @synthesize continueButtonToFooterConstraint=_continueButtonToFooterConstraint;
@property(nonatomic) __weak NSLayoutConstraint *minHeightConstraint; // @synthesize minHeightConstraint=_minHeightConstraint;
@property(nonatomic) __weak UIImageView *boxShot2ImageView; // @synthesize boxShot2ImageView=_boxShot2ImageView;
@property(nonatomic) __weak UIImageView *boxShot1ImageView; // @synthesize boxShot1ImageView=_boxShot1ImageView;
@property(nonatomic) __weak UIView *plan3View; // @synthesize plan3View=_plan3View;
@property(nonatomic) __weak UIView *plan2View; // @synthesize plan2View=_plan2View;
@property(nonatomic) __weak UIView *plan1View; // @synthesize plan1View=_plan1View;
@property(nonatomic) __weak UIView *galleryView; // @synthesize galleryView=_galleryView;
@property(nonatomic) __weak UIView *planContainer; // @synthesize planContainer=_planContainer;
@property(nonatomic) __weak UIView *variableHeightContainer; // @synthesize variableHeightContainer=_variableHeightContainer;
@property(nonatomic) __weak UIView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UILocalizedButton *showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(nonatomic) __weak UILocalizedButton *continueButton; // @synthesize continueButton=_continueButton;
@property(nonatomic) __weak NFUILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(nonatomic) __weak NFUILabel *disclaimerLabel; // @synthesize disclaimerLabel=_disclaimerLabel;
@property(nonatomic) __weak NFUILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(nonatomic) __weak NFUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak MessagingViewController *messagingViewController; // @synthesize messagingViewController=_messagingViewController;
- (void)updateProductChoice:(id)arg1 tier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)tierForPlanId:(id)arg1;
- (void)clearAndClose;
- (void)footerTapped:(id)arg1;
- (void)continueButtonTapped:(id)arg1;
- (void)skipButtonTapped:(id)arg1;
- (void)closeButtonTapped:(id)arg1;
- (void)planTapped:(id)arg1;
- (void)setPlanInfo:(id)arg1 view:(id)arg2;
- (void)reloadPlans;
- (_Bool)hasPlanSelector;
- (void)setHeightConstraints;
- (void)showImageView:(id)arg1 forEntityId:(id)arg2;
- (void)messagingViewControllerViewShouldSetInitialConstraints:(id)arg1;
- (void)messagingViewControllerViewDidLoad:(id)arg1;
- (void)handleMessage:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "A9VSBaseModelInteractionViewController.h"

#import "A9VSFezSideBarViewControllerDelegate-Protocol.h"
#import "A9VSFezTooltipViewDelegate-Protocol.h"
#import "A9VSNewBrowseSheetContainerDelegate-Protocol.h"

@class A9VSFezBottomToolbar, A9VSFezSideBarViewController, A9VSFezTooltipViewController, NSArray, NSLayoutConstraint, NSString, NSTimer, UIButton, UIStackView, UIView;

@interface A9VSModelInteractionViewController : A9VSBaseModelInteractionViewController <A9VSNewBrowseSheetContainerDelegate, A9VSFezTooltipViewDelegate, A9VSFezSideBarViewControllerDelegate>
{
    _Bool _isSideBarHidden;
    _Bool _shouldMaintainHighlight;
    UIButton *_backButton;
    UIButton *_freezeBackButton;
    UIView *_cardsContainerView;
    UIView *_sideBarContainerView;
    UIButton *_tooltip;
    UIStackView *_screenCaptureButtonStack;
    UIButton *_retakeButton;
    UIButton *_shareButton;
    UIButton *_detailsPageButton;
    NSLayoutConstraint *_sideBarLandscapeWidthConstraint;
    NSLayoutConstraint *_sideBarPortraitHeightConstraint;
    NSArray *_modelGuidanceConstraint;
    A9VSFezSideBarViewController *_sideBarViewController;
    A9VSFezBottomToolbar *_bottomToolbar;
    A9VSFezTooltipViewController *_currentTooltip;
    NSTimer *_tooltipTimer;
}

@property(nonatomic) _Bool shouldMaintainHighlight; // @synthesize shouldMaintainHighlight=_shouldMaintainHighlight;
@property(retain, nonatomic) NSTimer *tooltipTimer; // @synthesize tooltipTimer=_tooltipTimer;
@property(retain, nonatomic) A9VSFezTooltipViewController *currentTooltip; // @synthesize currentTooltip=_currentTooltip;
@property(retain, nonatomic) A9VSFezBottomToolbar *bottomToolbar; // @synthesize bottomToolbar=_bottomToolbar;
@property(retain, nonatomic) A9VSFezSideBarViewController *sideBarViewController; // @synthesize sideBarViewController=_sideBarViewController;
@property(retain, nonatomic) NSArray *modelGuidanceConstraint; // @synthesize modelGuidanceConstraint=_modelGuidanceConstraint;
@property(nonatomic) __weak NSLayoutConstraint *sideBarPortraitHeightConstraint; // @synthesize sideBarPortraitHeightConstraint=_sideBarPortraitHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *sideBarLandscapeWidthConstraint; // @synthesize sideBarLandscapeWidthConstraint=_sideBarLandscapeWidthConstraint;
@property(nonatomic) __weak UIButton *detailsPageButton; // @synthesize detailsPageButton=_detailsPageButton;
@property(nonatomic) __weak UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) __weak UIButton *retakeButton; // @synthesize retakeButton=_retakeButton;
@property(nonatomic) __weak UIStackView *screenCaptureButtonStack; // @synthesize screenCaptureButtonStack=_screenCaptureButtonStack;
@property(nonatomic) __weak UIButton *tooltip; // @synthesize tooltip=_tooltip;
@property(nonatomic) __weak UIView *sideBarContainerView; // @synthesize sideBarContainerView=_sideBarContainerView;
@property(nonatomic) __weak UIView *cardsContainerView; // @synthesize cardsContainerView=_cardsContainerView;
@property(nonatomic) __weak UIButton *freezeBackButton; // @synthesize freezeBackButton=_freezeBackButton;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) _Bool isSideBarHidden; // @synthesize isSideBarHidden=_isSideBarHidden;
- (void).cxx_destruct;
- (void)didTapCloseButtonForTooltipView:(id)arg1;
- (void)hideSideBar;
- (void)showSideBar;
- (void)browseSheetDidFailToPresentProductsWithError:(id)arg1;
- (void)didSelectASINObject:(id)arg1 andMetadata:(id)arg2;
- (id)currentASIN;
- (void)sideBarViewController:(id)arg1 didTapCloseButton:(id)arg2;
- (void)detailsPageButtonPressed:(id)arg1;
- (void)pullDownModelGuidanceWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pullDownModelGuidanceWithAnimation:(_Bool)arg1;
- (void)pullUpModelGuidanceWithAnimation:(_Bool)arg1;
- (void)addGuidanceViewConstraintForPositionUp:(_Bool)arg1;
- (void)rotateGesturePerformed;
- (void)panGesturePerformed;
- (_Bool)canHandleTapForView:(id)arg1;
- (void)shareButtonTapped:(id)arg1;
- (void)retakeButtonTapped:(id)arg1;
- (void)screenCaptureButtonTapped:(id)arg1;
- (void)backButtonTapped:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)isBrowseSheetHidden;
- (_Bool)isModelGuidanceHidden;
- (void)hideAllActionbarViews;
- (void)didEnterModelStateHighlighted;
- (void)didEnterModelStateDefault;
- (void)dismissModelInteractionVCAndResetOrientationWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startTimerForTooltip:(long long)arg1;
- (void)dismissTooltip;
- (void)cancelTooltipTimer;
- (void)toggleBottomOptionViewVisibility;
- (void)updateModelState:(unsigned long long)arg1;
- (void)showInitializationGuidanceForAROrientation:(long long)arg1;
- (void)startExperience;
- (void)modelDidAppear;
- (_Bool)isModelShowing;
- (void)toggleUIStateForFreezeAction:(_Bool)arg1;
- (_Bool)canToggleModelInteractionState;
- (_Bool)isPresentedModally;
- (void)resetModelViewingState;
- (unsigned long long)getModelState;
- (void)didTapOnModelWithId:(unsigned long long)arg1;
- (void)orientationChanged;
- (void)setUpRelatedItemsViewController;
- (void)setupBottomToolbar;
- (void)tearDownModelGuidanceVC;
- (void)setupModelGuidanceVC;
- (void)addBordersAndDropShadows;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (id)overlayViewsForSceneGestureHandler:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (long long)bottomToolbarLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


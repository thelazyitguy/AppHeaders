//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "A9VSFezViewController.h"

#import "A9VSFezARSessionDelegate-Protocol.h"
#import "A9VSFezGuidanceViewControllerDelegate-Protocol.h"
#import "A9VSFezMessageBoardDelegate-Protocol.h"
#import "A9VSFezSceneGestureHandlerOverlayDelegate-Protocol.h"
#import "A9VSFezSceneGestureListener-Protocol.h"
#import "A9VSFezTelevisionRigControllerDelegate-Protocol.h"
#import "A9VSFezTopSlotDelegate-Protocol.h"

@class A9VSFezBackButton, A9VSFezDebouncer, A9VSFezMessageViewController, A9VSFezRescanButton, A9VSFezTopSlotViewController, NSLayoutConstraint, NSString, NSTimer;

@interface A9VSFezTelevisionViewController : A9VSFezViewController <A9VSFezARSessionDelegate, A9VSFezMessageBoardDelegate, A9VSFezSceneGestureHandlerOverlayDelegate, A9VSFezSceneGestureListener, A9VSFezGuidanceViewControllerDelegate, A9VSFezTelevisionRigControllerDelegate, A9VSFezTopSlotDelegate>
{
    NSTimer *_realHorizontalPlaneDetectionTimer;
    A9VSFezMessageViewController *_messageVC;
    A9VSFezTopSlotViewController *_topSlotVC;
    NSLayoutConstraint *_messageViewBottomAnchorConstraint;
    long long _topSlotVisibilityState;
    CDUnknownBlockType _topSlotPresentationBlock;
    A9VSFezRescanButton *_rescanButton;
    A9VSFezBackButton *_backButton;
    A9VSFezDebouncer *_guidanceMessageDebouncer;
    NSLayoutConstraint *_backButtonTopConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *backButtonTopConstraint; // @synthesize backButtonTopConstraint=_backButtonTopConstraint;
@property(retain, nonatomic) A9VSFezDebouncer *guidanceMessageDebouncer; // @synthesize guidanceMessageDebouncer=_guidanceMessageDebouncer;
@property(retain, nonatomic) A9VSFezBackButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) A9VSFezRescanButton *rescanButton; // @synthesize rescanButton=_rescanButton;
@property(copy, nonatomic) CDUnknownBlockType topSlotPresentationBlock; // @synthesize topSlotPresentationBlock=_topSlotPresentationBlock;
@property(nonatomic) long long topSlotVisibilityState; // @synthesize topSlotVisibilityState=_topSlotVisibilityState;
@property(retain, nonatomic) NSLayoutConstraint *messageViewBottomAnchorConstraint; // @synthesize messageViewBottomAnchorConstraint=_messageViewBottomAnchorConstraint;
@property(retain, nonatomic) A9VSFezTopSlotViewController *topSlotVC; // @synthesize topSlotVC=_topSlotVC;
@property(nonatomic) __weak A9VSFezMessageViewController *messageVC; // @synthesize messageVC=_messageVC;
@property(retain, nonatomic) NSTimer *realHorizontalPlaneDetectionTimer; // @synthesize realHorizontalPlaneDetectionTimer=_realHorizontalPlaneDetectionTimer;
- (void).cxx_destruct;
- (void)messageBoardDidUpdateFromMessage:(id)arg1 toMessage:(id)arg2;
- (void)displayGuidanceMessage;
- (void)displayOnboardingMessage;
- (void)didTouchAnchor:(id)arg1;
- (void)didTouchTelevision:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)showTopSlotAfterDelay:(double)arg1;
- (void)updateMessageViewPositionWithTopSlotVisibilityState:(long long)arg1 interfaceOrientation:(long long)arg2;
- (void)updateSubviewsForGuidanceMessage;
- (void)updateRescanButtonVisibility:(double)arg1 animated:(_Bool)arg2;
- (void)didUpdateTopSlotVisibilityTo:(long long)arg1;
- (void)didSelectProductVariant:(id)arg1 previousProductVariant:(id)arg2;
- (void)didTapSeeMoreDetailsButtonWithASIN:(id)arg1;
- (id)overlayViewsForSceneGestureHandler:(id)arg1;
- (void)didSelectRescan:(id)arg1;
- (void)debounceGuidanceMessagePresentation;
- (void)didSelectContinue:(id)arg1;
- (void)presentTopSlotViewController;
- (void)debouceTVGuidanceViewController;
- (void)presentGuidanceViewControllerOrTopSlot;
- (void)autoPlaceTelevisionRig;
- (void)arSession:(id)arg1 didPlaceProductTooClose:(_Bool)arg2;
- (void)arSession:(id)arg1 didExitLimitedTrackingState:(long long)arg2;
- (void)arSession:(id)arg1 didEnterLimitedTrackingState:(long long)arg2;
- (void)arSession:(id)arg1 didDetectPlane:(id)arg2;
- (void)engineDidRunOrRerunConfigurationWithSessionTypeAR;
- (void)engine:(id)arg1 didLoadProduct:(id)arg2 withIntent:(id)arg3;
- (void)engine:(id)arg1 didLookAtProduct:(id)arg2;
- (void)engine:(id)arg1 didRerunConfiguration:(id)arg2;
- (void)engine:(id)arg1 didRunConfiguration:(id)arg2;
- (void)presentAlertController:(id)arg1;
- (void)didFailToLoadProductModelForProduct:(id)arg1 withError:(id)arg2;
- (void)didLoadProductModelForProduct:(id)arg1;
- (void)willDownloadProductModelForProduct:(id)arg1;
- (void)loadProductModelForFocusedASINWithIntent:(id)arg1;
- (void)didFailToLoadProductForASIN:(id)arg1 withError:(id)arg2;
- (void)stopRealHorizontalPlaneDetectionTimer;
- (void)startRealHorizontalPlaneDetectionTimer;
- (void)restartRealHorizontalPlaneDetectionTimer;
- (void)presentExitAlertControllerWithConfirmation:(CDUnknownBlockType)arg1;
- (void)rescanButtonTapped;
- (void)backButtonTapped;
- (void)viewSafeAreaInsetsDidChange;
- (void)setUpViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)restartARSession;
- (void)beginARSession;
- (_Bool)isFirstTimeUser;
- (void)endMetricsSession;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


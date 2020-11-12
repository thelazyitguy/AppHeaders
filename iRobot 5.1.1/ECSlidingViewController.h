//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIViewControllerContextTransitioning-Protocol.h"
#import "UIViewControllerTransitionCoordinator-Protocol.h"
#import "UIViewControllerTransitionCoordinatorContext-Protocol.h"

@class ECSlidingAnimationController, ECSlidingInteractiveTransition, NSArray, NSMapTable, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol ECSlidingViewControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@interface ECSlidingViewController : UIViewController <UIViewControllerContextTransitioning, UIViewControllerTransitionCoordinator, UIViewControllerTransitionCoordinatorContext>
{
    double _anchorLeftPeekAmount;
    double _anchorLeftRevealAmount;
    double _anchorRightPeekAmount;
    double _anchorRightRevealAmount;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_resetTapGesture;
    UIViewController *_topViewController;
    UIViewController *_underLeftViewController;
    UIViewController *_underRightViewController;
    _Bool _preserveLeftPeekAmount;
    _Bool _preserveRightPeekAmount;
    _Bool _transitionWasCancelled;
    _Bool _isAnimated;
    _Bool _isInteractive;
    _Bool _transitionInProgress;
    NSString *_topViewControllerStoryboardId;
    NSString *_underLeftViewControllerStoryboardId;
    NSString *_underRightViewControllerStoryboardId;
    id <ECSlidingViewControllerDelegate> _delegate;
    long long _topViewAnchoredGesture;
    long long _currentTopViewPosition;
    NSArray *_customAnchoredGestures;
    double _defaultTransitionDuration;
    long long _currentOperation;
    ECSlidingAnimationController *_defaultAnimationController;
    ECSlidingInteractiveTransition *_defaultInteractiveTransition;
    id <UIViewControllerAnimatedTransitioning> _currentAnimationController;
    id <UIViewControllerInteractiveTransitioning> _currentInteractiveTransition;
    UIView *_gestureView;
    NSMapTable *_customAnchoredGesturesViewMap;
    double _currentAnimationPercentage;
    CDUnknownBlockType _animationComplete;
    CDUnknownBlockType _coordinatorAnimations;
    CDUnknownBlockType _coordinatorCompletion;
    CDUnknownBlockType _coordinatorInteractionEnded;
}

+ (id)slidingWithTopViewController:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType coordinatorInteractionEnded; // @synthesize coordinatorInteractionEnded=_coordinatorInteractionEnded;
@property(copy, nonatomic) CDUnknownBlockType coordinatorCompletion; // @synthesize coordinatorCompletion=_coordinatorCompletion;
@property(copy, nonatomic) CDUnknownBlockType coordinatorAnimations; // @synthesize coordinatorAnimations=_coordinatorAnimations;
@property(copy, nonatomic) CDUnknownBlockType animationComplete; // @synthesize animationComplete=_animationComplete;
@property(nonatomic) _Bool transitionInProgress; // @synthesize transitionInProgress=_transitionInProgress;
@property(nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
@property(nonatomic) _Bool isAnimated; // @synthesize isAnimated=_isAnimated;
@property(nonatomic) _Bool transitionWasCancelled; // @synthesize transitionWasCancelled=_transitionWasCancelled;
@property(nonatomic) _Bool preserveRightPeekAmount; // @synthesize preserveRightPeekAmount=_preserveRightPeekAmount;
@property(nonatomic) _Bool preserveLeftPeekAmount; // @synthesize preserveLeftPeekAmount=_preserveLeftPeekAmount;
@property(nonatomic) double currentAnimationPercentage; // @synthesize currentAnimationPercentage=_currentAnimationPercentage;
@property(retain, nonatomic) NSMapTable *customAnchoredGesturesViewMap; // @synthesize customAnchoredGesturesViewMap=_customAnchoredGesturesViewMap;
@property(retain, nonatomic) UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(retain, nonatomic) id <UIViewControllerInteractiveTransitioning> currentInteractiveTransition; // @synthesize currentInteractiveTransition=_currentInteractiveTransition;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> currentAnimationController; // @synthesize currentAnimationController=_currentAnimationController;
@property(retain, nonatomic) ECSlidingInteractiveTransition *defaultInteractiveTransition; // @synthesize defaultInteractiveTransition=_defaultInteractiveTransition;
@property(retain, nonatomic) ECSlidingAnimationController *defaultAnimationController; // @synthesize defaultAnimationController=_defaultAnimationController;
@property(nonatomic) long long currentOperation; // @synthesize currentOperation=_currentOperation;
@property(nonatomic) double defaultTransitionDuration; // @synthesize defaultTransitionDuration=_defaultTransitionDuration;
@property(retain, nonatomic) NSArray *customAnchoredGestures; // @synthesize customAnchoredGestures=_customAnchoredGestures;
@property(readonly, nonatomic) long long currentTopViewPosition; // @synthesize currentTopViewPosition=_currentTopViewPosition;
@property(nonatomic) long long topViewAnchoredGesture; // @synthesize topViewAnchoredGesture=_topViewAnchoredGesture;
@property(nonatomic) id <ECSlidingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *underRightViewControllerStoryboardId; // @synthesize underRightViewControllerStoryboardId=_underRightViewControllerStoryboardId;
@property(retain, nonatomic) NSString *underLeftViewControllerStoryboardId; // @synthesize underLeftViewControllerStoryboardId=_underLeftViewControllerStoryboardId;
@property(retain, nonatomic) NSString *topViewControllerStoryboardId; // @synthesize topViewControllerStoryboardId=_topViewControllerStoryboardId;
@property(retain, nonatomic) UIViewController *underRightViewController; // @synthesize underRightViewController=_underRightViewController;
@property(retain, nonatomic) UIViewController *underLeftViewController; // @synthesize underLeftViewController=_underLeftViewController;
@property(retain, nonatomic) UIViewController *topViewController; // @synthesize topViewController=_topViewController;
- (void)notifyWhenInteractionEndsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)animateAlongsideTransitionInView:(id)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGRect)finalFrameForViewController:(id)arg1;
- (struct CGRect)initialFrameForViewController:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
- (void)completeTransition:(_Bool)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated;
@property(readonly, nonatomic) UIView *containerView;
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionVelocity;
@property(readonly, nonatomic) double percentComplete;
@property(readonly, nonatomic) double transitionDuration;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic) _Bool initiallyInteractive;
- (void)resetPanGesture;
- (void)disablePanGestureInDirection:(unsigned long long)arg1;
- (void)detectPanGestureRecognizer:(id)arg1;
- (void)detectTapGestureRecognizer:(id)arg1;
- (void)updateTopViewGestures;
- (id)viewControllerWillDisappearForSuccessfulOperation:(long long)arg1;
- (id)viewControllerWillAppearForSuccessfulOperation:(long long)arg1;
- (void)endAppearanceTransitionForOperation:(long long)arg1 isCancelled:(_Bool)arg2;
- (void)beginAppearanceTransitionForOperation:(long long)arg1;
- (_Bool)operationIsValid:(long long)arg1;
- (void)animateOperation:(long long)arg1;
- (long long)operationFromPosition:(long long)arg1 toPosition:(long long)arg2;
- (struct CGRect)frameFromDelegateForViewController:(id)arg1 topViewPosition:(long long)arg2;
- (struct CGRect)underRightViewCalculatedFrameForTopViewPosition:(long long)arg1;
- (struct CGRect)underLeftViewCalculatedFrameForTopViewPosition:(long long)arg1;
- (struct CGRect)topViewCalculatedFrameForPosition:(long long)arg1;
- (void)moveTopViewToPosition:(long long)arg1 animated:(_Bool)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)resetTopViewAnimated:(_Bool)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)anchorTopViewToLeftAnimated:(_Bool)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)anchorTopViewToRightAnimated:(_Bool)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)resetTopViewAnimated:(_Bool)arg1;
- (void)anchorTopViewToLeftAnimated:(_Bool)arg1;
- (void)anchorTopViewToRightAnimated:(_Bool)arg1;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGesture;
@property(readonly, nonatomic) UITapGestureRecognizer *resetTapGesture;
@property(nonatomic) double anchorRightRevealAmount;
@property(nonatomic) double anchorRightPeekAmount;
@property(nonatomic) double anchorLeftRevealAmount;
@property(nonatomic) double anchorLeftPeekAmount;
- (id)transitionCoordinator;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)segueForUnwindingToViewController:(id)arg1 fromViewController:(id)arg2 identifier:(id)arg3;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutorotate;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (void)setup;
- (id)initWithTopViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isInterruptible;
@property(readonly) Class superclass;
@property(readonly, nonatomic) struct CGAffineTransform targetTransform;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MessageBarControllerObserver-Protocol.h"
#import "SPTBarInteractivePresentationControllerDelegate-Protocol.h"

@class NSArray, NSHashTable, NSLayoutConstraint, NSString, SPTBarAttachmentContainerViewController, SPTBarInteractivePresentationController, UITabBar, UIView;
@protocol SPTBarInteractiveTransitionParticipant, SPTBarOverlayViewController, SPTModalPresentationController;

@interface SPBarViewController : UIViewController <SPTBarInteractivePresentationControllerDelegate, MessageBarControllerObserver>
{
    _Bool _barEnabled;
    _Bool _barHidden;
    UIViewController *_contentViewController;
    UIViewController<SPTBarInteractiveTransitionParticipant> *_nowPlayingBarViewController;
    UIViewController<SPTBarOverlayViewController> *_overlayViewController;
    double _nowPlayingBarHeight;
    SPTBarInteractivePresentationController *_interactivePresentationController;
    id <SPTModalPresentationController> _modalPresentationController;
    SPTBarAttachmentContainerViewController *_barAttachmentViewController;
    NSArray *_barAttachmentConstraints;
    NSHashTable *_layoutGuideObservers;
    NSLayoutConstraint *_barAttachmentHeightConstraint;
    NSLayoutConstraint *_barAttachmentBottomConstraint;
    UIView *_barSupportAnimationView;
    UITabBar *_contentViewTabBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITabBar *contentViewTabBar; // @synthesize contentViewTabBar=_contentViewTabBar;
@property(retain, nonatomic) UIView *barSupportAnimationView; // @synthesize barSupportAnimationView=_barSupportAnimationView;
@property(nonatomic, getter=isBarHidden) _Bool barHidden; // @synthesize barHidden=_barHidden;
@property(retain, nonatomic) NSLayoutConstraint *barAttachmentBottomConstraint; // @synthesize barAttachmentBottomConstraint=_barAttachmentBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *barAttachmentHeightConstraint; // @synthesize barAttachmentHeightConstraint=_barAttachmentHeightConstraint;
@property(readonly, nonatomic) NSHashTable *layoutGuideObservers; // @synthesize layoutGuideObservers=_layoutGuideObservers;
@property(copy, nonatomic) NSArray *barAttachmentConstraints; // @synthesize barAttachmentConstraints=_barAttachmentConstraints;
@property(readonly, nonatomic) SPTBarAttachmentContainerViewController *barAttachmentViewController; // @synthesize barAttachmentViewController=_barAttachmentViewController;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) SPTBarInteractivePresentationController *interactivePresentationController; // @synthesize interactivePresentationController=_interactivePresentationController;
@property(nonatomic) double nowPlayingBarHeight; // @synthesize nowPlayingBarHeight=_nowPlayingBarHeight;
@property(nonatomic, getter=isBarEnabled) _Bool barEnabled; // @synthesize barEnabled=_barEnabled;
@property(retain, nonatomic) UIViewController<SPTBarOverlayViewController> *overlayViewController; // @synthesize overlayViewController=_overlayViewController;
@property(retain, nonatomic) UIViewController<SPTBarInteractiveTransitionParticipant> *nowPlayingBarViewController; // @synthesize nowPlayingBarViewController=_nowPlayingBarViewController;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void)messageBarController:(id)arg1 didChangeContentInset:(struct UIEdgeInsets)arg2;
- (void)notifyObserversOfBottomLayoutGuideChange;
- (void)removeContentBottomLayoutGuideObserver:(id)arg1;
- (void)addContentBottomLayoutGuideObserver:(id)arg1;
- (_Bool)interactiveGesturesEnabled;
- (id)tabBarForPresentationController:(id)arg1;
- (id)barViewControllerForPresentationController:(id)arg1;
- (void)interactivePresentationControllerNeedsDismissal:(id)arg1;
- (void)interactivePresentationControllerNeedsPresentation:(id)arg1;
- (double)tabBarHeight;
- (void)applicationStatusBarFrameDidChangeNotification;
- (void)createBarConstraints;
- (void)updateViewConstraints;
- (void)layoutBar;
@property(readonly, nonatomic) double contentBottomLayoutGuide;
- (void)setOverlayHidden:(_Bool)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool overlayHidden;
- (void)updateBarHiddenAnimated:(_Bool)arg1;
- (void)setBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showBarAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addNowPlayingBarToAttachmentViewController;
- (void)setNowPlayingBarHeight;
- (void)refreshBarHeight;
- (void)bounceBar;
- (void)hideBarAnimated:(_Bool)arg1;
- (void)removeBarAttachmentViewController:(id)arg1;
- (void)addBarAttachmentViewController:(id)arg1 atIndex:(unsigned long long)arg2 height:(double)arg3;
- (void)addViewController:(id)arg1;
- (void)addViewForViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)tearDownTabBarSnapshot:(id)arg1;
- (id)setupTabBarSnapshot;
- (void)stopBouncingBar;
- (void)tearDownBarSupportAnimationView;
- (void)setupBarSupportAnimationView;
- (void)viewDidLoad;
- (id)initWithContentViewController:(id)arg1 modalPresentationController:(id)arg2 contentViewTabBar:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

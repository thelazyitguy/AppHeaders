//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_$s7HuluAPI26StyledNavigationControllerCN.h"

@class UIViewController;
@protocol UIViewControllerTransitioningDelegate;

@interface _TtC4Hulu26PlayerNavigationController : _$s7HuluAPI26StyledNavigationControllerCN
{
    // Error parsing type: , name: supportsPortrait
    // Error parsing type: , name: doNotTryToSurfaceSurvey
    // Error parsing type: , name: panGestureRecognizer
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (_Bool)accessibilityPerformEscape;
@property(nonatomic, retain) id <UIViewControllerTransitioningDelegate> transitioningDelegate;
@property(nonatomic, readonly) unsigned long long preferredScreenEdgesDeferringSystemGestures;
@property(nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property(nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property(nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)viewDidLoad;

@end

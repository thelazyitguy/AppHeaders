//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC16NavigationCoreUI31DeclarativeNavigationController.h"

@class UIGestureRecognizer, UIViewController;
@protocol UINavigationControllerDelegate;

@interface _TtC19DLSNavigationCoreUI39StandardDeclarativeNavigationController : _TtC16NavigationCoreUI31DeclarativeNavigationController
{
    // Error parsing type: , name: $__lazy_storage_$_transitions
}

- (void).cxx_destruct;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, retain) id <UINavigationControllerDelegate> delegate;
@property(nonatomic) _Bool navigationBarHidden;
- (_Bool)isNavigationBarHidden;
@property(nonatomic, readonly) UIGestureRecognizer *interactivePopGestureRecognizer;
@property(nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property(nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property(nonatomic, readonly) _Bool prefersStatusBarHidden;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end


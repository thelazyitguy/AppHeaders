//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class CustomPopTransition, UIViewController;
@protocol SubredditContextProvider;

@interface BaseNavigationViewController : UINavigationController
{
    _Bool _statusBarHiddenOverride;
    CustomPopTransition *_customPopTransition;
    UIViewController<SubredditContextProvider> *_subredditContextProvider;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool statusBarHiddenOverride; // @synthesize statusBarHiddenOverride=_statusBarHiddenOverride;
@property(retain, nonatomic) UIViewController<SubredditContextProvider> *subredditContextProvider; // @synthesize subredditContextProvider=_subredditContextProvider;
@property(retain, nonatomic) CustomPopTransition *customPopTransition; // @synthesize customPopTransition=_customPopTransition;
- (void)showStatusBar;
- (void)resetStatusBar;
- (void)hideStatusBar;
- (void)updateStatusBarAppearanceWithAnimation;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)popViewController:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (void)updateSubredditContextProvider:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (_Bool)prefersStatusBarHidden;
- (void)traitCollectionDidChange:(id)arg1;
- (void)videoDidRotate:(id)arg1;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)arg1;

@end


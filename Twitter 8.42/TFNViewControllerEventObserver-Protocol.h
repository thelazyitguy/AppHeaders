//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/NSObject-Protocol.h>

@class UIViewController;
@protocol TFNViewControllerVisibility;

@protocol TFNViewControllerEventObserver <NSObject>

@optional
- (void)viewControllerDidTakeScreenshot:(UIViewController<TFNViewControllerVisibility> *)arg1;
- (void)viewControllerSafeAreaInsetsDidChange:(UIViewController<TFNViewControllerVisibility> *)arg1;
- (void)viewController:(UIViewController<TFNViewControllerVisibility> *)arg1 willRotateToInterfaceOrientation:(long long)arg2;
- (void)viewControllerPreviewingStateDidChange:(UIViewController<TFNViewControllerVisibility> *)arg1;
- (void)viewControllerApplicationWillResignActive:(UIViewController<TFNViewControllerVisibility> *)arg1;
- (void)viewControllerApplicationDidBecomeActive:(UIViewController<TFNViewControllerVisibility> *)arg1;
- (void)viewControllerViewDidFullyDisappear:(UIViewController<TFNViewControllerVisibility> *)arg1;
- (void)viewControllerViewWillFullyDisappear:(UIViewController<TFNViewControllerVisibility> *)arg1;
- (void)viewControllerViewDidFullyAppear:(UIViewController<TFNViewControllerVisibility> *)arg1;
- (void)viewControllerViewWillFullyAppear:(UIViewController<TFNViewControllerVisibility> *)arg1;
- (void)viewControllerViewDidLoad:(UIViewController<TFNViewControllerVisibility> *)arg1;
@end


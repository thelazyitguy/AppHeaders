//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class MessageBarController, UIView, UIViewController, UIWindow;
@protocol SPTAlertController, SPTAlertInterface;

@protocol SPTContainerUIService <SPTService>
- (UILayoutGuide * (^)(void))provideMainContentLayoutGuide;
- (void)showPopupWithViewController:(UIViewController *)arg1;
- (id <SPTAlertController>)provideAlertController;
- (id <SPTAlertInterface>)provideAlertInterface;
- (UIView *)provideAnimationView;
- (UIViewController *)provideRootPresenterViewController;
- (UIViewController *)provideRootViewController;
- (UIWindow *)provideMainWindow;
- (MessageBarController *)provideMessageBarController;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Reddit37AnonymousBrowsingSignUpViewController.h"

@protocol _TtP18AnalyticsFramework26AnalyticsScreenViewContext_;

@interface _TtC6Reddit37AnonymousBrowsingSignUpViewController (Reddit)
- (void)didTapContinueButton;
- (void)didTapEmailAuthButton;
- (void)didTapDismissButtonWithRegistrationViewController:(id)arg1;
- (void)didTapLoginButtonWithRegistrationViewController:(id)arg1;
- (void)didTapDismissButtonWithLoginViewController:(id)arg1;
- (void)didTapSignUpButtonWithLoginViewController:(id)arg1;
- (_Bool)shouldBlurBackground;
- (_Bool)shouldDismissWhenDimmerTapped;
- (_Bool)isInAnonymousBrowsing;
- (double)preferredPopupHeightForWidth:(double)arg1;
- (void)didCancel;
- (void)didConfirmOptOut;
@property(nonatomic, readonly) id <_TtP18AnalyticsFramework26AnalyticsScreenViewContext_> analyticsContext;
@end

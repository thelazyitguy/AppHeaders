//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UIImageView, UIStackView, UIView, _TtC7HuluAPI12GradientView, _TtC7HuluAPI15TabBarStackView, _TtC7HuluAPI16ProfileBarButton;

@interface _TtC4Hulu18HomeViewController : UIViewController
{
    // Error parsing type: , name: topGradientScrim
    // Error parsing type: , name: tabBarContainerView
    // Error parsing type: , name: tabBarContainerViewTopConstraint
    // Error parsing type: , name: huluLogoStackView
    // Error parsing type: , name: huluLogoStackViewLeftConstraint
    // Error parsing type: , name: tabBarStackView
    // Error parsing type: , name: tabBarStackViewRightConstraint
    // Error parsing type: , name: profileButton
    // Error parsing type: , name: huluLogoNavigation
    // Error parsing type: , name: dogfoodLogo
    // Error parsing type: , name: $__lazy_storage_$_hubsControl
    // Error parsing type: , name: hubsControlCompactConstraints
    // Error parsing type: , name: hubsControlRegularConstraints
    // Error parsing type: , name: hubsControlToTabBarConstraint
    // Error parsing type: , name: nav
    // Error parsing type: , name: hubNavItems
    // Error parsing type: , name: cachedHubs
    // Error parsing type: , name: castButton
    // Error parsing type: , name: scrollableTabBarMargin
    // Error parsing type: , name: serviceManager
    // Error parsing type: , name: accountManager
    // Error parsing type: , name: environment
    // Error parsing type: , name: notificationPromptHelper
    // Error parsing type: , name: personalizationManager
    // Error parsing type: , name: onboardingController
    // Error parsing type: , name: networkErrorViewController
    // Error parsing type: , name: entityActionDelegate
    // Error parsing type: , name: trayListViewController
    // Error parsing type: , name: pendingEntityFeedback
    // Error parsing type: , name: scrollViewLastContentOffset
    // Error parsing type: , name: notificationCenter
    // Error parsing type: , name: notificationTokens
    // Error parsing type: , name: messageController
    // Error parsing type: , name: pillTooltip
    // Error parsing type: , name: pageInstanceId
    // Error parsing type: , name: refreshDispatchItem
    // Error parsing type: , name: requestedRefreshType
    // Error parsing type: , name: accessibilityNotificationTokens
    // Error parsing type: , name: didShowOnboarding
    // Error parsing type: , name: $__lazy_storage_$_skeletonViewController
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)huluLogoTapped:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(nonatomic, retain) UIImageView *dogfoodLogo; // @synthesize dogfoodLogo;
@property(nonatomic, retain) UIImageView *huluLogoNavigation; // @synthesize huluLogoNavigation;
@property(nonatomic, retain) _TtC7HuluAPI16ProfileBarButton *profileButton; // @synthesize profileButton;
@property(nonatomic, retain) NSLayoutConstraint *tabBarStackViewRightConstraint; // @synthesize tabBarStackViewRightConstraint;
@property(nonatomic, retain) _TtC7HuluAPI15TabBarStackView *tabBarStackView; // @synthesize tabBarStackView;
@property(nonatomic, retain) NSLayoutConstraint *huluLogoStackViewLeftConstraint; // @synthesize huluLogoStackViewLeftConstraint;
@property(nonatomic, retain) UIStackView *huluLogoStackView; // @synthesize huluLogoStackView;
@property(nonatomic, retain) NSLayoutConstraint *tabBarContainerViewTopConstraint; // @synthesize tabBarContainerViewTopConstraint;
@property(nonatomic, retain) UIView *tabBarContainerView; // @synthesize tabBarContainerView;
@property(nonatomic, retain) _TtC7HuluAPI12GradientView *topGradientScrim; // @synthesize topGradientScrim;

@end

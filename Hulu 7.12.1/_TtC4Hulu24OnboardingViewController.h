//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UIView;

@interface _TtC4Hulu24OnboardingViewController : UIViewController
{
    // Error parsing type: , name: backgroundGradient
    // Error parsing type: , name: progressContainerHorizontalCenterConstraint
    // Error parsing type: , name: progressContainerLeadingConstraint
    // Error parsing type: , name: childContainerView
    // Error parsing type: , name: loadingContainerView
    // Error parsing type: , name: progressContainerView
    // Error parsing type: , name: progressContainerWidthConstraint
    // Error parsing type: , name: gradientView
    // Error parsing type: , name: progressView
    // Error parsing type: , name: animationDuration
    // Error parsing type: , name: presenter
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)finishStep;
- (void)viewDidLoad;
@property(nonatomic) long long modalPresentationStyle;
@property(nonatomic, retain) NSLayoutConstraint *progressContainerWidthConstraint; // @synthesize progressContainerWidthConstraint;
@property(nonatomic, retain) UIView *progressContainerView; // @synthesize progressContainerView;
@property(nonatomic, retain) UIView *loadingContainerView; // @synthesize loadingContainerView;
@property(nonatomic, retain) UIView *childContainerView; // @synthesize childContainerView;
@property(nonatomic, retain) NSLayoutConstraint *progressContainerLeadingConstraint; // @synthesize progressContainerLeadingConstraint;
@property(nonatomic, retain) NSLayoutConstraint *progressContainerHorizontalCenterConstraint; // @synthesize progressContainerHorizontalCenterConstraint;

@end

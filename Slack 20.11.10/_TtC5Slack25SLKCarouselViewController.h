//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, SLKSpringyButton, UIButton, UIPageControl, UIScrollView, UITapGestureRecognizer;

@interface _TtC5Slack25SLKCarouselViewController : UIViewController
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: signInHelper
    // Error parsing type: , name: topButton
    // Error parsing type: , name: bottomButton
    // Error parsing type: , name: pageControl
    // Error parsing type: , name: settingsTapGestureRecognizer
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: topConstraint
    // Error parsing type: , name: pageControlVerticalConstraint
    // Error parsing type: , name: carouselViews
    // Error parsing type: , name: viewOne
    // Error parsing type: , name: viewTwo
    // Error parsing type: , name: viewThree
    // Error parsing type: , name: viewFour
    // Error parsing type: , name: sharedChannelInviteCarouselView
    // Error parsing type: , name: isPaging
    // Error parsing type: , name: isFirstLoad
    // Error parsing type: , name: welcomeCarouselCoordinator
    // Error parsing type: , name: dependencies
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, readonly) long long preferredStatusBarUpdateAnimation;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) NSLayoutConstraint *pageControlVerticalConstraint; // @synthesize pageControlVerticalConstraint;
@property(nonatomic, retain) NSLayoutConstraint *topConstraint; // @synthesize topConstraint;
@property(nonatomic, retain) UIScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic, retain) UITapGestureRecognizer *settingsTapGestureRecognizer; // @synthesize settingsTapGestureRecognizer;
@property(nonatomic, retain) UIPageControl *pageControl; // @synthesize pageControl;
@property(nonatomic, retain) UIButton *bottomButton; // @synthesize bottomButton;
@property(nonatomic, retain) SLKSpringyButton *topButton; // @synthesize topButton;

@end

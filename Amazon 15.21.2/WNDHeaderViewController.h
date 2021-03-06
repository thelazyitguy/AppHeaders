//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWUserSubscriber-Protocol.h"

@class ANXNavMenuHeaderAvatarUtil, NSLayoutConstraint, UIImageView, UILabel, UIView;
@protocol AMIAppNavigationService, ANXMetricsService, ANXWeblabTriggerService, WNDNavHeaderEventDelegate;

@interface WNDHeaderViewController : UIViewController <AWUserSubscriber>
{
    UIView *_greetingView;
    UILabel *_greetingLabel;
    UIView *_dismissView;
    UIView *_closeView;
    UIImageView *_avatarView;
    id <WNDNavHeaderEventDelegate> _eventDelegate;
    NSLayoutConstraint *_avatarViewWidthConstraint;
    NSLayoutConstraint *_avatarTrailingConstraint;
    id <ANXMetricsService> _metricsService;
    id <AMIAppNavigationService> _appManager;
    id <ANXWeblabTriggerService> _weblabService;
    double _avatarWidth;
    double _avatarTrailingSpace;
    double _avatarViewCornerRadius;
    ANXNavMenuHeaderAvatarUtil *_avatarUtil;
    NSLayoutConstraint *_greetingViewLeadingSpace;
    NSLayoutConstraint *_greetingViewTrailingSpace;
    NSLayoutConstraint *_closeViewTrailingSpace;
}

@property(nonatomic) __weak NSLayoutConstraint *closeViewTrailingSpace; // @synthesize closeViewTrailingSpace=_closeViewTrailingSpace;
@property(nonatomic) __weak NSLayoutConstraint *greetingViewTrailingSpace; // @synthesize greetingViewTrailingSpace=_greetingViewTrailingSpace;
@property(nonatomic) __weak NSLayoutConstraint *greetingViewLeadingSpace; // @synthesize greetingViewLeadingSpace=_greetingViewLeadingSpace;
@property(retain, nonatomic) ANXNavMenuHeaderAvatarUtil *avatarUtil; // @synthesize avatarUtil=_avatarUtil;
@property(nonatomic) double avatarViewCornerRadius; // @synthesize avatarViewCornerRadius=_avatarViewCornerRadius;
@property(nonatomic) double avatarTrailingSpace; // @synthesize avatarTrailingSpace=_avatarTrailingSpace;
@property(nonatomic) double avatarWidth; // @synthesize avatarWidth=_avatarWidth;
@property(retain, nonatomic) id <ANXWeblabTriggerService> weblabService; // @synthesize weblabService=_weblabService;
@property(retain, nonatomic) id <AMIAppNavigationService> appManager; // @synthesize appManager=_appManager;
@property(retain, nonatomic) id <ANXMetricsService> metricsService; // @synthesize metricsService=_metricsService;
@property(retain, nonatomic) NSLayoutConstraint *avatarTrailingConstraint; // @synthesize avatarTrailingConstraint=_avatarTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *avatarViewWidthConstraint; // @synthesize avatarViewWidthConstraint=_avatarViewWidthConstraint;
@property(nonatomic) __weak id <WNDNavHeaderEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *closeView; // @synthesize closeView=_closeView;
@property(retain, nonatomic) UIView *dismissView; // @synthesize dismissView=_dismissView;
@property(retain, nonatomic) UILabel *greetingLabel; // @synthesize greetingLabel=_greetingLabel;
@property(retain, nonatomic) UIView *greetingView; // @synthesize greetingView=_greetingView;
- (void).cxx_destruct;
- (void)closeButtonTapped;
- (void)dismissWonderlandViewController;
- (void)avatarViewTapped;
- (void)greetingViewTapped;
- (id)getUserName;
- (double)getMaxAvailableGreetingLabelWidth;
- (double)getGreetingTextWidth:(id)arg1;
- (void)refreshGreetingLabel;
- (void)hideAvatarView;
- (void)showAvatarView;
- (void)fetchAndSetAvatarImage;
- (void)refreshAvatarView;
- (void)refreshHeaderView;
- (void)navigateToProfileWithClickStreamRefMarker:(id)arg1 profileUrlRefMarker:(id)arg2;
- (void)headerDidTap;
- (void)didReceiveLoginCancellationForUser:(id)arg1;
- (void)didReceiveLogoutConfirmationForUser:(id)arg1;
- (void)didReceiveWillLogoutConfirmationForUser:(id)arg1;
- (void)didReceiveLoginConfirmationForUser:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setupViewController;

@end


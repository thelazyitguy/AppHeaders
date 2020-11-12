//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Funny/FNBannerAdViewV2Delegate-Protocol.h>
#import <Funny/IFAdViewControllerProtocol-Protocol.h>
#import <Funny/IFBottomNotificationDisplayable-Protocol.h>
#import <Funny/IFControllerProtocol-Protocol.h>
#import <Funny/IFNavigationControllerAdDelegate-Protocol.h>
#import <Funny/IFNoFreshSetTimerDelegate-Protocol.h>

@class IFRootRouter, NSArray, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UINavigationController, UIPanGestureRecognizer, UIView, _TtC8libFunny13ModuleFactory;
@protocol IFAdBannerPresenter, IFModelProtocol, IFViewProtocol;

@interface IFAdViewController : UIViewController <FNBannerAdViewV2Delegate, IFNoFreshSetTimerDelegate, IFControllerProtocol, IFAdViewControllerProtocol, IFNavigationControllerAdDelegate, IFBottomNotificationDisplayable>
{
    UIView *adContainerView;
    UIView *contentView;
    UILabel *adTitleLabel;
    _Bool bannerOnScreen;
    UIImageView *adViewThumbView;
    _Bool needTrackViewEvent;
    _Bool leftDirection;
    _Bool isComplainButtonVisible;
    NSArray *complainButtonConstraints;
    _Bool _shouldRemoveAdBanner;
    id <IFModelProtocol> model;
    IFRootRouter *_router;
    UINavigationController *_contentController;
    id <IFAdBannerPresenter> _adBannerPresenter;
    UIView *_adView;
    UIButton *_complainButton;
    NSLayoutConstraint *_leading;
    NSLayoutConstraint *_trailing;
    UIPanGestureRecognizer *_panGestureRecognizer;
    _TtC8libFunny13ModuleFactory *_moduleFactory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC8libFunny13ModuleFactory *moduleFactory; // @synthesize moduleFactory=_moduleFactory;
@property(nonatomic) _Bool shouldRemoveAdBanner; // @synthesize shouldRemoveAdBanner=_shouldRemoveAdBanner;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) NSLayoutConstraint *trailing; // @synthesize trailing=_trailing;
@property(retain, nonatomic) NSLayoutConstraint *leading; // @synthesize leading=_leading;
@property(retain, nonatomic) UIButton *complainButton; // @synthesize complainButton=_complainButton;
@property(retain, nonatomic) UIView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) id <IFAdBannerPresenter> adBannerPresenter; // @synthesize adBannerPresenter=_adBannerPresenter;
@property(retain, nonatomic) UINavigationController *contentController; // @synthesize contentController=_contentController;
@property(retain, nonatomic) IFRootRouter *router; // @synthesize router=_router;
@property(retain, nonatomic) id <IFModelProtocol> model; // @synthesize model;
- (void)resumeRotation;
- (void)pauseRotation;
- (void)onClickNotification;
- (void)showZeroTimerNotificationWithText:(id)arg1;
- (void)showNotificationWithText:(id)arg1;
- (void)updateWithHours:(unsigned long long)arg1 minutes:(unsigned long long)arg2 seconds:(unsigned long long)arg3;
- (void)timerDidExpired;
- (id)bottomNotificationSourceView;
- (void)logBannerAdViewedWithNetworkName:(id)arg1 tierName:(id)arg2 keywords:(id)arg3 feedType:(long long)arg4 isBidding:(_Bool)arg5;
- (void)dealloc;
- (void)screenshotTaken:(id)arg1;
- (void)addConstraintsToComplainButtonWithLeading:(_Bool)arg1;
- (void)hideComplainButton;
- (void)onDrag:(id)arg1;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)bannerAdView:(id)arg1 didFailToLoadAd:(id)arg2;
- (void)bannerAdView:(id)arg1 didShowAd:(id)arg2;
- (void)bannerAdView:(id)arg1 didLoadAd:(id)arg2;
- (void)didShowController:(id)arg1;
- (void)willShowController:(id)arg1;
- (void)onComplain;
- (void)updateDebugInfoForAdView:(id)arg1;
- (void)onDidBecomeActive;
- (void)onWillResignActive;
@property(readonly, nonatomic) UIViewController *topViewController;
- (void)setFrames;
- (void)updateBannerVisibility;
- (void)removeAdView;
- (void)setUpAdViewForHeaderBiddingExperiment;
- (void)createAdView;
- (void)setAdBannerHidden:(_Bool)arg1;
- (_Bool)isVisibleAd;
- (void)hideAd;
- (void)showAd;
- (void)validateAppStateAndSetupAd;
- (void)updateAdStateWithToViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<IFViewProtocol> *view;

@end

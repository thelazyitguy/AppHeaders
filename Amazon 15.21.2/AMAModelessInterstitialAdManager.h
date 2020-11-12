//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMABaseInterstitialAdManager.h"

#import "AMABaseAdViewDelegate-Protocol.h"
#import "AMAMraidInterstitialAdViewDelegate-Protocol.h"

@class AMAMraidInterstitialAdView, AMMPTimer, AMMPTimerTarget, NSString, UIView;
@protocol AMAModelessInterstitialAdManagerDelegate;

@interface AMAModelessInterstitialAdManager : AMABaseInterstitialAdManager <AMAMraidInterstitialAdViewDelegate, AMABaseAdViewDelegate>
{
    _Bool _isImpressionPixelFired;
    _Bool _isViewable;
    id <AMAModelessInterstitialAdManagerDelegate> _delegate;
    UIView *_containerView;
    AMAMraidInterstitialAdView *_interstitialAdView;
    long long _numberOfAppearances;
    long long _numberOfFailedAttemptsToPresent;
    long long _numberOfAspectRatioFailures;
    AMMPTimer *_viewabilityTimer;
    AMMPTimerTarget *_viewabilityTimerTarget;
}

+ (id)adManagerWithDelegate:(id)arg1 containerView:(id)arg2;
@property(retain, nonatomic) AMMPTimerTarget *viewabilityTimerTarget; // @synthesize viewabilityTimerTarget=_viewabilityTimerTarget;
@property(retain, nonatomic) AMMPTimer *viewabilityTimer; // @synthesize viewabilityTimer=_viewabilityTimer;
@property(nonatomic) long long numberOfAspectRatioFailures; // @synthesize numberOfAspectRatioFailures=_numberOfAspectRatioFailures;
@property(nonatomic) long long numberOfFailedAttemptsToPresent; // @synthesize numberOfFailedAttemptsToPresent=_numberOfFailedAttemptsToPresent;
@property(nonatomic) long long numberOfAppearances; // @synthesize numberOfAppearances=_numberOfAppearances;
@property(nonatomic) _Bool isViewable; // @synthesize isViewable=_isViewable;
@property(nonatomic) _Bool isImpressionPixelFired; // @synthesize isImpressionPixelFired=_isImpressionPixelFired;
@property(retain, nonatomic) AMAMraidInterstitialAdView *interstitialAdView; // @synthesize interstitialAdView=_interstitialAdView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <AMAModelessInterstitialAdManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closeButtonPressed;
- (id)viewControllerForPresentingModalView;
- (void)interstitialAdViewDidClickOnPrivateURL:(id)arg1;
- (void)interstitialAdViewDidFailToRenderWithError:(id)arg1;
- (void)interstitialAdViewDidRender;
- (void)interstitialAdViewDidFailToPrerenderWithError:(id)arg1;
- (void)interstitialAdViewDidPrerender;
- (void)isViewable:(_Bool)arg1;
- (void)openPrivateURL:(id)arg1;
- (void)didReceiveAdHtml:(id)arg1 withInstrPixel:(id)arg2 andBridgesEnabled:(id)arg3;
- (void)didFailToLoadWithError:(id)arg1;
- (void)didLoad;
- (_Bool)canLoadInterstitial;
- (void)loadAdWithRequest:(id)arg1;
- (void)recordMetricsOnLoadAttempt;
- (void)onHidden;
- (_Bool)onPresented;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 containerView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

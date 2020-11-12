//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMAInterstitialAdManagerDelegate-Protocol.h"
#import "AMATModalInterstitialControllerDelegate-Protocol.h"

@class AMAInterstitialAdManager, AMATModalInterstitialController, NSString;
@protocol AmazonAdInterstitialDelegate, AmazonOOAdInterstitialDelegate;

@interface AmazonAdInterstitial : NSObject <AMAInterstitialAdManagerDelegate, AMATModalInterstitialControllerDelegate>
{
    id <AmazonAdInterstitialDelegate> _delegate;
    id <AmazonOOAdInterstitialDelegate> _ooDelegate;
    AMAInterstitialAdManager *_interstitialAdManager;
    AMATModalInterstitialController *_modalInterstitialController;
}

+ (id)alloc;
+ (id)amazonAdInterstitial;
@property(retain, nonatomic) AMATModalInterstitialController *modalInterstitialController; // @synthesize modalInterstitialController=_modalInterstitialController;
@property(retain, nonatomic) AMAInterstitialAdManager *interstitialAdManager; // @synthesize interstitialAdManager=_interstitialAdManager;
@property(nonatomic) __weak id <AmazonOOAdInterstitialDelegate> ooDelegate; // @synthesize ooDelegate=_ooDelegate;
@property(nonatomic) __weak id <AmazonAdInterstitialDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didFinishPlayingVideo;
- (void)willPlayVideo;
- (void)controllerDidDismissAd;
- (void)controllerWillDismissAd;
- (void)controllerDidPresentAd;
- (void)controllerWillPresentAd;
- (void)controllerFailedToLoadAd:(id)arg1;
- (void)controllerDidLoadAd;
- (void)interstitialAdManagerDidClickOnPrivateURL:(id)arg1;
- (void)interstitialAdManagerWillDismissOnLeaveApplication;
- (void)interstitialAdManagerDidDismiss;
- (void)interstitialAdManagerWillDismiss;
- (void)interstitialAdManagerDidPresent;
- (void)interstitialAdManagerWillPresent;
- (void)interstitialAdManagerDidFailToLoadWithError:(id)arg1;
- (void)interstitialAdManagerDidLoad;
- (id)adErrorFromError:(id)arg1;
- (void)submitMetricsOnFailure;
- (void)submitMetricsOnSuccess;
@property(readonly) _Bool isShowing;
@property(readonly) _Bool isReady;
- (void)presentFromViewController:(id)arg1;
- (void)load:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

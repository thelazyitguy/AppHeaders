//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMATBaseAdController.h"

#import "AMATInterstitialAdContainerDelegate-Protocol.h"

@class AMATInterstitialAdViewController, NSString, UIViewController;
@protocol AMATModalInterstitialControllerDelegate;

@interface AMATModalInterstitialController : AMATBaseAdController <AMATInterstitialAdContainerDelegate>
{
    _Bool _prerendered;
    _Bool _isDisplayed;
    id <AMATModalInterstitialControllerDelegate> _delegate;
    AMATInterstitialAdViewController *_interstitialAdViewController;
    UIViewController *_clientViewController;
}

+ (id)adControllerWithDelegate:(id)arg1;
@property(nonatomic) __weak UIViewController *clientViewController; // @synthesize clientViewController=_clientViewController;
@property(retain, nonatomic) AMATInterstitialAdViewController *interstitialAdViewController; // @synthesize interstitialAdViewController=_interstitialAdViewController;
@property(nonatomic) __weak id <AMATModalInterstitialControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool isDisplayed; // @synthesize isDisplayed=_isDisplayed;
@property(nonatomic) _Bool prerendered; // @synthesize prerendered=_prerendered;
- (void).cxx_destruct;
- (void)interstitialDidClickOnPrivateURL:(id)arg1;
- (void)closeButtonPressed;
- (void)interstitialDidFailToRenderWithError:(id)arg1;
- (void)interstitialDidRender;
- (void)interstitialDidFailToPrerenderWithError:(id)arg1;
- (void)interstitialDidPrerender;
- (void)resetProperties;
- (void)submitMetricsOnFailure;
- (void)submitMetricsOnSuccess;
- (id)viewControllerForPresentingModalView;
@property(readonly) _Bool isAnyInterstitialDisplayed;
- (_Bool)isControllerReadyToLoadAd;
- (long long)adType;
- (void)recordMetricsOnLoadAttempt;
- (_Bool)handlesAdCreativeType:(int)arg1;
- (void)modelLoadedSuccessfully:(id)arg1;
- (void)presentFromViewController:(id)arg1;
@property(readonly, nonatomic) _Bool isReady;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

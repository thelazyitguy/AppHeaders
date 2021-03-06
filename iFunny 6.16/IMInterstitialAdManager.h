//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IMAdManager.h>

#import <Funny/ASInterstitialAdProviderDelegate-Protocol.h>
#import <Funny/ASInterstitialMediationCallbackHandler-Protocol.h>
#import <Funny/ASUnifiedAuctionDelegate-Protocol.h>

@class ASCloseButton, IMAdSetModel, NSString, NSTimer, UIViewController;
@protocol ASInterstitialAdManagerDelegate;

@interface IMInterstitialAdManager : IMAdManager <ASInterstitialAdProviderDelegate, ASUnifiedAuctionDelegate, ASInterstitialMediationCallbackHandler>
{
    _Bool _allowDismissCallbacks;
    id <ASInterstitialAdManagerDelegate> _delegate;
    IMAdSetModel *_dynamicSet;
    UIViewController *_baseVC;
    ASCloseButton *_closeBtn;
    NSTimer *_unifiedAuctionTimer;
}

@property(retain, nonatomic) NSTimer *unifiedAuctionTimer; // @synthesize unifiedAuctionTimer=_unifiedAuctionTimer;
@property(nonatomic) _Bool allowDismissCallbacks; // @synthesize allowDismissCallbacks=_allowDismissCallbacks;
@property(retain, nonatomic) ASCloseButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIViewController *baseVC; // @synthesize baseVC=_baseVC;
@property(retain, nonatomic) IMAdSetModel *dynamicSet; // @synthesize dynamicSet=_dynamicSet;
@property(nonatomic) __weak id <ASInterstitialAdManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleProviderDidLoadForProvider:(id)arg1;
- (void)mediatedInterstitialAdWasClosed:(id)arg1;
- (id)viewControllerForMediatedInterstitialAd;
- (void)mediatedInterstitialAdDidFailToPresentWithStatus:(id)arg1;
- (void)mediatedInterstitialAdDidDisappear:(id)arg1;
- (void)mediatedInterstitialAdWillDisappear:(id)arg1;
- (void)mediatedInterstitialAdDidAppear:(id)arg1;
- (void)mediatedInterstitialAdWillAppear:(id)arg1;
- (void)mediatedInterstitialAdWillFireFailShow:(id)arg1;
- (void)mediatedAdDidReturnToApplication:(id)arg1;
- (void)mediatedAd:(id)arg1 didRewardWithVirtualCurrency:(id)arg2;
- (void)mediatedAdWillLeaveApplication:(id)arg1;
- (void)mediatedAdMediaDidComplete:(id)arg1;
- (void)mediatedAdWasSkipped:(id)arg1;
- (void)mediatedAd:(id)arg1 interactedWithParams:(id)arg2;
- (void)mediatedAdDidFireImpression:(id)arg1;
- (void)mediatedAd:(id)arg1 didLoad:(id)arg2;
- (void)mediatedAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdProviderDidFailBitmapCheck:(id)arg1;
- (void)interstitialAdProviderDidPassBitmapCheck:(id)arg1;
- (void)interstitialAdProviderWasClosed:(id)arg1;
- (void)interstitialAdProvider:(id)arg1 didFailToPresentWithStatus:(id)arg2;
- (void)interstitialAdProviderDidDisappear:(id)arg1;
- (void)interstitialAdProviderWillDisappear:(id)arg1;
- (void)interstitialAdProviderDidAppear:(id)arg1;
- (void)interstitialAdProviderWillAppear:(id)arg1;
- (void)interstitialAdProviderWillFireFailShow:(id)arg1;
- (void)interstitialAdProvider:(id)arg1 didPreloadAd:(id)arg2;
- (void)adProvider:(id)arg1 didRewardWithVirtualCurrency:(id)arg2;
- (void)adProviderDidReturnToApplication:(id)arg1;
- (void)adProviderWillLeaveApplication:(id)arg1;
- (void)adProviderMediaDidComplete:(id)arg1;
- (void)adProviderWasSkipped:(id)arg1;
- (void)adProvider:(id)arg1 hasInteractionWithParams:(id)arg2;
- (void)adProviderDidFireAdImpression:(id)arg1;
- (void)adProvider:(id)arg1 didLoadAd:(id)arg2;
- (void)adProvider:(id)arg1 didFailWithError:(id)arg2;
- (void)auctionDidCompleteWithResponse:(id)arg1 andError:(id)arg2;
- (void)cancelProviderAndAttemptFailOverWithError:(id)arg1;
- (void)presentInterstitialFromViewController:(id)arg1;
- (void)presentInterstitial;
- (void)dismissBaseVC;
- (void)presentBaseVCWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)removeCloseButton;
- (void)addCloseButton;
- (void)onClose;
- (void)onRenderTimeout:(id)arg1;
- (void)onShowTimeout:(id)arg1;
- (void)handleImpressionFiredForProvider:(id)arg1;
- (void)startRequestWithProvider:(id)arg1;
- (Class)getRequiredProviderClass;
- (id)createProviderForAdUnitWithPackage:(id)arg1;
- (void)processUnifiedResponse:(id)arg1;
- (void)onUnifiedAuctionTimeout:(id)arg1;
- (void)scheduleUnifiedAuctionTimer;
- (void)killUnifiedAuctionTimeout;
- (void)processAds:(id)arg1;
- (void)notifyOfLoadMetaWith:(id)arg1;
- (void)notifyOfPreload;
- (void)notifyOfLoad;
- (void)notifyAdReceivedWithMetaInfo:(id)arg1;
- (void)reportErrorToDelegate:(id)arg1;
- (void)cancel;
- (void)show;
- (void)handleDynamicCaseWithSet:(id)arg1;
- (void)loadAd;
- (void)preloadAd;
- (id)initWithAdSettings:(id)arg1 andDelegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


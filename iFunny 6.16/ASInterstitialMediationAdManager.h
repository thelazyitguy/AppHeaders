//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/ASMediationAdManager.h>

#import <Funny/ASInterstitialAdProviderDelegate-Protocol.h>
#import <Funny/ASUnifiedAuctionHelperDelegate-Protocol.h>

@class ASUnifiedAuctionHelper, NSString;
@protocol ASInterstitialMediationCallbackHandler;

@interface ASInterstitialMediationAdManager : ASMediationAdManager <ASInterstitialAdProviderDelegate, ASUnifiedAuctionHelperDelegate>
{
    _Bool _finishedMediationLoads;
    id <ASInterstitialMediationCallbackHandler> _callbackHandler;
    ASUnifiedAuctionHelper *_UAHelper;
}

@property(retain, nonatomic) ASUnifiedAuctionHelper *UAHelper; // @synthesize UAHelper=_UAHelper;
@property(nonatomic) _Bool finishedMediationLoads; // @synthesize finishedMediationLoads=_finishedMediationLoads;
@property(nonatomic) __weak id <ASInterstitialMediationCallbackHandler> callbackHandler; // @synthesize callbackHandler=_callbackHandler;
- (void).cxx_destruct;
- (void)unifiedAuctionHelper:(id)arg1 didCompleteAuctionWithDictionary:(id)arg2 andError:(id)arg3;
- (id)getMediationAdManager;
- (void)interstitialAdProviderWillFireFailShow:(id)arg1;
- (void)interstitialAdProviderWillDisappear:(id)arg1;
- (void)interstitialAdProviderWillAppear:(id)arg1;
- (void)interstitialAdProviderDidDisappear:(id)arg1;
- (void)interstitialAdProviderDidAppear:(id)arg1;
- (void)interstitialAdProvider:(id)arg1 didFailToPresentWithStatus:(id)arg2;
- (void)adProviderWillLeaveApplication:(id)arg1;
- (void)adProviderWasSkipped:(id)arg1;
- (void)adProviderMediaDidComplete:(id)arg1;
- (void)adProviderDidFireAdImpression:(id)arg1;
- (void)adProvider:(id)arg1 hasInteractionWithParams:(id)arg2;
- (void)adProvider:(id)arg1 didRewardWithVirtualCurrency:(id)arg2;
- (void)adProvider:(id)arg1 didLoadAd:(id)arg2;
- (void)adProvider:(id)arg1 didFailWithError:(id)arg2;
- (void)reportAdReturnedEvent;
- (void)pollForMediationLoadStatus;
- (void)startRequestWithProvider:(id)arg1;
- (void)attemptToLoadProvider;
- (id)createProviderClassNameUsingPrefix:(id)arg1;
- (void)showAdUsingViewController:(id)arg1;
- (id)createProviderUsingClassPrefix:(id)arg1 usingMediationCredentials:(id)arg2 andMediatedAd:(id)arg3;
- (void)loadMediation;
- (void)handleMediationJSON:(id)arg1 forAdSettings:(id)arg2 withCallbackHandler:(id)arg3;
- (void)conductAuction:(id)arg1 withAdSettings:(id)arg2 withDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

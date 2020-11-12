//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/ASCustomInterstitialAdProvider.h>

#import <Funny/MPInterstitialAdControllerDelegate-Protocol.h>

@class NSString;

@interface ASMoPubSdkInterstitialAdProvider : ASCustomInterstitialAdProvider <MPInterstitialAdControllerDelegate>
{
    _Bool _failedToReceiveAd;
    id _mpInterstitialAdController;
}

@property(nonatomic) _Bool failedToReceiveAd; // @synthesize failedToReceiveAd=_failedToReceiveAd;
@property(retain, nonatomic) id mpInterstitialAdController; // @synthesize mpInterstitialAdController=_mpInterstitialAdController;
- (void).cxx_destruct;
- (void)interstitialWillDisappear:(id)arg1;
- (void)interstitialWillAppear:(id)arg1;
- (void)interstitialDidReceiveTapEvent:(id)arg1;
- (void)interstitialDidLoadAd:(id)arg1;
- (void)interstitialDidFailToLoadAd:(id)arg1;
- (void)interstitialDidDisappear:(id)arg1;
- (void)interstitialDidAppear:(id)arg1;
- (void)putAdIntoProvider;
- (void)showPartnerAd:(id)arg1;
- (void)cancel;
- (_Bool)hasPartnerAdFailedToLoad;
- (_Bool)hasPartnerAdLoaded;
- (void)providerLoadPartnerAd;
- (void)loadPartnerAd;
- (_Bool)hasPartnerAdFailedToInitialize;
- (_Bool)hasPartnerAdInitialized;
- (void)initializePartnerAd;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/ASCustomInterstitialAdProvider.h>

#import <Funny/MTRGInterstitialAdDelegate-Protocol.h>

@class NSString;

@interface ASMyTargetSdkInterstitialAdProvider : ASCustomInterstitialAdProvider <MTRGInterstitialAdDelegate>
{
    _Bool _adLoaded;
    _Bool _adFailed;
    id _mtrgInterstitialAd;
}

@property(nonatomic) _Bool adFailed; // @synthesize adFailed=_adFailed;
@property(nonatomic) _Bool adLoaded; // @synthesize adLoaded=_adLoaded;
@property(retain, nonatomic) id mtrgInterstitialAd; // @synthesize mtrgInterstitialAd=_mtrgInterstitialAd;
- (void).cxx_destruct;
- (void)onLeaveApplicationWithInterstitialAd:(id)arg1;
- (void)onDisplayWithInterstitialAd:(id)arg1;
- (void)onVideoCompleteWithInterstitialAd:(id)arg1;
- (void)onCloseWithInterstitialAd:(id)arg1;
- (void)onClickWithInterstitialAd:(id)arg1;
- (void)onNoAdWithReason:(id)arg1 interstitialAd:(id)arg2;
- (void)onLoadWithInterstitialAd:(id)arg1;
- (void)terminatePartnerAd;
- (void)showPartnerAd:(id)arg1;
- (_Bool)hasPartnerAdFailedToLoad;
- (_Bool)hasPartnerAdLoaded;
- (void)providerLoadPartnerAd;
- (void)loadPartnerAd;
- (_Bool)hasPartnerAdFailedToInitialize;
- (_Bool)hasPartnerAdInitialized;
- (void)initializePartnerAd;
- (void)cleanUp;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


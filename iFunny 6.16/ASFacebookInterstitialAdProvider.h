//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/ASCustomInterstitialAdProvider.h>

#import <Funny/FBInterstitialAdDelegate-Protocol.h>

@class NSString;

@interface ASFacebookInterstitialAdProvider : ASCustomInterstitialAdProvider <FBInterstitialAdDelegate>
{
    _Bool _adLoaded;
    _Bool _adFailed;
    id _interstitialAd;
}

@property(nonatomic) _Bool adFailed; // @synthesize adFailed=_adFailed;
@property(nonatomic) _Bool adLoaded; // @synthesize adLoaded=_adLoaded;
@property(retain, nonatomic) id interstitialAd; // @synthesize interstitialAd=_interstitialAd;
- (void).cxx_destruct;
- (void)interstitialAdWillLogImpression:(id)arg1;
- (void)interstitialAdDidClose:(id)arg1;
- (void)interstitialAdDidClick:(id)arg1;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdDidLoad:(id)arg1;
- (void)putAdIntoProvider;
- (void)cleanupAd;
- (void)terminatePartnerAd;
- (void)cancel;
- (void)showPartnerAd:(id)arg1;
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

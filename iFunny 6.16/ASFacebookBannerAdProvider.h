//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/ASCustomBannerAdProvider.h>

#import <Funny/FBAdViewDelegate-Protocol.h>

@class NSString, UIViewController;

@interface ASFacebookBannerAdProvider : ASCustomBannerAdProvider <FBAdViewDelegate>
{
    _Bool _adLoaded;
    _Bool _adFailed;
    id _adView;
}

@property(nonatomic) _Bool adFailed; // @synthesize adFailed=_adFailed;
@property(nonatomic) _Bool adLoaded; // @synthesize adLoaded=_adLoaded;
@property(retain, nonatomic) id adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (void)adViewWillLogImpression:(id)arg1;
- (void)adViewDidLoad:(id)arg1;
- (void)adViewDidFinishHandlingClick:(id)arg1;
- (void)adViewDidClick:(id)arg1;
- (void)adView:(id)arg1 didFailWithError:(id)arg2;
- (id)partnerAdView;
- (void)terminatePartnerAd;
- (void)showPartnerAd;
- (_Bool)hasPartnerAdFailedToLoad;
- (_Bool)hasPartnerAdLoaded;
- (void)loadPartnerAd;
- (_Bool)hasPartnerAdFailedToInitialize;
- (_Bool)hasPartnerAdInitialized;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;

@end

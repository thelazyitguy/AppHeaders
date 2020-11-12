//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/MPBaseBannerAdapter.h>

#import <Funny/MPAdImpressionTimerDelegate-Protocol.h>
#import <Funny/MPPrivateBannerCustomEventDelegate-Protocol.h>

@class MPAdConfiguration, MPAdImpressionTimer, MPBannerCustomEvent, NSString, UIView;

@interface MPBannerCustomEventAdapter : MPBaseBannerAdapter <MPAdImpressionTimerDelegate, MPPrivateBannerCustomEventDelegate>
{
    _Bool _hasTrackedImpression;
    _Bool _hasTrackedClick;
    MPBannerCustomEvent *_bannerCustomEvent;
    MPAdConfiguration *_configuration;
    MPAdImpressionTimer *_impressionTimer;
    UIView *_adView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) MPAdImpressionTimer *impressionTimer; // @synthesize impressionTimer=_impressionTimer;
@property(nonatomic) _Bool hasTrackedClick; // @synthesize hasTrackedClick=_hasTrackedClick;
@property(nonatomic) _Bool hasTrackedImpression; // @synthesize hasTrackedImpression=_hasTrackedImpression;
@property(retain, nonatomic) MPAdConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) MPBannerCustomEvent *bannerCustomEvent; // @synthesize bannerCustomEvent=_bannerCustomEvent;
- (void)adViewWillLogImpression:(id)arg1;
- (void)trackImpression;
- (void)bannerCustomEventDidCollapseAd:(id)arg1;
- (void)bannerCustomEventWillExpandAd:(id)arg1;
- (void)trackClickOnce;
- (void)bannerCustomEventWillLeaveApplication:(id)arg1;
- (void)bannerCustomEventDidFinishAction:(id)arg1;
- (void)bannerCustomEventWillBeginAction:(id)arg1;
- (void)bannerCustomEvent:(id)arg1 didFailToLoadAdWithError:(id)arg2;
- (void)bannerCustomEvent:(id)arg1 didLoadAd:(id)arg2;
- (id)location;
- (id)bannerDelegate;
- (id)viewControllerForPresentingModalView;
- (id)adUnitId;
- (void)startViewableTrackingTimer;
- (void)didDisplayAd;
- (void)rotateToOrientation:(long long)arg1;
- (void)getAdWithConfiguration:(id)arg1 targeting:(id)arg2 containerSize:(struct CGSize)arg3;
- (void)unregisterDelegate;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

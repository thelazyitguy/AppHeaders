//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/MPAdViewDelegate-Protocol.h>
#import <Funny/SMABannerNetworkEvent-Protocol.h>

@class MPAdView, NSString;
@protocol SMABannerNetworkEventDelegate;

@interface SMAMoPubCSMBannerAdapter : NSObject <MPAdViewDelegate, SMABannerNetworkEvent>
{
    id <SMABannerNetworkEventDelegate> delegate;
    MPAdView *_adView;
}

@property(retain, nonatomic) MPAdView *adView; // @synthesize adView=_adView;
@property(nonatomic) __weak id <SMABannerNetworkEventDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)viewControllerForPresentingModalView;
- (void)willLeaveApplicationFromAd:(id)arg1;
- (void)didDismissModalViewForAd:(id)arg1;
- (void)willPresentModalViewForAd:(id)arg1;
- (void)adView:(id)arg1 didFailToLoadAdWithError:(id)arg2;
- (void)adViewDidLoadAd:(id)arg1 adSize:(struct CGSize)arg2;
- (void)requestBannerAdWithSize:(struct CGSize)arg1 adUnitId:(id)arg2 appId:(id)arg3 objectExtras:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/MPBannerCustomEvent.h>

#import <Funny/MPAdWebViewAgentDelegate-Protocol.h>

@class MPAdWebViewAgent, NSString;
@protocol MPPrivateBannerCustomEventDelegate;

@interface MPHTMLBannerCustomEvent : MPBannerCustomEvent <MPAdWebViewAgentDelegate>
{
    id <MPPrivateBannerCustomEventDelegate> delegate;
    MPAdWebViewAgent *_bannerAgent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPAdWebViewAgent *bannerAgent; // @synthesize bannerAgent=_bannerAgent;
@property(nonatomic) __weak id <MPPrivateBannerCustomEventDelegate> delegate; // @synthesize delegate;
- (double)requestsLoadingTimeout;
- (void)startViewabilityTracker;
- (void)trackImpressionsIncludedInMarkup;
- (void)adActionWillLeaveApplication:(id)arg1;
- (void)adActionDidFinish:(id)arg1;
- (void)adActionWillBegin:(id)arg1;
- (void)adDidClose:(id)arg1;
- (void)adDidFailToLoadAd:(id)arg1;
- (void)adDidFinishLoadingAd:(id)arg1;
- (id)viewControllerForPresentingModalView;
- (id)adUnitId;
- (void)dealloc;
- (void)requestAdWithSize:(struct CGSize)arg1 customEventInfo:(id)arg2 adMarkup:(id)arg3;
- (_Bool)enableAutomaticImpressionAndClickTracking;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

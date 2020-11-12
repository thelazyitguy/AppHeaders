//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMABaseAdManager.h"

#import "AMAWebRequestDelegate-Protocol.h"

@class NSString;

@interface AMABaseInterstitialAdManager : AMABaseAdManager <AMAWebRequestDelegate>
{
    _Bool _isDisplayed;
    double _expirationDateTime;
}

@property(nonatomic) _Bool isDisplayed; // @synthesize isDisplayed=_isDisplayed;
@property(nonatomic) double expirationDateTime; // @synthesize expirationDateTime=_expirationDateTime;
- (void)errorReceived:(id)arg1 withStatusCode:(long long)arg2;
- (void)responseReceived:(id)arg1;
- (void)handleInvalidAdContent:(id)arg1;
- (void)handleValidAdContent:(id)arg1;
- (void)loadAdDidFailWithWebRequest:(id)arg1;
- (void)loadAdDidFinishWithWebRequest:(id)arg1;
- (void)didReceiveAdHtml:(id)arg1 withInstrPixel:(id)arg2 andBridgesEnabled:(id)arg3;
- (_Bool)canLoadInterstitial;
- (void)presentFromViewController:(id)arg1;
- (void)recordMetricsOnLoadAttempt;
- (void)loadAdWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

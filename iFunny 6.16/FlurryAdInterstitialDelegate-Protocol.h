//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class FlurryAdInterstitial, NSError;

@protocol FlurryAdInterstitialDelegate <NSObject>

@optional
- (void)adInterstitial:(FlurryAdInterstitial *)arg1 adError:(int)arg2 errorDescription:(NSError *)arg3;
- (void)adInterstitialVideoDidFinish:(FlurryAdInterstitial *)arg1;
- (void)adInterstitialDidReceiveClick:(FlurryAdInterstitial *)arg1;
- (void)adInterstitialDidDismiss:(FlurryAdInterstitial *)arg1;
- (void)adInterstitialWillDismiss:(FlurryAdInterstitial *)arg1;
- (void)adInterstitialWillLeaveApplication:(FlurryAdInterstitial *)arg1;
- (void)adInterstitialWillPresent:(FlurryAdInterstitial *)arg1;
- (void)adInterstitialDidRender:(FlurryAdInterstitial *)arg1;
- (void)adInterstitialDidFetchAd:(FlurryAdInterstitial *)arg1;
@end

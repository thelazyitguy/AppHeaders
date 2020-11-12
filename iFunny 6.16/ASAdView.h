//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Funny/IMBannerCoreAdDelegate-Protocol.h>

@class ASBannerMediationAdManager, IMBannerCoreAd, NSDictionary, NSString;
@protocol ASAdViewDelegate;

@interface ASAdView : UIView <IMBannerCoreAdDelegate>
{
    _Bool _isPreload;
    _Bool _wasClicked;
    id <ASAdViewDelegate> _delegate;
    NSDictionary *_pubKeys;
    NSString *_placementID;
    NSString *_userId;
    double _bannerRefreshTimeInterval;
    IMBannerCoreAd *_bannerAd;
    ASBannerMediationAdManager *_mediationAdManager;
}

+ (id)viewWithPlacementID:(id)arg1 asAdSize:(struct CGSize)arg2 andDelegate:(id)arg3;
+ (id)viewWithPlacementID:(id)arg1 andAdSize:(struct CGSize)arg2;
@property(retain, nonatomic) ASBannerMediationAdManager *mediationAdManager; // @synthesize mediationAdManager=_mediationAdManager;
@property(nonatomic) _Bool wasClicked; // @synthesize wasClicked=_wasClicked;
@property(retain, nonatomic) IMBannerCoreAd *bannerAd; // @synthesize bannerAd=_bannerAd;
@property(nonatomic) double bannerRefreshTimeInterval; // @synthesize bannerRefreshTimeInterval=_bannerRefreshTimeInterval;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *placementID; // @synthesize placementID=_placementID;
@property(retain, nonatomic) NSDictionary *pubKeys; // @synthesize pubKeys=_pubKeys;
@property(nonatomic) _Bool isPreload; // @synthesize isPreload=_isPreload;
@property(nonatomic) __weak id <ASAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)viewForBannerAd:(id)arg1;
- (id)viewControllerForBannerAd:(id)arg1;
- (void)unifiedAd:(id)arg1 didShowWithTransaction:(id)arg2;
- (void)unifiedAd:(id)arg1 didLoadWithVirtualCurrency:(id)arg2;
- (void)unifiedAd:(id)arg1 didLoadWithTransaction:(id)arg2;
- (void)unifiedAd:(id)arg1 hasInteractionWithParams:(id)arg2;
- (void)unifiedAdMediaDidComplete:(id)arg1;
- (void)unifiedAdWillLeaveApplication:(id)arg1;
- (void)unifiedAdDidDismiss:(id)arg1;
- (void)unifiedAdWillPresent:(id)arg1;
- (void)unifiedAdDidFireAdImpression:(id)arg1;
- (void)unifiedAdDidPreload:(id)arg1;
- (void)unifiedAdDidLoad:(id)arg1;
- (void)unifiedAd:(id)arg1 didFailWithError:(id)arg2;
- (void)cancel;
- (void)showPreloadedBanner;
- (void)startAutomaticallyRefreshingContents;
- (void)stopAutomaticallyRefreshingContents;
- (void)loadAd;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithPlacementID:(id)arg1 andAdSize:(struct CGSize)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

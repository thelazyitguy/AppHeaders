//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/FBNativeAdDelegate-Protocol.h>
#import <Funny/MPAdImpressionTimerDelegate-Protocol.h>
#import <Funny/MPNativeAdAdapter-Protocol.h>
#import <Funny/_TtP15FCAdvertisement21AdNetworkNameProvider_-Protocol.h>

@class FBAdIconView, FBAdOptionsView, FBMediaView, FBNativeAd, MPAdImpressionTimer, NSDictionary, NSString, NSURL;
@protocol MPNativeAdAdapterDelegate;

@interface FacebookNativeAdAdapter : NSObject <FBNativeAdDelegate, MPAdImpressionTimerDelegate, MPNativeAdAdapter, _TtP15FCAdvertisement21AdNetworkNameProvider_>
{
    _Bool adOnView;
    NSDictionary *_properties;
    id <MPNativeAdAdapterDelegate> _delegate;
    NSString *_tierName;
    NSString *_networkName;
    FBNativeAd *_fbNativeAd;
    FBAdOptionsView *_adOptionsView;
    FBMediaView *_mediaView;
    FBAdIconView *_iconView;
    MPAdImpressionTimer *_impressionTimer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MPAdImpressionTimer *impressionTimer; // @synthesize impressionTimer=_impressionTimer;
@property(readonly, nonatomic) FBAdIconView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) FBMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(readonly, nonatomic) FBAdOptionsView *adOptionsView; // @synthesize adOptionsView=_adOptionsView;
@property(readonly, nonatomic) FBNativeAd *fbNativeAd; // @synthesize fbNativeAd=_fbNativeAd;
@property(copy, nonatomic) NSString *networkName; // @synthesize networkName=_networkName;
@property(copy, nonatomic) NSString *tierName; // @synthesize tierName=_tierName;
@property(nonatomic) __weak id <MPNativeAdAdapterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (id)adNetworkName;
- (void)dealloc;
- (void)nativeAdDidFinishHandlingClick:(id)arg1;
- (void)nativeAdDidClick:(id)arg1;
- (void)nativeAdWillLogImpression:(id)arg1;
- (void)adViewWillLogImpression:(id)arg1;
- (id)iconMediaView;
- (id)mainMediaView;
- (id)privacyInformationIconView;
- (void)adViewWillMoveToSuperview:(id)arg1;
- (void)willAttachToView:(id)arg1;
- (_Bool)enableThirdPartyClickTracking;
@property(readonly, nonatomic) NSURL *defaultActionURL;
- (id)initWithFBNativeAd:(id)arg1 adProperties:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

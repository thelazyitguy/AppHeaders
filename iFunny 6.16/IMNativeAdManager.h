//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IMAdManager.h>

#import <Funny/ASNativeAdProviderDelegate-Protocol.h>

@class NSString;
@protocol ASNativeAdMangerDelegate;

@interface IMNativeAdManager : IMAdManager <ASNativeAdProviderDelegate>
{
    id <ASNativeAdMangerDelegate> _delegate;
}

@property(nonatomic) __weak id <ASNativeAdMangerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getAdReqParams;
- (void)nativeAdProvider:(id)arg1 audioStateChange:(_Bool)arg2;
- (void)nativeAdProviderAdImpressed:(id)arg1;
- (void)nativeAdProviderWillPresentScreen:(id)arg1;
- (void)nativeAdProviderWillDismissScreen:(id)arg1;
- (void)nativeAdProviderDidPresentScreen:(id)arg1;
- (void)nativeAdProviderDidDismissScreen:(id)arg1;
- (void)nativeAdProviderWillFireNativeImpression:(id)arg1;
- (void)nativeAdProviderVideoDidComplete:(id)arg1;
- (void)adProviderWillLeaveApplication:(id)arg1;
- (void)adProviderMediaDidComplete:(id)arg1;
- (void)adProviderWasSkipped:(id)arg1;
- (void)adProvider:(id)arg1 hasInteractionWithParams:(id)arg2;
- (void)adProviderDidFireAdImpression:(id)arg1;
- (void)adProvider:(id)arg1 didFailWithError:(id)arg2;
- (void)adProvider:(id)arg1 didLoadAd:(id)arg2;
- (void)handleImpressionFiredForProvider:(id)arg1;
- (void)reportErrorToDelegate:(id)arg1;
- (void)notifyAdReceivedWithMetaInfo:(id)arg1;
- (void)notifyOfLoad;
- (void)startRequestWithProvider:(id)arg1;
- (id)createProviderForAdUnitWithPackage:(id)arg1;
- (void)fireClientFillBeaconForInline;
- (void)reportAdClickAndOpenLandingPage;
- (void)recyclePrimaryView;
- (id)primaryViewOfWidth:(double)arg1;
- (void)notifyNativeAdImpression;
- (Class)getRequiredProviderClass;
- (_Bool)videoAmongReceivedAssets:(id)arg1;
- (id)initWithAdSettings:(id)arg1 WithDelegate:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


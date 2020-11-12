//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/InterstitialShowService-Protocol.h>
#import <Funny/MPInterstitialAdControllerDelegate-Protocol.h>

@class MPInterstitialAdController, NSData, NSString, UIViewController, _TtC7FCBidor24IFHeaderBidderCompositor, _TtC7FCBidor29HeaderBidderKeywordsProcessor;
@protocol InterstitialLogService, LocationContainer, _TtP7FCBidor7Storage_;

@interface InterstitialShowServiceImpl : NSObject <MPInterstitialAdControllerDelegate, InterstitialShowService>
{
    _Bool _isPreloading;
    _TtC7FCBidor24IFHeaderBidderCompositor *_headerBidder;
    _TtC7FCBidor29HeaderBidderKeywordsProcessor *_keywordsProcessor;
    CDUnknownBlockType _onAdFinished;
    CDUnknownBlockType _onAdLoaded;
    UIViewController *_parentAdController;
    id <LocationContainer> _locationContainer;
    id <InterstitialLogService> _interstitialLogService;
    id <_TtP7FCBidor7Storage_> _bidStorage;
    MPInterstitialAdController *_interstitialController;
    NSData *_preloadedAds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *preloadedAds; // @synthesize preloadedAds=_preloadedAds;
@property(retain, nonatomic) MPInterstitialAdController *interstitialController; // @synthesize interstitialController=_interstitialController;
@property(nonatomic) _Bool isPreloading; // @synthesize isPreloading=_isPreloading;
@property(retain, nonatomic) id <_TtP7FCBidor7Storage_> bidStorage; // @synthesize bidStorage=_bidStorage;
@property(retain, nonatomic) id <InterstitialLogService> interstitialLogService; // @synthesize interstitialLogService=_interstitialLogService;
@property(retain, nonatomic) id <LocationContainer> locationContainer; // @synthesize locationContainer=_locationContainer;
@property(retain, nonatomic) UIViewController *parentAdController; // @synthesize parentAdController=_parentAdController;
@property(copy, nonatomic) CDUnknownBlockType onAdLoaded; // @synthesize onAdLoaded=_onAdLoaded;
@property(copy, nonatomic) CDUnknownBlockType onAdFinished; // @synthesize onAdFinished=_onAdFinished;
@property(retain, nonatomic) _TtC7FCBidor29HeaderBidderKeywordsProcessor *keywordsProcessor; // @synthesize keywordsProcessor=_keywordsProcessor;
@property(retain, nonatomic) _TtC7FCBidor24IFHeaderBidderCompositor *headerBidder; // @synthesize headerBidder=_headerBidder;
- (void)interstitialDidReceiveResponse:(id)arg1;
- (void)interstitialDidExpire:(id)arg1;
- (void)interstitialDidReceiveTapEvent:(id)arg1 adResponseData:(id)arg2;
- (void)interstitialDidDisappear:(id)arg1;
- (void)interstitialWillAppear:(id)arg1;
- (void)interstitialDidFailToLoadAd:(id)arg1 withError:(id)arg2 adResponseData:(id)arg3;
- (void)interstitialDidLoadAd:(id)arg1 adResponseData:(id)arg2;
- (void)clear;
- (void)onBidsLoaded:(id)arg1 mopubUnitId:(id)arg2;
- (void)cancel;
- (void)loadAdsWithMopubUnitId:(id)arg1;
- (void)showWithMopubUnitId:(id)arg1 onAdLoaded:(CDUnknownBlockType)arg2 onAdFinished:(CDUnknownBlockType)arg3 onViewController:(id)arg4;
- (void)showPreloadedAdsWithViewController:(id)arg1 onAdFinished:(CDUnknownBlockType)arg2;
- (void)preloadAdsWithMopubUnitId:(id)arg1 onAdLoaded:(CDUnknownBlockType)arg2;
- (id)initWithHeaderBidder:(id)arg1 keywordsProcessor:(id)arg2 locationContainer:(id)arg3 logService:(id)arg4 bidStorage:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

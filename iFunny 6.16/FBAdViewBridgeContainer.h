//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/FBAdBridgeContainer.h>

#import <Funny/FBAdViewDelegate-Protocol.h>

@class FBAdView, NSString, UIViewController;

@interface FBAdViewBridgeContainer : FBAdBridgeContainer <FBAdViewDelegate>
{
    FBAdView *_adView;
    CDUnknownFunctionPointerType _adViewDidClickCallback;
    CDUnknownFunctionPointerType _adViewDidFinishHandlingClickCallback;
    CDUnknownFunctionPointerType _adViewDidLoadCallback;
    CDUnknownFunctionPointerType _adViewDidFailWithErrorCallback;
    CDUnknownFunctionPointerType _adViewWillLogImpressionCallback;
}

- (void).cxx_destruct;
@property(nonatomic) CDUnknownFunctionPointerType adViewWillLogImpressionCallback; // @synthesize adViewWillLogImpressionCallback=_adViewWillLogImpressionCallback;
@property(nonatomic) CDUnknownFunctionPointerType adViewDidFailWithErrorCallback; // @synthesize adViewDidFailWithErrorCallback=_adViewDidFailWithErrorCallback;
@property(nonatomic) CDUnknownFunctionPointerType adViewDidLoadCallback; // @synthesize adViewDidLoadCallback=_adViewDidLoadCallback;
@property(nonatomic) CDUnknownFunctionPointerType adViewDidFinishHandlingClickCallback; // @synthesize adViewDidFinishHandlingClickCallback=_adViewDidFinishHandlingClickCallback;
@property(nonatomic) CDUnknownFunctionPointerType adViewDidClickCallback; // @synthesize adViewDidClickCallback=_adViewDidClickCallback;
@property(retain, nonatomic) FBAdView *adView; // @synthesize adView=_adView;
- (void)dealloc;
- (void)dispose;
- (void)adViewWillLogImpression:(id)arg1;
- (void)adView:(id)arg1 didFailWithError:(id)arg2;
- (void)adViewDidLoad:(id)arg1;
- (void)adViewDidFinishHandlingClick:(id)arg1;
- (void)adViewDidClick:(id)arg1;
- (id)initWithAdView:(id)arg1 withUniqueId:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GADNativeAd.h>

@class GADDisplayAdMeasurement, GADInternalNativeAd, GADMediaContent, GADMediaView, GADObserverCollection, GADResponseInfo, GADVideoController, NSArray, NSObject, NSString, UIView, UIViewController;
@protocol GADMediaContentDisplaying, OS_dispatch_queue;

@interface GADNativeCustomTemplateAd : GADNativeAd
{
    GADInternalNativeAd *_internalNativeAd;
    GADObserverCollection *_observers;
    _Bool _mediaContentStatusReported;
    _Bool _mediaContentRendered;
    UIView *_adChoicesContentView;
    UIViewController *_rootViewController;
    GADResponseInfo *_responseInfo;
    GADVideoController *_videoController;
    GADMediaView *_mediaView;
    GADDisplayAdMeasurement *_displayAdMeasurement;
    CDUnknownBlockType _customClickHandler;
    CDUnknownBlockType _deprecatedCustomClickHandler;
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADMediaContent *_mediaContent;
}

@property(readonly, nonatomic) GADInternalNativeAd *internalNativeAd; // @synthesize internalNativeAd=_internalNativeAd;
@property(readonly, nonatomic) GADMediaContent *mediaContent; // @synthesize mediaContent=_mediaContent;
- (void).cxx_destruct;
- (void)handleNativeAdCustomClick:(id)arg1;
@property(copy) CDUnknownBlockType customClickHandler;
- (void)recordImpression;
- (void)performClickOnAssetWithKey:(id)arg1 customClickHandler:(CDUnknownBlockType)arg2;
- (void)performClickOnAssetWithKey:(id)arg1;
@property(readonly, nonatomic) NSArray *availableAssetKeys;
- (void)setDisplayAdMeasurement:(id)arg1;
@property(readonly, nonatomic) GADDisplayAdMeasurement *displayAdMeasurement;
@property(readonly, nonatomic) GADVideoController *videoController;
@property(readonly, nonatomic) GADMediaView *mediaView;
@property(readonly, nonatomic) NSString *templateID;
- (id)stringForKey:(id)arg1;
- (id)imageForKey:(id)arg1;
- (id)description;
- (void)postDidMakeImpressionNotificationWithUserInfo:(id)arg1;
- (void)postDidReceiveUnapprovedClickNotificationWithUserInfo:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (id)adNetworkClassName;
- (id)responseInfo;
- (id)extraAssets;
@property(readonly, nonatomic) UIView *adChoicesContentView;
@property(readonly, nonatomic) id <GADMediaContentDisplaying> internalMediaContent;
- (void)reportIsMediaContentRendered:(_Bool)arg1;
- (id)init;
- (id)initWithInternalNativeAd:(id)arg1 responseInfo:(id)arg2;
- (void)dealloc;

@end

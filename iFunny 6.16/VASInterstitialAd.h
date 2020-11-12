//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/VASInterstitialAdAdapterDelegate-Protocol.h>
#import <Funny/VASPlacement-Protocol.h>

@class NSLock, NSString, VASAdSession, VASAds, VASCreativeInfo;
@protocol OS_dispatch_queue, OS_dispatch_source, VASInterstitialAdDelegate;

@interface VASInterstitialAd : NSObject <VASInterstitialAdAdapterDelegate, VASPlacement>
{
    _Bool _iOS10OrGreater;
    _Bool _expired;
    _Bool _shown;
    _Bool _clickFired;
    _Bool _impressionFired;
    id <VASInterstitialAdDelegate> _delegate;
    NSString *_placementId;
    NSLock *_propertyLock;
    VASAds *_vasAds;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    VASAdSession *_session;
    NSObject<OS_dispatch_source> *_expirationTimeoutTimer;
}

+ (id)logger;
- (void).cxx_destruct;
@property(nonatomic) _Bool impressionFired; // @synthesize impressionFired=_impressionFired;
@property(nonatomic) _Bool clickFired; // @synthesize clickFired=_clickFired;
@property(nonatomic) _Bool shown; // @synthesize shown=_shown;
@property(nonatomic) _Bool expired; // @synthesize expired=_expired;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *expirationTimeoutTimer; // @synthesize expirationTimeoutTimer=_expirationTimeoutTimer;
@property(retain, nonatomic) VASAdSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) _Bool iOS10OrGreater; // @synthesize iOS10OrGreater=_iOS10OrGreater;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) VASAds *vasAds; // @synthesize vasAds=_vasAds;
@property(retain, nonatomic) NSLock *propertyLock; // @synthesize propertyLock=_propertyLock;
@property(copy, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
@property(nonatomic) __weak id <VASInterstitialAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void)queue_stopTimeoutTimer:(id)arg1;
- (void)queue_startTimeoutTimer:(id)arg1 durationSeconds:(double)arg2 callback:(CDUnknownBlockType)arg3;
- (void)queue_stopExpirationTimer;
- (void)queue_startExpirationTimer:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setAdSession:(id)arg1;
- (id)adSession;
- (void)queue_fireClick;
- (void)queue_fireImpression;
- (void)queue_adExpired;
- (_Bool)queue_expiredBeforeShown;
- (_Bool)expiredBeforeShown;
- (void)startExpirationTimer:(id)arg1;
- (void)interstitialAdapterEvent:(id)arg1 source:(id)arg2 arguments:(id)arg3;
- (void)interstitialAdapterDidLeaveApplication;
- (void)interstitialAdapterClicked;
- (void)interstitialAdapterDidClose;
- (void)interstitialAdapterDidShow;
- (void)interstitialAdapterFailedWithError:(id)arg1;
- (void)handleAdEventFromSource:(id)arg1 eventId:(id)arg2 arguments:(id)arg3;
- (void)handleAdDidLeaveApplicationCallback;
- (void)handleAdClickedCallback;
- (void)handleAdDidClosedCallback;
- (void)handleAdDidShowCallback;
- (void)handleErrorCallback:(id)arg1;
- (void)releaseResources;
@property(readonly) VASCreativeInfo *creativeInfo;
@property(nonatomic) long long exitAnimationId;
@property(nonatomic) long long enterAnimationId;
@property(nonatomic, getter=isImmersiveEnabled) _Bool immersiveEnabled;
- (void)destroy;
- (_Bool)isDestroyed;
- (void)showFromViewController:(id)arg1;
- (void)dealloc;
- (id)initWithPlacementId:(id)arg1 adSession:(id)arg2 vasAds:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

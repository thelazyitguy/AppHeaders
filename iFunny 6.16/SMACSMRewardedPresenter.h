//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMACSMBaseAdPresenting-Protocol.h>
#import <Funny/SMARewardedNetworkEventDelegate-Protocol.h>
#import <Funny/SMARewardedVideoAdPresenting-Protocol.h>

@class NSString, SMAAdInteractor;
@protocol SMAAdPresentingDelegate, SMARewardedNetworkEvent, SMARewardedVideoAdPresenterDelegate;

@interface SMACSMRewardedPresenter : NSObject <SMARewardedVideoAdPresenting, SMACSMBaseAdPresenting, SMARewardedNetworkEventDelegate>
{
    _Bool isValid;
    unsigned long long adFormat;
    SMAAdInteractor *_adInteractor;
    id <SMARewardedVideoAdPresenterDelegate> delegate;
    NSString *sessionId;
    double adTTL;
    NSString *sci;
    CDUnknownBlockType _onLoad;
    id <SMARewardedNetworkEvent> _csmAdapter;
}

@property(retain, nonatomic) id <SMARewardedNetworkEvent> csmAdapter; // @synthesize csmAdapter=_csmAdapter;
@property(copy, nonatomic) CDUnknownBlockType onLoad; // @synthesize onLoad=_onLoad;
@property(readonly, nonatomic) NSString *sci; // @synthesize sci;
@property(nonatomic) double adTTL; // @synthesize adTTL;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId;
@property(nonatomic) _Bool isValid; // @synthesize isValid;
@property(nonatomic) __weak id <SMAAdPresentingDelegate> delegate;
@property(nonatomic) __weak SMAAdInteractor *adInteractor; // @synthesize adInteractor=_adInteractor;
@property(readonly, nonatomic) unsigned long long adFormat; // @synthesize adFormat;
- (void).cxx_destruct;
- (void)adInteractorTTLExpired:(id)arg1;
- (void)rewardedAdTTLExpired;
- (void)rewardedAdWillLeaveApplication;
- (void)rewardedAdDidDisappear;
- (void)rewardedAdWillDisappear;
- (void)rewardedAdDidClick;
- (void)rewardedAdDidAppear;
- (void)rewardedAdWillAppear;
- (void)rewardedAdDidReward;
- (void)rewardedAdDidFailWithError:(id)arg1;
- (void)rewardedAdDidFailToPresentWithError:(id)arg1;
- (void)rewardedAdDidLoad;
- (void)showFromViewController:(id)arg1;
- (void)requestAdWithAdObject:(id)arg1;
- (void)buildAdPresenterWithAdObject:(id)arg1 adapter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processNewAdState:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

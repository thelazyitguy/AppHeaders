//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/FBDisplayAdControllerDelegate-Protocol.h>

@class FBAdBaseFunnel, FBAdExperienceConfig, FBAdExtraHint, FBDisplayAdController, FBRewardedVideoRewardData, NSString;
@protocol FBAdsManager, FBRewardedVideoAdDelegate;

@interface FBRewardedVideoAd : NSObject <FBDisplayAdControllerDelegate>
{
    _Bool _adRequested;
    _Bool _adLoaded;
    _Bool _adFailed;
    _Bool _adShown;
    NSString *_placementID;
    id <FBRewardedVideoAdDelegate> _delegate;
    FBDisplayAdController *_adController;
    FBAdBaseFunnel *_funnel;
    id <FBAdsManager> _adsManager;
    FBRewardedVideoRewardData *_rewardData;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool adShown; // @synthesize adShown=_adShown;
@property(nonatomic) _Bool adFailed; // @synthesize adFailed=_adFailed;
@property(nonatomic) _Bool adLoaded; // @synthesize adLoaded=_adLoaded;
@property(nonatomic) _Bool adRequested; // @synthesize adRequested=_adRequested;
@property(retain, nonatomic) FBRewardedVideoRewardData *rewardData; // @synthesize rewardData=_rewardData;
@property(retain, nonatomic) id <FBAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(retain, nonatomic) FBAdBaseFunnel *funnel; // @synthesize funnel=_funnel;
@property(retain, nonatomic) FBDisplayAdController *adController; // @synthesize adController=_adController;
@property(nonatomic) __weak id <FBRewardedVideoAdDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *placementID; // @synthesize placementID=_placementID;
- (void)displayAdControllerServerRewardFailed:(id)arg1;
- (void)displayAdControllerServerRewardSuccess:(id)arg1;
- (void)displayAdControllerVideoComplete:(id)arg1;
- (void)displayAdControllerStopped:(id)arg1;
- (void)displayAdControllerUserClosed:(id)arg1;
- (void)displayAdControllerClickThrough:(id)arg1;
- (void)displayAdControllerImpression:(id)arg1;
- (void)displayAdController:(id)arg1 didFailWithError:(id)arg2;
- (void)displayAdControllerLoaded:(id)arg1;
- (void)resetAdController;
@property(retain, nonatomic) FBAdExtraHint *extraHint;
@property(copy, nonatomic) FBAdExperienceConfig *adExperienceConfig;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
- (_Bool)showAdFromRootViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)showAdFromRootViewController:(id)arg1;
- (_Bool)setRewardDataWithUserID:(id)arg1 withCurrency:(id)arg2;
- (void)loadAdWithBidPayload:(id)arg1;
- (void)loadAd;
- (void)tellDelegateThatWeDidFailWithError:(id)arg1;
- (void)doLoadAd:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)initWithPlacementID:(id)arg1 withUserID:(id)arg2 withCurrency:(id)arg3;
- (id)initWithPlacementID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


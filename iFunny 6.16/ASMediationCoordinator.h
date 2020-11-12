//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/ASCustomAdapterInstanceDelegate-Protocol.h>

@class ASMediationRefreshUtil, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ASMediationCoordinator : NSObject <ASCustomAdapterInstanceDelegate>
{
    NSObject<OS_dispatch_queue> *_mediationQ;
    NSMutableArray *_initializedPartnerClasses;
    NSDictionary *_credentialConfig;
    NSMutableDictionary *_hashAds;
    ASMediationRefreshUtil *_refreshUtil;
    long long _wifiLimit;
    long long _networkLimit;
}

+ (_Bool)cleanUpReservedAdForAsplcConfig:(id)arg1 forManager:(id)arg2;
+ (_Bool)unreserveAsplcConfig:(id)arg1 forManager:(id)arg2;
+ (_Bool)isRefreshReservedForAsplcConfig:(id)arg1 forManager:(id)arg2;
+ (_Bool)isReservedForAsplcConfig:(id)arg1 forManager:(id)arg2;
+ (void)reserveAsplcConfig:(id)arg1 forManager:(id)arg2;
+ (void)reportConnectionErrorAndTimeoutForMediationStillLoadingForManager:(id)arg1;
+ (void)removeRemainingLoadingAdsForAdMananger:(id)arg1;
+ (void)preloadMediationWithAdManager:(id)arg1 andCompletionBlock:(CDUnknownBlockType)arg2;
+ (void)preloadInterstitialForClass:(Class)arg1 asplcConfig:(id)arg2 andManager:(id)arg3;
+ (id)medEventsForProvider:(id)arg1;
+ (id)medEventsForAsplcConfig:(id)arg1 andManager:(id)arg2;
+ (id)getOrCreateEventsForMediatedAd:(id)arg1 forAsplcConfig:(id)arg2 andAdManager:(id)arg3;
+ (id)createMediatedAdWithStatus:(long long)arg1;
+ (double)timeoutForAsplcConfig:(id)arg1;
+ (id)baseEventUrlForAsplcConfig:(id)arg1;
+ (long long)getAdStatusFoHashStr:(id)arg1;
+ (long long)getAdStatusForAsplcConfig:(id)arg1;
+ (id)getCachedAdForAsplcConfig:(id)arg1;
+ (id)adDictionaryForAsplcConfig:(id)arg1;
+ (id)adDictionaryForHash:(id)arg1;
+ (id)credentialHashStrForAsplcConfig:(id)arg1;
+ (id)configForAsplcConfig:(id)arg1;
+ (void)initRefreshTimeWithRefreshConfig:(id)arg1;
+ (void)initSimultaneousLimitWithConfig:(id)arg1;
+ (void)initCredentialConfigWithAdapterConfig:(id)arg1;
+ (void)addCredentialConfigWith:(id)arg1 forAdapterName:(id)arg2 andAsplcConfig:(id)arg3 withVC:(_Bool)arg4 andBaseEventUrl:(id)arg5;
+ (id)adapterNameFromClassPrefix:(id)arg1;
+ (id)generateCredConfigEntryWithConfig:(id)arg1 withAdapterName:(id)arg2;
+ (void)initWithAdapterConfig:(id)arg1;
+ (id)coordinator;
@property(nonatomic) long long networkLimit; // @synthesize networkLimit=_networkLimit;
@property(nonatomic) long long wifiLimit; // @synthesize wifiLimit=_wifiLimit;
@property(retain, nonatomic) ASMediationRefreshUtil *refreshUtil; // @synthesize refreshUtil=_refreshUtil;
@property(retain, nonatomic) NSMutableDictionary *hashAds; // @synthesize hashAds=_hashAds;
@property(retain, nonatomic) NSDictionary *credentialConfig; // @synthesize credentialConfig=_credentialConfig;
@property(retain, nonatomic) NSMutableArray *initializedPartnerClasses; // @synthesize initializedPartnerClasses=_initializedPartnerClasses;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mediationQ; // @synthesize mediationQ=_mediationQ;
- (void).cxx_destruct;
- (void)customAdapterInstance:(id)arg1 didFailToLoadAdWithError:(id)arg2 withAsplcConfig:(id)arg3 withManager:(id)arg4;
- (void)customAdapterInstance:(id)arg1 didLoadAd:(id)arg2 withAsplcConfig:(id)arg3 withManager:(id)arg4;
- (void)checkForLoadingMediationAdaptersForAdManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/MPAdServerCommunicatorDelegate-Protocol.h>
#import <Funny/MPNativeCustomEventDelegate-Protocol.h>

@class MPAdConfiguration, MPAdServerCommunicator, MPNativeAdRequestTargeting, MPNativeCustomEvent, MPStopwatch, MPTimer, NSArray, NSError, NSMutableArray, NSString, NSURL;
@protocol MPNativeAdRenderer;

@interface MPNativeAdRequest : NSObject <MPNativeCustomEventDelegate, MPAdServerCommunicatorDelegate>
{
    _Bool _loading;
    MPNativeAdRequestTargeting *_targeting;
    MPNativeCustomEvent *_nativeCustomEvent;
    MPAdConfiguration *_adConfiguration;
    NSError *_lastMoPubSecondInstanceAdRequestError;
    NSString *_adUnitId;
    NSArray *_rendererConfigurations;
    NSURL *_URL;
    MPAdServerCommunicator *_communicator;
    CDUnknownBlockType _completionHandler;
    NSMutableArray *_remainingConfigurations;
    id <MPNativeAdRenderer> _customEventRenderer;
    MPTimer *_timeoutTimer;
    MPStopwatch *_loadStopwatch;
    NSURL *_mostRecentlyLoadedURL;
}

+ (id)requestWithAdUnitIdentifier:(id)arg1 rendererConfigurations:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *mostRecentlyLoadedURL; // @synthesize mostRecentlyLoadedURL=_mostRecentlyLoadedURL;
@property(retain, nonatomic) MPStopwatch *loadStopwatch; // @synthesize loadStopwatch=_loadStopwatch;
@property(retain, nonatomic) MPTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) id <MPNativeAdRenderer> customEventRenderer; // @synthesize customEventRenderer=_customEventRenderer;
@property(retain, nonatomic) NSMutableArray *remainingConfigurations; // @synthesize remainingConfigurations=_remainingConfigurations;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) MPAdServerCommunicator *communicator; // @synthesize communicator=_communicator;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSArray *rendererConfigurations; // @synthesize rendererConfigurations=_rendererConfigurations;
@property(copy, nonatomic) NSString *adUnitId; // @synthesize adUnitId=_adUnitId;
@property(retain, nonatomic) NSError *lastMoPubSecondInstanceAdRequestError; // @synthesize lastMoPubSecondInstanceAdRequestError=_lastMoPubSecondInstanceAdRequestError;
@property(retain, nonatomic) MPAdConfiguration *adConfiguration; // @synthesize adConfiguration=_adConfiguration;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) MPNativeCustomEvent *nativeCustomEvent; // @synthesize nativeCustomEvent=_nativeCustomEvent;
@property(retain, nonatomic) MPNativeAdRequestTargeting *targeting; // @synthesize targeting=_targeting;
- (double)requestsLoadingTimeout;
- (void)didStopLoading;
- (void)timeout;
- (void)startTimeoutTimer;
- (void)nativeCustomEvent:(id)arg1 didFailToLoadAdWithError:(id)arg2;
- (void)nativeCustomEvent:(id)arg1 didLoadAd:(id)arg2;
- (_Bool)isFullscreenAd;
- (void)communicatorDidFailWithError:(id)arg1;
- (void)communicatorDidReceiveAdConfigurations:(id)arg1;
- (void)fetchAdWithConfiguration:(id)arg1;
- (void)completeAdRequestWithAdObject:(id)arg1 error:(id)arg2;
- (void)failAdRequest;
- (void)getAdWithConfiguration:(id)arg1;
- (void)loadAdWithURL:(id)arg1;
- (void)assignCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startForAdSequence:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithAdUnitIdentifier:(id)arg1 rendererConfigurations:(id)arg2;
- (void)if_logTimeoutWithTierName:(id)arg1 networkName:(id)arg2 keywords:(id)arg3 timeoutType:(unsigned long long)arg4 timeInMilliseconds:(double)arg5 feedType:(long long)arg6 adIdentifier:(id)arg7 isBidding:(_Bool)arg8;
- (void)if_logFailedRequestWithTierName:(id)arg1 networkName:(id)arg2 keywords:(id)arg3 loadingBeganTime:(double)arg4 feedType:(long long)arg5 adIdentifier:(id)arg6 isBidding:(_Bool)arg7 error:(id)arg8;
- (void)if_logSuccessRequestSuccessWithTierName:(id)arg1 networkName:(id)arg2 keywords:(id)arg3 loadingBeganTime:(double)arg4 feedType:(long long)arg5 adIdentifier:(id)arg6 isBidding:(_Bool)arg7;
- (void)if_logNativeAdRequestStartWithNetworkName:(id)arg1 tierName:(id)arg2;
- (id)dspFormatter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

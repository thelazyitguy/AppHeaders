//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPNativeAdRequestTargeting, NSArray, NSError, NSMutableArray, NSString;
@protocol MPNativeAdSourceQueueDelegate;

@interface MPNativeAdSourceQueue : NSObject
{
    double loadingBeganTime;
    _Bool _isAdLoading;
    _Bool _isAlredyRequestPerformed;
    id <MPNativeAdSourceQueueDelegate> _delegate;
    NSString *_adUnitIdentifier;
    NSError *_lastRequestError;
    NSError *_lastMoPubSecondInstanceAdRequestError;
    NSMutableArray *_adQueue;
    unsigned long long _adFetchRetryCounter;
    unsigned long long _currentSequence;
    MPNativeAdRequestTargeting *_targeting;
    NSArray *_rendererConfigurations;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAlredyRequestPerformed; // @synthesize isAlredyRequestPerformed=_isAlredyRequestPerformed;
@property(nonatomic) _Bool isAdLoading; // @synthesize isAdLoading=_isAdLoading;
@property(retain, nonatomic) NSArray *rendererConfigurations; // @synthesize rendererConfigurations=_rendererConfigurations;
@property(retain, nonatomic) MPNativeAdRequestTargeting *targeting; // @synthesize targeting=_targeting;
@property(nonatomic) unsigned long long currentSequence; // @synthesize currentSequence=_currentSequence;
@property(nonatomic) unsigned long long adFetchRetryCounter; // @synthesize adFetchRetryCounter=_adFetchRetryCounter;
@property(retain, nonatomic) NSMutableArray *adQueue; // @synthesize adQueue=_adQueue;
@property(retain, nonatomic) NSError *lastMoPubSecondInstanceAdRequestError; // @synthesize lastMoPubSecondInstanceAdRequestError=_lastMoPubSecondInstanceAdRequestError;
@property(retain, nonatomic) NSError *lastRequestError; // @synthesize lastRequestError=_lastRequestError;
@property(copy, nonatomic) NSString *adUnitIdentifier; // @synthesize adUnitIdentifier=_adUnitIdentifier;
@property(nonatomic) __weak id <MPNativeAdSourceQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (id)tierName;
- (void)replenishCache;
- (void)loadAds;
- (void)resetBackoff;
- (_Bool)isAdAgeValid:(id)arg1 withMaxAge:(double)arg2;
- (void)cancelRequests;
- (unsigned long long)count;
- (void)addNativeAd:(id)arg1;
- (id)dequeueAdWithMaxAge:(double)arg1;
- (id)dequeueAd;
- (id)initWithAdUnitIdentifier:(id)arg1 rendererConfigurations:(id)arg2 andTargeting:(id)arg3;
- (void)if_didFailToLoadAdapterForTargeting:(id)arg1 error:(id)arg2;
- (_Bool)canLogEvents;
- (id)eventNameSuffix;
- (void)if_logFailedAdAttemptWithLoadingBeganTime:(double)arg1 error:(id)arg2 feedType:(long long)arg3;
- (void)if_logSuccessAdAttemptLoadingBeganTime:(double)arg1 tierName:(id)arg2 feedType:(long long)arg3 creativeId:(id)arg4;

@end

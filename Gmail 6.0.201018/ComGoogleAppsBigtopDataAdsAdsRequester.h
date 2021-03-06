//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsXplatHttpRetryStrategy, NSString;
@protocol ComGoogleAppsBigtopDataNetworkCaribouApiCaribouServerClient, ComGoogleCommonTimeClock, JBTLoggingCounterManager, JBTLoggingLatencyMeasurements, JBTSettingsClient, JavaxInjectProvider, XPTCountersApi;

@interface ComGoogleAppsBigtopDataAdsAdsRequester : NSObject
{
    id <ComGoogleAppsBigtopDataNetworkCaribouApiCaribouServerClient> caribouServerClient_;
    id <JavaxInjectProvider> clientInfoProvider_;
    id <JavaxInjectProvider> executor_;
    ComGoogleAppsXplatHttpRetryStrategy *exponentialBackoffRetryStrategy_;
    id <JBTSettingsClient> settingsClient_;
    id <JBTLoggingCounterManager> counterManager_;
    id <JBTLoggingLatencyMeasurements> latencyMeasurements_;
    id <ComGoogleCommonTimeClock> clock_;
    NSString *forcedAdIds_;
    id <XPTCountersApi> countersApi_;
}

+ (void)initialize;
- (void)dealloc;
- (id)fetchAdsWithComGoogleCommonBaseOptional:(id)arg1 withComGoogleCommonBaseOptional:(id)arg2 withJavaUtilList:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseNetworkService.h>

@class GIMMe, NSMutableDictionary, YTECatcherController, YTGlobalConfigsApplier, YTInnerTubeResponseCache, YTNetworkRetryConfig, YTVisitorDataRequestDecorator;
@protocol YTDeviceAuthenticator, YTIdentityProvider, YTInnerTubeSharedData, YTNetworkBaselineLogger, YTNetworkHealthLogger, YTVisitorDataStore;

@interface YTBaseInnerTubeService : YTBaseNetworkService
{
    id <YTDeviceAuthenticator> _deviceAuthenticator;
    id <YTIdentityProvider> _identityProvider;
    id <YTNetworkHealthLogger> _networkHealthLogger;
    id <YTNetworkBaselineLogger> _networkBaselineLogger;
    YTNetworkRetryConfig *_defaultInnertubeRetryConfig;
    YTVisitorDataRequestDecorator *_visitorDataRequestDecorator;
    _Bool _enableConsistencyTokenJars;
    _Bool _useIdentityProviderForVisitorData;
    _Bool _nonnullActiveIdentityEnabled;
    _Bool _useSpatulaHeadersForNetworkRequests;
    _Bool _disableBrotliCompression;
    double _defaultTimeoutInterval;
    GIMMe *_gimme;
    id <YTInnerTubeSharedData> _innerTubeSharedData;
    id <YTVisitorDataStore> _visitorDataStore;
    YTGlobalConfigsApplier *_globalConfigsApplier;
    YTInnerTubeResponseCache *_innerTubeResponseCache;
    NSMutableDictionary *_pendingRequests;
    YTECatcherController *_eCatcherController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTECatcherController *eCatcherController; // @synthesize eCatcherController=_eCatcherController;
@property(retain, nonatomic) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) YTInnerTubeResponseCache *innerTubeResponseCache; // @synthesize innerTubeResponseCache=_innerTubeResponseCache;
@property(readonly, nonatomic) YTGlobalConfigsApplier *globalConfigsApplier; // @synthesize globalConfigsApplier=_globalConfigsApplier;
@property(readonly, nonatomic) id <YTVisitorDataStore> visitorDataStore; // @synthesize visitorDataStore=_visitorDataStore;
@property(readonly, nonatomic) id <YTInnerTubeSharedData> innerTubeSharedData; // @synthesize innerTubeSharedData=_innerTubeSharedData;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)hotConfigDidChange:(id)arg1;
- (void)logIfNullIdentity:(id)arg1;
- (_Bool)isVisitorDataWritable;
- (_Bool)didActiveUserChange:(id)arg1;
- (id)ssoAuthorizationFromIdentity:(id)arg1;
- (void)storeInnerTubeSharedDataFromResponseContext:(id)arg1;
- (id)processInnerTubeResponse:(id)arg1 requestState:(id)arg2;
- (void)processStreamedResponseErrorWithRequestState:(id)arg1 error:(id)arg2 request:(id)arg3;
- (void)processStreamedResponseCompletionWithRequestState:(id)arg1 request:(id)arg2;
- (void)processStreamedResponseValueWithRequestState:(id)arg1 data:(id)arg2;
- (_Bool)resolveStreamedResponseWithPromiseForRequestWithRequestState:(id)arg1;
- (_Bool)resolveStreamedResponseFromCacheWithRequestState:(id)arg1;
- (void)processErrorResponseWithRequestState:(id)arg1 error:(id)arg2 request:(id)arg3;
- (void)processDataResponseWithRequestState:(id)arg1 data:(id)arg2 request:(id)arg3;
- (_Bool)resolveWithPromiseForRequestWithRequestState:(id)arg1;
- (_Bool)resolveFromCacheWithRequestState:(id)arg1;
- (id)URLRequestWithRequest:(id)arg1 method:(id)arg2 timeoutInterval:(double)arg3;
- (unsigned long long)statisticsOptionsWithEnableLatencyTicks:(_Bool)arg1;
- (void)clearCaches;
- (void)performHTTPRequest:(id)arg1 withIdentity:(id)arg2 valueHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4 retryEnabled:(_Bool)arg5;
- (void)makePOSTRequest:(id)arg1 withParser:(id)arg2 innerTubeValueHandler:(CDUnknownBlockType)arg3 innerTubeCompletionHandler:(CDUnknownBlockType)arg4 retryEnabled:(_Bool)arg5 timeoutInterval:(double)arg6 enableLatencyTicks:(_Bool)arg7;
- (void)performHTTPRequest:(id)arg1 service:(long long)arg2 withIdentity:(id)arg3 dataBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5 retryEnabled:(_Bool)arg6 nilIdentityIsSignedOut:(_Bool)arg7;
- (void)makePOSTRequest:(id)arg1 withParser:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 retryEnabled:(_Bool)arg4 timeoutInterval:(double)arg5 enableLatencyTicks:(_Bool)arg6 mutableSharedData:(id)arg7 nilIdentityIsSignedOut:(_Bool)arg8;
- (id)defaultRetryConfig;
- (id)initWithOperationQueue:(id)arg1 fetcherService:(id)arg2;

@end

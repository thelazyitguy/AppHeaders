//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataNetworkSyncserverApiSyncServerClient-Protocol.h"

@class ComGoogleAppsBigtopSyncCommonSyncServerUriProvider, JavaUtilConcurrentAtomicAtomicInteger, NSString;
@protocol ComGoogleAppsBigtopDataNetworkSyncserverHttpRetryConfigProviderForRpcMethod, ComGoogleAppsXplatHttpHttpClient, ComGoogleAppsXplatHttpHttpSerializer, ComGoogleAppsXplatHttpProtoSerializerFactory, JavaUtilConcurrentExecutor, JavaxInjectProvider, XPTCountersApi;

@interface ComGoogleAppsBigtopDataNetworkSyncserverHttpSyncServerClient : NSObject <ComGoogleAppsBigtopDataNetworkSyncserverApiSyncServerClient>
{
    id <JavaUtilConcurrentExecutor> networkExecutor_;
    JavaUtilConcurrentAtomicAtomicInteger *nextRequestSerialId_;
    ComGoogleAppsBigtopSyncCommonSyncServerUriProvider *uriProvider_;
    id <ComGoogleAppsXplatHttpHttpClient> httpClient_;
    id <ComGoogleAppsXplatHttpProtoSerializerFactory> protoSerializerFactory_;
    id <ComGoogleAppsXplatHttpHttpSerializer> cumulusSerializer_;
    id <JavaxInjectProvider> appInfoHeaderProvider_;
    id <JavaxInjectProvider> defaultNetProtoRequestProvider_;
    id <ComGoogleAppsBigtopDataNetworkSyncserverHttpRetryConfigProviderForRpcMethod> httpRetryConfigProviderForRpcMethod_;
    id <XPTCountersApi> countersApi_;
    _Bool j2clInterop_;
}

+ (void)initialize;
- (void)dealloc;
- (id)doRequestWithComGoogleAppsBigtopSyncCommonSyncServerUriProvider_RpcMethod:(id)arg1 withComGoogleProtobufMessageLite:(id)arg2 withComGoogleProtobufMessageLite:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

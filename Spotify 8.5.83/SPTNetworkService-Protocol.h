//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class SPTDataLoaderFactory, SPTDataLoaderService;
@protocol SPTHTTPService, SPTNetworkConnectivityController, SPTReachabilityMonitor, SPTVideoURLAssetLoader;

@protocol SPTNetworkService <SPTService>
- (id <SPTReachabilityMonitor>)provideReachabilityForInternetConnection;
- (id <SPTHTTPService>)provideHTTPService;
- (SPTDataLoaderService *)provideDataLoaderService;
- (id <SPTVideoURLAssetLoader>)provideVideoAssetLoaderWithHTTPMaximumConnectionsPerHost:(long long)arg1 timeoutIntervalForRequest:(double)arg2 timeoutIntervalForResource:(double)arg3;
- (id <SPTVideoURLAssetLoader>)provideVideoAssetLoader;
- (id <SPTNetworkConnectivityController>)provideNetworkConnectivityController;
- (SPTDataLoaderFactory *)provideDataLoaderFactory;
@end


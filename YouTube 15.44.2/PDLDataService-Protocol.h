//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GPCPromise, NSObject, NSString, PDLClientConfig;
@protocol OS_dispatch_queue, PDLMetricsLogger;

@protocol PDLDataService <NSObject>
- (GPCPromise *)loadTopNCacheIfNecessaryWithClientConfig:(PDLClientConfig *)arg1 metricsLogger:(id <PDLMetricsLogger>)arg2;
- (GPCPromise *)loadTopNCacheWithIsBackgroundOperation:(_Bool)arg1 clientConfig:(PDLClientConfig *)arg2 metricsLogger:(id <PDLMetricsLogger>)arg3;
- (void)bootstrapStarlightCacheWithClientConfig:(PDLClientConfig *)arg1;
- (GPCPromise *)autocompletePeopleByQuery:(NSString *)arg1 client:(NSString *)arg2 withQueue:(NSObject<OS_dispatch_queue> *)arg3 clientConfig:(PDLClientConfig *)arg4 metricsLogger:(id <PDLMetricsLogger>)arg5;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplFiltersFactoryApiFilterConfigFactory-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, NSString;
@protocol ComGoogleAppsBigtopSyncClientImplClustersFactoryApiClusterFetcher, ComGoogleAppsXplatDaggerAsyncProvider, ComGoogleCaribouComponentsServerpermidsItemServerPermIdParser;

@interface ComGoogleAppsBigtopSyncClientImplFiltersFactoryFilterConfigFactoryImpl : NSObject <ComGoogleAppsBigtopSyncClientImplFiltersFactoryApiFilterConfigFactory>
{
    id <ComGoogleAppsBigtopSyncClientImplClustersFactoryApiClusterFetcher> clusterFetcher_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> conversationsProvider_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    id <ComGoogleCaribouComponentsServerpermidsItemServerPermIdParser> itemServerPermIdParser_;
}

+ (void)initialize;
- (void)dealloc;
- (id)createFilterConfigFromProtoWithIdWithJBTId:(id)arg1 withComGoogleAppsBigtopServicesFiltersBigTopFilter:(id)arg2;
- (id)createFilterConfigFromProtoWithComGoogleAppsBigtopServicesFiltersBigTopFilter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

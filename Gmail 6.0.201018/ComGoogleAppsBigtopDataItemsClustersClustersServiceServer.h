//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataItemsClustersApiClustersService-Protocol.h"

@class NSString;
@protocol ComGoogleAppsBigtopDataItemsClustersApiClustersFetcher, JBTSettingsClient, JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsClustersClustersServiceServer : NSObject <ComGoogleAppsBigtopDataItemsClustersApiClustersService>
{
    id <ComGoogleAppsBigtopDataItemsClustersApiClustersFetcher> clustersFetcher_;
    id <JavaxInjectProvider> executor_;
    _Bool includeInboxSectionsInClusterConfigs_;
    id <JBTSettingsClient> settingsClient_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getAllCustomClusters;
- (id)getAllCustomClusterServerPermIdsByDeprecatedCanonicalLabelNameForAndroid;
- (id)getClustersByIdsWithComGoogleAppsBigtopDataItemsItemsProto_GetClustersByIdsRequest:(id)arg1;
- (id)getClusterByIdWithComGoogleAppsBigtopDataItemsItemsProto_GetClusterByIdRequest:(id)arg1;
- (id)getClusterListWithComGoogleAppsBigtopDataItemsItemsProto_GetClusterListRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsXplatServicesGeneratedServiceDispatcher.h"

#import "ComGoogleAppsBigtopDataItemsClustersApiClustersService-Protocol.h"

@class NSString;

@interface ComGoogleAppsBigtopDataItemsClustersApiClustersService_ServiceDispatcher : ComGoogleAppsXplatServicesGeneratedServiceDispatcher <ComGoogleAppsBigtopDataItemsClustersApiClustersService>
{
}

+ (void)initialize;
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

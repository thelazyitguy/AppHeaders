//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplClustersFactoryClusterConfigImpl.h"

#import "JBTCustomClusterConfig-Protocol.h"
#import "JBTTagDescribed-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplFiltersFilterIdGenerator, NSString;
@protocol JavaUtilList;

@interface ComGoogleAppsBigtopSyncClientImplClustersFactoryCustomClusterConfigImpl : ComGoogleAppsBigtopSyncClientImplClustersFactoryClusterConfigImpl <JBTCustomClusterConfig, JBTTagDescribed>
{
    ComGoogleAppsBigtopSyncClientImplFiltersFilterIdGenerator *filterIdGenerator_;
    id <JavaUtilList> clusterFilters_;
}

- (void)dealloc;
- (id)getTagDescriptors;
- (id)getClusterType;
- (id)toBuilder;
- (id)getClusterFilters;
- (_Bool)isCustom;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

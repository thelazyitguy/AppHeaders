//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplClusterlistsClusterListsComponentImpl-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopSyncClientImplClusterlistsDaggerClusterListsComponentImpl : NSObject <ComGoogleAppsBigtopSyncClientImplClusterlistsClusterListsComponentImpl>
{
    id <JavaxInjectProvider> applicationInfoProvider_;
    id <JavaxInjectProvider> getLabelComparatorProvider_;
    id <JavaxInjectProvider> getClusterRankComparatorProvider_;
    id <JavaxInjectProvider> clusterComparatorProvider_;
    id <JavaxInjectProvider> getClusterConfigElementProducerFactoryProvider_;
    id <JavaxInjectProvider> getClusterFetcherProvider_;
    id <JavaxInjectProvider> getClusterConfigRankerProvider_;
    id <JavaxInjectProvider> xplatCountersApiProvider_;
    id <JavaxInjectProvider> includeInboxInSystemElementsSectionProvider_;
    id <JavaxInjectProvider> isImapAccountProvider_;
    id <JavaxInjectProvider> getLiveListsManagerProvider_;
    id <JavaxInjectProvider> getMessageVisibilityHelperFactoryProvider_;
    id <JavaxInjectProvider> getRankLockedItemUpdateEnabledProvider_;
    id <JavaxInjectProvider> provideSapiSpanFactoryProvider_;
    id <JavaxInjectProvider> systemClustersProvider_;
    id <JavaxInjectProvider> vaultClustersProvider_;
    id <JavaxInjectProvider> assistiveLabelsMoveToLabelAsEnabledProvider_;
    id <JavaxInjectProvider> clusterConfigListFactoryProvider_;
    id <JavaxInjectProvider> clusterListsImplProvider_;
}

- (void)dealloc;
- (id)getClusterLists;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

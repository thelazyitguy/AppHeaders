//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DaggerInternalFactory-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopSyncClientImplClusterlistsClusterConfigListFactory_Factory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> bigTopApplicationInfoProvider_;
    id <JavaxInjectProvider> clusterComparatorProvider_;
    id <JavaxInjectProvider> clusterConfigElementProducerFactoryProvider_;
    id <JavaxInjectProvider> clusterFetcherProvider_;
    id <JavaxInjectProvider> clusterConfigRankerProvider_;
    id <JavaxInjectProvider> countersApiProvider_;
    id <JavaxInjectProvider> includeInboxInSystemElementsSectionProvider_;
    id <JavaxInjectProvider> isImapAccountProvider_;
    id <JavaxInjectProvider> liveListsManagerProvider_;
    id <JavaxInjectProvider> messageVisibilityHelperFactoryProvider_;
    id <JavaxInjectProvider> rankLockedItemUpdateEnabledProvider_;
    id <JavaxInjectProvider> sapiSpanFactoryProvider_;
    id <JavaxInjectProvider> systemClustersProvider_;
    id <JavaxInjectProvider> vaultClustersProvider_;
    id <JavaxInjectProvider> assistiveLabelsMoveToLabelAsEnabledProvider_;
}

- (void)dealloc;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


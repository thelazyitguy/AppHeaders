//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig, ComGoogleAppsBigtopSyncClientImplItemsSelectAllApplierImpl, ComGoogleCommonBaseOptional, ComGoogleCommonCollectImmutableList, JBTCommand_Type;
@protocol JBTCallback, JBTSpan;

@interface ComGoogleAppsBigtopSyncClientImplItemsSelectAllApplierImpl_SelectAllCommand : NSObject
{
    ComGoogleAppsBigtopSyncClientImplItemsSelectAllApplierImpl *this$0_;
    ComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig *itemListConfig_;
    JBTCommand_Type *commandType_;
    ComGoogleCommonBaseOptional *clusterConfig_;
    ComGoogleCommonBaseOptional *changeLabelsInfo_;
    ComGoogleCommonBaseOptional *organizationElement_;
    ComGoogleCommonBaseOptional *applyFilterConfig_;
    ComGoogleCommonCollectImmutableList *additionalItemsToProcessIndividually_;
    ComGoogleCommonBaseOptional *mailVersionOverride_;
    id <JBTCallback> localCallback_;
    id <JBTCallback> remoteCallback_;
    id <JBTSpan> span_;
    _Bool applied_;
}

- (void)dealloc;
- (id)apply;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataItemsItemlistsStorageItemListsStorageComponentImpl-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsItemlistsStorageDaggerItemListsStorageComponentImpl : NSObject <ComGoogleAppsBigtopDataItemsItemlistsStorageItemListsStorageComponentImpl>
{
    id <JavaxInjectProvider> jobQueueProvider_;
    id <JavaxInjectProvider> getItemsEvictorJobFactoryProvider_;
    id <JavaxInjectProvider> backfillItemsEvictorJobFactoryImplProvider_;
    id <JavaxInjectProvider> getItemsCoordinatorProvider_;
    id <JavaxInjectProvider> getItemsQueryProtoCacheProvider_;
    id <JavaxInjectProvider> getVisibleLabelsFetcherProvider_;
    id <JavaxInjectProvider> currentJobExecutorProvider_;
    id <JavaxInjectProvider> listByIdsItemListEntryFetcherProvider_;
    id <JavaxInjectProvider> getItemsQueryManagerProvider_;
    id <JavaxInjectProvider> queryBasedItemListEntryFetcherProvider_;
}

- (void)dealloc;
- (id)getQueryBasedItemListEntryFetcher;
- (id)getListByIdsItemListEntryFetcher;
- (id)getBackfillItemsEvictorJobFactory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DaggerInternalFactory-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsStorageLocalBulkOpWorkProcessor_Factory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> bulkChangesHelperProvider_;
    id <JavaxInjectProvider> changesCoordinatorProvider_;
    id <JavaxInjectProvider> executorProvider_;
    id <JavaxInjectProvider> currentJobPriorityProvider_;
    id <JavaxInjectProvider> itemChangesTableControllerProvider_;
    id <JavaxInjectProvider> itemsCoordinatorProvider_;
    id <JavaxInjectProvider> itemsTableControllerProvider_;
    id <JavaxInjectProvider> localBulkOpWorkTableControllerProvider_;
    id <JavaxInjectProvider> itemsStorageUpdatePublisherProvider_;
    id <JavaxInjectProvider> processLocalBulkOpWorkJobFactoryProvider_;
    id <JavaxInjectProvider> writeSequenceIdTableControllerProvider_;
    id <JavaxInjectProvider> settableItemsSyncControlServiceNeedsToSyncProvider_;
    id <JavaxInjectProvider> transactionPromiseFactoryProvider_;
}

- (void)dealloc;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataItemsChangesStorageApiPermanentDeletionRequestHandler-Protocol.h"

@class ComGoogleAppsBigtopDataItemsStorageControllersItemVisibilityTableController, ComGoogleAppsBigtopDataItemsStorageControllersItemsSyncStateTableController, NSString;
@protocol ComGoogleAppsBigtopDataItemsSyncServiceApiItemsSyncService, JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsChangesStoragePermanentDeletionRequestHandlerImpl : NSObject <ComGoogleAppsBigtopDataItemsChangesStorageApiPermanentDeletionRequestHandler>
{
    id <JavaxInjectProvider> executor_;
    ComGoogleAppsBigtopDataItemsStorageControllersItemVisibilityTableController *itemVisibilityTableController_;
    id <ComGoogleAppsBigtopDataItemsSyncServiceApiItemsSyncService> itemsSyncService_;
    ComGoogleAppsBigtopDataItemsStorageControllersItemsSyncStateTableController *itemsSyncStateTableController_;
}

- (void)dealloc;
- (id)handleRequestWithComGoogleAppsBigtopDataItemsItemsProto_PermanentlyDeleteByViewRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


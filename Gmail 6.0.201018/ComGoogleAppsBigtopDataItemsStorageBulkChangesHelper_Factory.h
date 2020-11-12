//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DaggerInternalFactory-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsStorageBulkChangesHelper_Factory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> changesCoordinatorProvider_;
    id <JavaxInjectProvider> clustersTableControllerProvider_;
    id <JavaxInjectProvider> executorProvider_;
    id <JavaxInjectProvider> itemChangesTableControllerProvider_;
    id <JavaxInjectProvider> itemsCoordinatorProvider_;
    id <JavaxInjectProvider> clustersCoordinatorProvider_;
    id <JavaxInjectProvider> localBulkOpWorkTableControllerProvider_;
    id <JavaxInjectProvider> syncHealthRecorderProvider_;
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

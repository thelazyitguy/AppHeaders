//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonUtilConcurrentAsyncFunction-Protocol.h"

@class ComGoogleAppsBigtopDataItemsMessagesStorageFetchedItemsSaverImpl, NSString;
@protocol JavaUtilList;

@interface ComGoogleAppsBigtopDataItemsMessagesStorageFetchedItemsSaverImpl_$Lambda$1 : NSObject <ComGoogleCommonUtilConcurrentAsyncFunction>
{
    ComGoogleAppsBigtopDataItemsMessagesStorageFetchedItemsSaverImpl *this$0_;
    id <JavaUtilList> val$fetchedItems_;
    id <JavaUtilList> val$clusters_;
    id <JavaUtilList> val$itemServerPermIdsToExpunge_;
}

- (void)dealloc;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonUtilConcurrentAsyncCallable-Protocol.h"

@class ComGoogleAppsBigtopDataItemsCommonListsFetchOrBackfillViewReason, ComGoogleAppsBigtopDataItemsItemlistsMemoryItemList, ComGoogleAppsBigtopDataItemsItemlistsMemoryItemList_ShortCircuitSetting, ComGoogleAppsBigtopDataItemsItemsProto_RequestPriority, NSString;

@interface ComGoogleAppsBigtopDataItemsItemlistsMemoryItemList_$Lambda$22 : NSObject <ComGoogleCommonUtilConcurrentAsyncCallable>
{
    ComGoogleAppsBigtopDataItemsItemlistsMemoryItemList *this$0_;
    ComGoogleAppsBigtopDataItemsItemlistsMemoryItemList_ShortCircuitSetting *val$shortCircuitSetting_;
    ComGoogleAppsBigtopDataItemsCommonListsFetchOrBackfillViewReason *val$fetchOrBackfillViewReason_;
    ComGoogleAppsBigtopDataItemsItemsProto_RequestPriority *val$calculatedBackfillRequestPriority_;
}

- (void)dealloc;
- (id)call;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

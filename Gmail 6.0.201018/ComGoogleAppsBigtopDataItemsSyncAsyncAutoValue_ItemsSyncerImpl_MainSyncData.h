//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopDataItemsSyncAsyncItemsSyncerImpl_MainSyncData.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_RequestPriority, ComGoogleAppsBigtopDataItemsStorageChangeBatcher_ChangeToServerBatch, ComGoogleCommonCollectRange, JBTSConfigureSyncRequest_SyncMode;

@interface ComGoogleAppsBigtopDataItemsSyncAsyncAutoValue_ItemsSyncerImpl_MainSyncData : ComGoogleAppsBigtopDataItemsSyncAsyncItemsSyncerImpl_MainSyncData
{
    ComGoogleAppsBigtopDataItemsStorageChangeBatcher_ChangeToServerBatch *getChangeToServerBatch_;
    long long getHighestSyncedVersion_;
    ComGoogleCommonCollectRange *getMailWatermarks_;
    int getSyncedItemCount_;
    JBTSConfigureSyncRequest_SyncMode *syncMode_;
    ComGoogleAppsBigtopDataItemsItemsProto_RequestPriority *requestPriority_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)requestPriority;
- (id)syncMode;
- (int)getSyncedItemCount;
- (id)getMailWatermarks;
- (long long)getHighestSyncedVersion;
- (id)getChangeToServerBatch;

@end

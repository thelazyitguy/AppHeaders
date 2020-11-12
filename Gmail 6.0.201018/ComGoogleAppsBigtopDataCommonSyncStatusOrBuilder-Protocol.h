//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsBigtopDataCommonItemsEntireSyncStatus;

@protocol ComGoogleAppsBigtopDataCommonSyncStatusOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (int)getUnsyncedDeferrableChanges;
- (_Bool)hasUnsyncedDeferrableChanges;
- (long long)getLastSyncTimestampMillis;
- (_Bool)hasLastSyncTimestampMillis;
- (long long)getDaysOfItemsToSync;
- (_Bool)hasDaysOfItemsToSync;
- (long long)getOldestItemSyncedTimestampMillis;
- (_Bool)hasOldestItemSyncedTimestampMillis;
- (long long)getLastSyncIterationWithChangesTimeMs;
- (_Bool)hasLastSyncIterationWithChangesTimeMs;
- (_Bool)getHasUnsyncedLocalChangesBlockingSearch;
- (_Bool)hasHasUnsyncedLocalChangesBlockingSearch;
- (int)getNumPendingSapiChangesToCommit;
- (_Bool)hasNumPendingSapiChangesToCommit;
- (ComGoogleAppsBigtopDataCommonItemsEntireSyncStatus *)getItemsEntireSyncStatus;
- (_Bool)hasItemsEntireSyncStatus;
- (long long)getLastSuccessfulUploadAndDownloadSyncIterationTimeMs;
- (_Bool)hasLastSuccessfulUploadAndDownloadSyncIterationTimeMs;
- (_Bool)getHasReadyToBeSyncedPendingLocalChanges;
- (_Bool)hasHasReadyToBeSyncedPendingLocalChanges;
- (int)getNumPendingAttachmentsToDownloadInSubscription;
- (_Bool)hasNumPendingAttachmentsToDownloadInSubscription;
- (int)getNumPendingMessageDetailsToDownloadInSubscription;
- (_Bool)hasNumPendingMessageDetailsToDownloadInSubscription;
- (_Bool)getIsBackwardSyncComplete;
- (_Bool)hasIsBackwardSyncComplete;
- (int)getUnsyncedLocalChanges;
- (_Bool)hasUnsyncedLocalChanges;
- (int)getObjectsStored;
- (_Bool)hasObjectsStored;
- (_Bool)getIsSyncInProgress;
- (_Bool)hasIsSyncInProgress;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataCommonSyncStatus, ComGoogleAppsBigtopDataItemsStorageSyncstatusItemsSyncStatusManager, ComGoogleAppsBigtopDataMultiloginMultiLoginUrlRewriter, ComGoogleAppsXplatJobsJobQueue, ComGoogleCommonBaseOptional;
@protocol ComGoogleAppsBigtopDataItemsStorageMessagedetailsApiItemMessageAttachmentsCoordinator, ComGoogleAppsXplatJobsJobQueue_EnqueuedJob, JBTAttachmentCacheStorage, JBTNetworkStatusChecker, JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsSyncAttachmentsItemMessageAttachmentsDownloader : NSObject
{
    id <ComGoogleAppsBigtopDataItemsStorageMessagedetailsApiItemMessageAttachmentsCoordinator> itemMessageAttachmentsCoordinator_;
    ComGoogleAppsBigtopDataItemsStorageSyncstatusItemsSyncStatusManager *itemsSyncStatusManager_;
    id <JBTAttachmentCacheStorage> attachmentCacheStorage_;
    id <JBTNetworkStatusChecker> networkStatusChecker_;
    id <JavaxInjectProvider> shouldPrecacheAttachments_;
    id <JavaxInjectProvider> precacheIntervalMilliSec_;
    ComGoogleAppsXplatJobsJobQueue *jobQueue_;
    id <JavaxInjectProvider> executor_;
    ComGoogleCommonBaseOptional *databaseName_;
    ComGoogleAppsBigtopDataMultiloginMultiLoginUrlRewriter *multiLoginUrlRewriter_;
    ComGoogleAppsBigtopDataCommonSyncStatus *lastSeenSyncStatus_;
    id <ComGoogleAppsXplatJobsJobQueue_EnqueuedJob> lastEnqueuedJob_;
    int lastEnqueuedJobDelayMs_;
}

+ (void)initialize;
- (void)dealloc;
- (id)runDownload;
- (void)enqueueDownloadJobWithInt:(int)arg1;

@end

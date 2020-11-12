//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataCommonSyncStatus, ComGoogleAppsBigtopDataItemsStorageControllersItemMessageTombstonesTableController, ComGoogleAppsBigtopDataItemsStorageControllersItemTombstonesTableController, ComGoogleAppsBigtopDataItemsStorageControllersItemsTableController, ComGoogleAppsBigtopDataItemsStorageControllersSyncReasonsTableController, ComGoogleAppsBigtopDataStorageControllersWriteSequenceIdTableController, ComGoogleAppsXplatJobsJobQueue, ComGoogleAppsXplatStorageDbTransactionPromiseFactory;
@protocol ComGoogleAppsBigtopDataItemsOfflinesearchApiIndexStorageState, ComGoogleAppsBigtopDataItemsOfflinesearchApiWriteToExternalIndexClient, ComGoogleAppsBigtopDataItemsStorageMessagedetailsApiItemMessagesCoordinator, ComGoogleAppsBigtopDataStorageSystempropertiesApiSystemPropertiesClient, ComGoogleCommonTimeClock, JavaxInjectProvider, XPTCountersApi;

@interface ComGoogleAppsBigtopDataItemsOfflinesearchIndexingOfflineSearchIndexer : NSObject
{
    ComGoogleAppsXplatJobsJobQueue *jobQueue_;
    id <JavaxInjectProvider> executor_;
    id <ComGoogleCommonTimeClock> clock_;
    id <XPTCountersApi> countersApi_;
    id <JavaxInjectProvider> indexBumpMessagesForOfflineSearch_;
    id <ComGoogleAppsBigtopDataItemsOfflinesearchApiIndexStorageState> indexStorageState_;
    ComGoogleAppsBigtopDataItemsStorageControllersItemsTableController *itemsTableController_;
    id <ComGoogleAppsBigtopDataItemsStorageMessagedetailsApiItemMessagesCoordinator> itemMessagesCoordinator_;
    ComGoogleAppsBigtopDataItemsStorageControllersItemTombstonesTableController *itemTombstonesTableController_;
    ComGoogleAppsBigtopDataItemsStorageControllersItemMessageTombstonesTableController *itemMessageTombstonesTableController_;
    ComGoogleAppsBigtopDataItemsStorageControllersSyncReasonsTableController *syncReasonsTableController_;
    ComGoogleAppsBigtopDataStorageControllersWriteSequenceIdTableController *writeSequenceIdTableController_;
    id <ComGoogleAppsBigtopDataStorageSystempropertiesApiSystemPropertiesClient> systemPropertiesClient_;
    id <ComGoogleAppsBigtopDataItemsOfflinesearchApiWriteToExternalIndexClient> writeToExternalClient_;
    id <JavaxInjectProvider> webOfflineProvider_;
    _Bool useXplatDb_;
    ComGoogleAppsXplatStorageDbTransactionPromiseFactory *transactionPromiseFactory_;
    ComGoogleAppsBigtopDataCommonSyncStatus *lastSeenSyncStatus_;
}

+ (void)initialize;
- (void)dealloc;
- (void)enqueueIndexingJobWithInt:(int)arg1;
- (id)runIndexingWorkIfAllowed;
- (id)resetOfflineIndexedWriteSequenceId;

@end

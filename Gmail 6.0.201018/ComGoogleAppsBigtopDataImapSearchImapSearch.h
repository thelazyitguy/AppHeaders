//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataImapCommandsImapFetchCommandProcessor, ComGoogleAppsBigtopDataImapCommandsImapSearchCommandProcessor, ComGoogleAppsBigtopDataImapCommandsImapSelectCommandProcessor, ComGoogleAppsBigtopDataImapCommonImapThreadProtoUtils, ComGoogleAppsBigtopDataImapStorageImapThreadReader, ComGoogleAppsBigtopDataImapStorageMessageSummaryTableController, ComGoogleAppsBigtopDataImapSyncImapChangeFromServerReconciler, ComGoogleAppsBigtopDataImapSyncImapFolderResolver, ComGoogleAppsXplatSqlSqlDatabase;
@protocol ComGoogleAppsBigtopDataMailconnectionMailConnectionTaskRunner, JavaUtilConcurrentExecutor;

@interface ComGoogleAppsBigtopDataImapSearchImapSearch : NSObject
{
    id <JavaUtilConcurrentExecutor> imapExecutor_;
    ComGoogleAppsXplatSqlSqlDatabase *database_;
    id <ComGoogleAppsBigtopDataMailconnectionMailConnectionTaskRunner> taskRunner_;
    ComGoogleAppsBigtopDataImapSyncImapFolderResolver *imapFolderResolver_;
    ComGoogleAppsBigtopDataImapCommandsImapSearchCommandProcessor *searchCommandProcessor_;
    ComGoogleAppsBigtopDataImapCommandsImapSelectCommandProcessor *selectCommandProcessor_;
    ComGoogleAppsBigtopDataImapCommandsImapFetchCommandProcessor *fetchCommandProcessor_;
    ComGoogleAppsBigtopDataImapStorageMessageSummaryTableController *messageSummaryTableController_;
    ComGoogleAppsBigtopDataImapSyncImapChangeFromServerReconciler *changeFromServerReconciler_;
    ComGoogleAppsBigtopDataImapStorageImapThreadReader *threadReader_;
    ComGoogleAppsBigtopDataImapCommonImapThreadProtoUtils *imapThreadProtoUtils_;
}

+ (void)initialize;
- (void)dealloc;
- (id)searchWithComGoogleAppsBigtopDataImapSearchImapSearchRequest:(id)arg1;

@end


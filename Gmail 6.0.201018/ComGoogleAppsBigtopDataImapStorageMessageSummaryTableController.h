//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsXplatSqlRowReader, ComGoogleAppsXplatSqlSqlTableController;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataImapStorageMessageSummaryTableController : NSObject
{
    ComGoogleAppsXplatSqlSqlTableController *innerController_;
    ComGoogleAppsXplatSqlRowReader *rowReader_;
    id <JavaxInjectProvider> imapExecutor_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getUidsByFolderNameWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2;
- (id)getMessagesInFolderWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataImapImapProto_ImapFolder:(id)arg2;
- (id)getThreadIdByRfc822MessageIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2;
- (id)getFolderNameByPermanentLocalIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2;
- (id)getUidByPermanentLocalIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2;
- (id)getThreadIdOrNullByRowIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaLangLong:(id)arg2;
- (id)getRowIdThreadIdPairsByFolderNameWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2;
- (id)getThreadIdsByFolderNameAndUidsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2 withJavaUtilCollection:(id)arg3;
- (id)getThreadIdsByFolderNameWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3;
- (id)getMessagesByThreadIdsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilCollection:(id)arg2;
- (id)getMessagesByThreadIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2;
- (id)getMessagesByFolderAndUidsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2 withJavaUtilCollection:(id)arg3;
- (id)getUidsByFolderAndUidsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2 withJavaUtilCollection:(id)arg3;
- (id)getMessagesByRfc822MessageIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2;
- (id)getMessagesByFingerprintsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilCollection:(id)arg2;
- (id)getMessagesByPermanentLocalIdsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2;
- (id)getRowIdsByPermanentLocalIdsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;
- (id)getMessageOrNullByPermanentLocalIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2;
- (id)getMailThreadsForThreadWithUnreadMessagesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)getNumberOfStarredThreadsHavingUnreadMessagesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)getNumberOfThreadsByFolderWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)getNumberOfThreadsHavingUnreadMessagesByFolderWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)getMaxUidForMessagesInFolderWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2;
- (id)deleteRowsByRowIdsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;
- (id)insertOrUpdateMessageEntriesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;
- (id)insertMessageEntryWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataImapCommonMessageSummaryEntry:(id)arg2;

@end

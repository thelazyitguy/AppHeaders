//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsXplatSqlSqlDatabase.h"

@class ComGoogleAppsXplatSqlSqliteSqlitePlatformAdaptor, ComGoogleAppsXplatSqlSqliteSqliteTransactionFactory, ComGoogleAppsXplatSqlVirtualConnectionPool, ComGoogleCommonBaseOptional;
@protocol ComGoogleAppsXplatClockXClock, ComGoogleAppsXplatObserveSettable;

@interface ComGoogleAppsXplatSqlSqliteSqliteDatabase : ComGoogleAppsXplatSqlSqlDatabase
{
    ComGoogleAppsXplatSqlSqliteSqlitePlatformAdaptor *platformAdaptor_;
    ComGoogleAppsXplatSqlVirtualConnectionPool *connectionPool_;
    id <ComGoogleAppsXplatClockXClock> clock_;
    ComGoogleAppsXplatSqlSqliteSqliteTransactionFactory *transactionFactory_;
    ComGoogleCommonBaseOptional *migrationRunner_;
    ComGoogleCommonBaseOptional *migrationExecutor_;
    id <ComGoogleAppsXplatObserveSettable> databaseStarted_;
}

+ (void)initialize;
- (void)dealloc;
- (id)onStopWithJavaUtilConcurrentExecutor:(id)arg1;
- (id)hibernateImpl;
- (id)onStartWithJavaUtilConcurrentExecutor:(id)arg1;
- (id)getTransactionImplWithComGoogleAppsXplatSqlSqlTransactionType:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3;

@end


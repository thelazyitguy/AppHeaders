//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopDataStorageApiSqliteStorageConfigComponent.h"

@class ComGoogleAppsXplatSqlStorageMode, ComGoogleCommonBaseOptional, JavaIoFile;

@interface ComGoogleAppsBigtopDataStorageApiAutoValue_SqliteStorageConfigComponent : ComGoogleAppsBigtopDataStorageApiSqliteStorageConfigComponent
{
    JavaIoFile *databaseFile_;
    ComGoogleCommonBaseOptional *databaseName_;
    ComGoogleCommonBaseOptional *databaseSerializer_;
    ComGoogleCommonBaseOptional *maxConnections_;
    ComGoogleAppsXplatSqlStorageMode *storageMode_;
    ComGoogleCommonBaseOptional *sqliteJdbcVersion_;
    _Bool forceConstantTransactionPrioritizer_;
}

- (void)dealloc;
- (_Bool)forceConstantTransactionPrioritizer;
- (id)sqliteJdbcVersion;
- (id)storageMode;
- (id)maxConnections;
- (id)databaseSerializer;
- (id)databaseName;
- (id)databaseFile;

@end

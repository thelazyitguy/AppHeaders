//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopDataStorageApiSqliteStorageConfigComponent_Builder.h"

@class ComGoogleAppsXplatSqlStorageMode, ComGoogleCommonBaseOptional, JavaIoFile, JavaLangBoolean;

@interface ComGoogleAppsBigtopDataStorageApiAutoValue_SqliteStorageConfigComponent_Builder : ComGoogleAppsBigtopDataStorageApiSqliteStorageConfigComponent_Builder
{
    JavaIoFile *databaseFile_;
    ComGoogleCommonBaseOptional *databaseName_;
    ComGoogleCommonBaseOptional *databaseSerializer_;
    ComGoogleCommonBaseOptional *maxConnections_;
    ComGoogleAppsXplatSqlStorageMode *storageMode_;
    ComGoogleCommonBaseOptional *sqliteJdbcVersion_;
    JavaLangBoolean *forceConstantTransactionPrioritizer_;
}

- (void)dealloc;
- (id)build;
- (id)forceConstantTransactionPrioritizerWithBoolean:(_Bool)arg1;
- (id)sqliteJdbcVersionWithComGoogleCommonBaseOptional:(id)arg1;
- (id)storageModeWithComGoogleAppsXplatSqlStorageMode:(id)arg1;
- (id)maxConnectionsWithComGoogleCommonBaseOptional:(id)arg1;
- (id)databaseSerializerWithComGoogleAppsXplatSqlSerializationJsonDatabaseSerializer:(id)arg1;
- (id)databaseNameWithComGoogleCommonBaseOptional:(id)arg1;
- (id)databaseFileWithJavaIoFile:(id)arg1;

@end

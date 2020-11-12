//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsBigtopDataStorageSchemaSettings, ComGoogleAppsXplatStorageDbTransactionPromise;
@protocol JavaUtilList;

@protocol ComGoogleAppsBigtopDataStorageSchemaSettingsDao <JavaObject>
- (ComGoogleAppsXplatStorageDbTransactionPromise *)replaceWithComGoogleAppsBigtopDataStorageSchemaSettings:(ComGoogleAppsBigtopDataStorageSchemaSettings *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)insertListWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)replaceListWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)updateAllToDirtyWithBoolean:(_Bool)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectAllServerPermIds;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryBeyondRowIdWithLimitWithLong:(long long)arg1 withInt:(int)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteByRowIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteDirtyWithBoolean:(_Bool)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)countDirtyWithBoolean:(_Bool)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)countAll;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectByRowIdWithLong:(long long)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)bulkQueryWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)querySettingsByServerPermIdWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryRowIdByServerPermIdWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteByRowIdListWithJavaUtilList:(id <JavaUtilList>)arg1;
@end

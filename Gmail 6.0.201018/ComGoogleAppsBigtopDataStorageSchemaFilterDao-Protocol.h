//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsBigtopDataStorageSchemaFilterEntry, ComGoogleAppsXplatStorageDbTransactionPromise, NSString;
@protocol JavaUtilList;

@protocol ComGoogleAppsBigtopDataStorageSchemaFilterDao <JavaObject>
- (ComGoogleAppsXplatStorageDbTransactionPromise *)bulkDeleteByServerPermIdWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)updateWithComGoogleAppsBigtopDataStorageSchemaFilterEntry:(ComGoogleAppsBigtopDataStorageSchemaFilterEntry *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)insertWithComGoogleAppsBigtopDataStorageSchemaFilterEntry:(ComGoogleAppsBigtopDataStorageSchemaFilterEntry *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)insertListWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)bulkQueryServerPermIdWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectWhereServerPermIdEqualsWithNSString:(NSString *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)selectAll;
@end
